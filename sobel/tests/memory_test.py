import logging
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Event, FallingEdge, ReadOnly, RisingEdge, Trigger, Timer

# synchronous write helper
async def write (dut, addr, data):
  # enable a, which is write in the RTL
  dut.en_a.value = 1
  dut.addr_a.value = addr
  dut.din.value = data
  await RisingEdge(dut.clock)
  dut.en_a.value = 0
  dut.din.value = 0
# synchronous read helper
async def read (dut, addr):
  # enable b, which is read in the RTL
  dut.en_a.value = 1
  dut.addr_a.value = addr
  await RisingEdge(dut.clock)
  await ReadOnly()
  val = int(dut.dout.value)
  dut.din.value = 0
  return val

@cocotb.test()
async def process_3x3_test (dut):
  pass

@cocotb.test()
async def line_buffer_test (dut):
  pass

@cocotb.test()
async def simple_dual_port_bram_test (dut):
  # initialize a clock
  my_clock = Clock(dut.clock, 10, units="ns")
  cocotb.start_soon(my_clock.start())
  
  # init dut
  dut.en_a.value = 0
  dut.en_b.value = 0
  dut.addr_a.value = 0
  dut.addr_b.value = 0
  dut.din.value = 0

  await RisingEdge(dut.clock)
  await RisingEdge(dut.clock)

  # length
  length = 128

  
