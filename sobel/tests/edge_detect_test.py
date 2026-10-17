import logging
import cocotb
import numpy as np
from PIL import Image
from pathlib import Path
from tqdm import tqdm

from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, with_timeout
from cocotb.result import SimTimeoutError

# -----------------------------------------------------------------------------
# Configuration & Paths
# -----------------------------------------------------------------------------
TEST_DIR = Path(__file__).resolve().parent
IMAGE_DIR = TEST_DIR / "images"

CLK_PERIOD_NS  = 10         # 100 MHz
BAUD_RATE      = 1_000_000  # 1 Mbps
CYCLES_PER_BIT = int(100_000_000 / BAUD_RATE)
BIT_TIME_NS    = CYCLES_PER_BIT * CLK_PERIOD_NS

WIDTH          = 128
HEIGHT         = 128
THRESHOLD      = 100

# Pipeline flush bytes needed to push the last pixel out of the 3x3 buffer
PIPELINE_FLUSH = 2 * (2 * WIDTH + 2) + 2


# -----------------------------------------------------------------------------
# Bit-Accurate Python Reference Model
# -----------------------------------------------------------------------------
def run_python_reference(img_array: np.ndarray, threshold: int = 100) -> np.ndarray:
    """Exact software model matching the FPGA bit-growth and operations."""
    h, w = img_array.shape
    blurred = np.zeros((h, w), dtype=np.uint8)
    
    # 1. Gaussian Blur (Weights: [[1, 2, 1], [2, 4, 2], [1, 2, 1]] >> 4)
    for r in range(1, h - 1):
        for c in range(1, w - 1):
            p0, p1, p2 = img_array[r - 1, c - 1 : c + 2]
            p3, p4, p5 = img_array[r,     c - 1 : c + 2]
            p6, p7, p8 = img_array[r + 1, c - 1 : c + 2]

            acc = (
                int(p0) + 2 * int(p1) + int(p2) +
                2 * int(p3) + 4 * int(p4) + 2 * int(p5) +
                int(p6) + 2 * int(p7) + int(p8)
            )
            blurred[r, c] = (acc >> 4) & 0xFF

    # 2. Sobel Operator (Manhattan magnitude over blurred 3x3)
    edges = np.zeros((h, w), dtype=np.uint8)
    for r in range(1, h - 1):
        for c in range(1, w - 1):
            p0, p1, p2 = blurred[r - 1, c - 1 : c + 2]
            p3, p4, p5 = blurred[r,     c - 1 : c + 2]
            p6, p7, p8 = blurred[r + 1, c - 1 : c + 2]

            gx = (int(p2) - int(p0)) + 2 * (int(p5) - int(p3)) + (int(p8) - int(p6))
            gy = (int(p6) - int(p0)) + 2 * (int(p7) - int(p1)) + (int(p8) - int(p2))

            mag = abs(gx) + abs(gy)
            edges[r, c] = 255 if mag > threshold else 0

    return edges


# -----------------------------------------------------------------------------
# UART Helpers
# -----------------------------------------------------------------------------
async def uart_send_byte(dut, byte_val: int):
    """Drives standard 8-N-1 UART transmission onto dut.data_rx."""
    dut.data_rx.value = 0 # Start bit
    await Timer(BIT_TIME_NS, unit="ns")

    for i in range(8):    # 8 Data bits (LSB first)
        dut.data_rx.value = (byte_val >> i) & 1
        await Timer(BIT_TIME_NS, unit="ns")

    dut.data_rx.value = 1 # Stop bit
    await Timer(BIT_TIME_NS, unit="ns")
    # Back-to-back transmission: No artificial delay here!


async def uart_receive_monitor(dut, expected_count: int, rx_buffer: list):
    """Background monitor continuously capturing bytes from dut.data_tx."""
    while len(rx_buffer) < expected_count:
        await FallingEdge(dut.data_tx)
        
        # Sample mid-start-bit to guarantee framing stability
        await Timer(BIT_TIME_NS // 2, unit="ns")
        assert dut.data_tx.value == 0, "Framing error: corrupt start bit"

        received = 0
        for i in range(8):
            await Timer(BIT_TIME_NS, unit="ns")
            received |= (int(dut.data_tx.value) << i)

        # Verify stop bit
        await Timer(BIT_TIME_NS, unit="ns")
        assert dut.data_tx.value == 1, "Framing error: corrupt stop bit"

        rx_buffer.append(received)


# -----------------------------------------------------------------------------
# Top-Level Test
# -----------------------------------------------------------------------------
@cocotb.test()
async def test_edge_detection(dut):
    logger = logging.getLogger("filter_system_test")

    # 1. Initialize clock (100 MHz)
    cocotb.start_soon(Clock(dut.clock, CLK_PERIOD_NS, unit="ns").start())

    # 2. Reset DUT
    dut.reset_n.value = 0
    dut.data_rx.value = 1  # UART idle state is high
    for _ in range(5):
        await RisingEdge(dut.clock)
    dut.reset_n.value = 1
    await RisingEdge(dut.clock)

    # 3. Load input image
    img_path = IMAGE_DIR / "hamerschlag.png"
    raw_img = Image.open(img_path).convert("L").resize((WIDTH, HEIGHT))
    img_array = np.array(raw_img, dtype=np.uint8)
    pixel_list = img_array.flatten().tolist()

    # 4. Compute golden reference model
    logger.info("Computing software reference model...")
    edge_img_reference = run_python_reference(img_array, threshold=THRESHOLD)

    # 5. Prepare payload with pipeline flush bytes
    stream_payload = pixel_list + [0] * PIPELINE_FLUSH
    total_rx_target = len(pixel_list)  # Max theoretical valid pixels
    rx_bytes = []

    # 6. Launch receiver monitor coroutine in background
    monitor_coroutine = cocotb.start_soon(
        uart_receive_monitor(dut, total_rx_target, rx_bytes)
    )

    # 7. Transmit pixels over UART with live progress bar
    logger.info(f"Streaming {len(stream_payload)} bytes over UART at {BAUD_RATE} baud...")
    for byte_val in tqdm(stream_payload, desc="UART Stream", unit="B", ncols=90):
        await uart_send_byte(dut, byte_val)

    # 8. Gracefully wait for hardware pipeline to drain
    logger.info("Transmission complete. Waiting for hardware to flush final valid pixels...")
    try:
        # 500 bit-times of timeout buffer, using correct timeout_unit argument
        await with_timeout(monitor_coroutine, BIT_TIME_NS * 500, timeout_unit="ns")
    except SimTimeoutError:
        logger.info(f"Hardware returned {len(rx_bytes)} valid bytes (Expected for 3x3 drop: {(WIDTH-2)*(HEIGHT-2)})")

    # 9. Dynamic Reconstruct Logic (Handles boundary drops natively)
    received_count = len(rx_bytes)
    expected_full = WIDTH * HEIGHT
    expected_cropped = (WIDTH - 2) * (HEIGHT - 2)

    if received_count == expected_cropped:
        # Hardware dropped the 1-pixel outer border (expected behavior)
        inner_edges = np.array(rx_bytes, dtype=np.uint8).reshape((HEIGHT - 2, WIDTH - 2))
        hardware_edges = np.zeros((HEIGHT, WIDTH), dtype=np.uint8)
        hardware_edges[1:-1, 1:-1] = inner_edges  # Pad back to 128x128 with zeros
    elif received_count == expected_full:
        # Hardware output the full 128x128
        hardware_edges = np.array(rx_bytes, dtype=np.uint8).reshape((HEIGHT, WIDTH))
    else:
        raise ValueError(f"Abnormal byte count: received {received_count} bytes, but expected either {expected_cropped} or {expected_full}.")

    # 10. Save outputs
    IMAGE_DIR.mkdir(parents=True, exist_ok=True)
    Image.fromarray(hardware_edges).save(IMAGE_DIR / "hamerschlag_dut_edges.png")
    Image.fromarray(edge_img_reference).save(IMAGE_DIR / "hamerschlag_ref_edges.png")
    logger.info(f"Saved hardware output to {IMAGE_DIR / 'hamerschlag_dut_edges.png'}")

    # 11. Assert verification over valid interior pixels (excluding outer 2-pixel border)
    interior_dut = hardware_edges[2:-2, 2:-2]
    interior_ref = edge_img_reference[2:-2, 2:-2]
    mismatches = int(np.sum(interior_dut != interior_ref))

    logger.info(f"Interior pixel check finished. Mismatches: {mismatches}")
    assert mismatches == 0, f"Hardware output diverged by {mismatches} pixels!"