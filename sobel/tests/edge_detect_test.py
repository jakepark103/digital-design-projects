import logging
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Event, FallingEdge, ReadOnly, RisingEdge, Trigger


# apply same operations in python to test

@cocotb.test()
async def test_edge_detection ():
  # test the entire system
  # read in a png to "send"
  # init dut
  # send to dut
  # receive resulting bytes
  # display the result png