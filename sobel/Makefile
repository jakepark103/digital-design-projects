# Simulator selection
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# Export tests directory to Python search path
export PYTHONPATH := $(PWD)/tests:$(PYTHONPATH)

# Sources in ./hdl
VERILOG_SOURCES += $(PWD)/hdl/simple_dual_port_ram.sv
VERILOG_SOURCES += $(PWD)/hdl/linebuffer.sv
VERILOG_SOURCES += $(PWD)/hdl/process_3x3.sv
VERILOG_SOURCES += $(PWD)/hdl/gaussian.sv
VERILOG_SOURCES += $(PWD)/hdl/sobel.sv
VERILOG_SOURCES += $(PWD)/hdl/uart_rx.sv
VERILOG_SOURCES += $(PWD)/hdl/uart_tx.sv
VERILOG_SOURCES += $(PWD)/hdl/filter.sv

TOPLEVEL = filter_system

# Matches ./tests/edge_detect_test.py
COCOTB_TEST_MODULES = edge_detect_test

ifeq ($(SIM),verilator)
EXTRA_ARGS += --trace --trace-structs -Wno-fatal
endif

ifeq ($(SIM),icarus)
COMPILE_ARGS += -g2012
WAVES ?= 1
endif

include $(shell cocotb-config --makefiles)/Makefile.sim