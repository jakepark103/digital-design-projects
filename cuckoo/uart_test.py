import serial
import time
import random
import sys

# Update to your actual COM port (e.g., 'COM4' on Windows, '/dev/ttyUSB0' on Linux)
PORT = 'COM4'
BAUDRATE = 1_000_000

def run_uart_test():
    try:
        ser = serial.Serial(
            port=PORT,
            baudrate=BAUDRATE,
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            timeout=0.1
        )
    except serial.SerialException as e:
        print(f"Error opening port {PORT}: {e}")
        sys.exit(1)

    time.sleep(0.1)
    ser.reset_input_buffer()
    ser.reset_output_buffer()

    print(f"Connected to {PORT} at {BAUDRATE} baud.\n")

    # 1. Deterministic Corner-Case Vectors
    test_vectors = [0x00, 0xFF, 0x55, 0xAA, 0x41, 0x7E, 0x81, 0x0F]
    print("--- Running Deterministic Vectors ---")
    for val in test_vectors:
        send_b = bytes([val])
        ser.write(send_b)
        recv_b = ser.read(1)

        if not recv_b:
            print(f"[FAIL] Sent: 0x{val:02X} | TIMEOUT (no response)")
            ser.close()
            sys.exit(1)

        recv_val = recv_b[0]
        if recv_val == val:
            print(f"[PASS] Sent: 0x{val:02X} | Echoed: 0x{recv_val:02X}")
        else:
            print(f"[FAIL] Sent: 0x{val:02X} | Echoed: 0x{recv_val:02X}")
            ser.close()
            sys.exit(1)

    # 2. Burst Stress Test (1,000 Random Bytes)
    print("\n--- Running 1,000-Byte Random Burst Test ---")
    random_bytes = bytearray(random.getrandbits(8) for _ in range(1000))

    start_time = time.time()
    ser.write(random_bytes)
    received = ser.read(1000)
    elapsed = time.time() - start_time

    if len(received) != 1000:
        print(f"[FAIL] Incomplete read: Expected 1000 bytes, got {len(received)}")
        ser.close()
        sys.exit(1)

    mismatches = 0
    for idx, (sent_b, rec_b) in enumerate(zip(random_bytes, received)):
        if sent_b != rec_b:
            mismatches += 1
            if mismatches <= 5:
                print(f"Mismatch at index {idx}: sent 0x{sent_b:02X}, received 0x{rec_b:02X}")

    if mismatches == 0:
        rate_kbps = (1000 * 10) / elapsed / 1000  # 10 bits per UART frame
        print(f"[PASS] All 1,000 bytes matched perfectly!")
        print(f"Transfer Time: {elapsed * 1000:.2f} ms (~{rate_kbps:.2f} kbps effective link rate)")
    else:
        print(f"[FAIL] Total mismatches: {mismatches}/1000")

    ser.close()

if __name__ == '__main__':
    run_uart_test()