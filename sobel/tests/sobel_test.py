import logging
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Event, FallingEdge, ReadOnly, RisingEdge, Trigger, Timer
# helper function to set pixel values 
def set_pixels(dut, p):
  dut.p0.value = p[0]
  dut.p1.value = p[1]
  dut.p2.value = p[2]
  
  dut.p3.value = p[3]
  dut.p4.value = p[4]
  dut.p5.value = p[5]
  
  dut.p6.value = p[6]
  dut.p7.value = p[7]
  dut.p8.value = p[8]

# have python compute it itself, and compare to device
def compute_expected_sobel(p):
  threshold=100
  # Gx = -p0 + p2 - 2*p3 + 2*p5 - p6 + p8
  gx = (p[2] - p[0]) + ((p[5] - p[3]) * 2) + (p[8] - p[6])
  
  # Gy = -p0 - 2*p1 - p2 + p6 + 2*p7 + p8
  gy = (p[6] - p[0]) + ((p[7] - p[1]) * 2) + (p[8] - p[2])
  
  mag = abs(gx) + abs(gy)
  
  return 255 if mag > threshold else 0

@cocotb.test()
async def sobel_test (dut):
  # test the sobel operator module with pixel data
  logger = logging.getLogger("sobel_tb")
  logger.debug("TESTING SOBEL LOGIC ON 3x3 PIXELS")

  tests = 1000
  score = 0

  for i in range(0, tests):
    # generate 9 random pixel values 0-255
    pixels = [random.randint(0, 255) for _ in range(9)]

    # init dut
    logger.info("Testing with random pixel values")
    set_pixels(dut, p)

    await Timer(5, units="ns")
    # check result
    output_val = int(dut.p_sobel_out.value)
    expected_val = int(compute_expected_sobel(p))
    # dut._log.info(f"Sobel Output: {output_val}")
    
    if (output_val == expected_val):
      score += 1
    else:
      logger.error(f"Oops, expected {expected_val}, got {output_val}")
  
  assert score == tests, f"Tests did not pass, score: {score} / {tests}"
  logger.info("All tests passed!")
  
