import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

# gemini created ts
async def mcp3008_responder(dut, return_byte: int):
    """Accurate SPI Mode 0,0 responder for MCP3008."""
    # 1. Wait for CS to assert active-low
    while dut.cs_n.value == 1:
        await RisingEdge(dut.clk)

    # 2. Drive MSB (bit 7) immediately before the first rising edge of dclk
    bit_idx = 7
    dut.cipo.value = (return_byte >> bit_idx) & 0x1

    # 3. For every subsequent bit (6 down to 0), update cipo on the falling edge of dclk
    while bit_idx > 0:
        await FallingEdge(dut.dclk)
        bit_idx -= 1
        dut.cipo.value = (return_byte >> bit_idx) & 0x1

    # 4. Wait for the final bit's clock pulse to finish, then release cipo
    await RisingEdge(dut.dclk)
    await FallingEdge(dut.dclk)
    dut.cipo.value = 0
# simulate and print out what the bcd would look like
async def bcd_display ():
  pass

@cocotb.test()
async def voltmeter_test():
  # start 100Mhz clock
  cocotb.start(Clock(dut.clk, 10, units="ns").start())
  # reset
  # init mcp3008 responder
  # receive, check if output is a real value(?)

