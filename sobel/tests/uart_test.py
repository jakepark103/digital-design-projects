import logging
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Event, FallingEdge, ReadOnly, RisingEdge, Trigger, Timer


def init_uart_rx(dut):
  pass

def init_uart_tx(dut):
  pass

@cocotb.test()
async def uart_rx_test (dut):

  score = 0
  tests = 1000
  
  for i in range(0, tests):
    pass

@cocotb.test()
async def uart_tx_test (dut):
  
  score = 0
  tests = 1000

  for i in range(0, tests):
    pass
  