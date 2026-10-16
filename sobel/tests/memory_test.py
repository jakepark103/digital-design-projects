import logging
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Event, FallingEdge, ReadOnly, RisingEdge, Trigger, Timer

@cocotb.test()
async def process_3x3_test (dut):
  pass

@cocotb.test()
async def line_buffer_test (dut):
  pass

@cocotb.test()
async def simple_dual_port_bram_test (dut):
  pass
