// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_voltmeter__Syms.h"


VL_ATTR_COLD void Vtb_voltmeter___024root__trace_init_sub__TOP__0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_init_sub__TOP__0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_voltmeter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"cipo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"copi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"dclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cs_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"bcd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"COUNT_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"MOCK_ADC_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"COUNT_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"cipo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"copi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"dclk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cs_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"bcd_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"delay_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"sample_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"channel0_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"spi_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"spi_read_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"adc_avg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"voltage_tenths",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"term0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"term1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"term2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"term3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"term4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"term5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"sum_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"sum_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"sum_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"sum_0123",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"bcd_voltage_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bcd_whole",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"bcd_tenths",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"bcd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "adc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"trigger",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"cipo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"copi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"dclk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cs_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"tx_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"rx_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"full_data_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"half_data_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bcdAdd0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "add0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bcdAdd1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "add0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bcdAdd2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "add0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bcdAdd3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "add0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bcdAdd4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "add0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "add3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"my_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_init_top(Vtb_voltmeter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_init_top\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_voltmeter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_voltmeter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_voltmeter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_voltmeter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_register(Vtb_voltmeter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_register\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_voltmeter___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_voltmeter___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_voltmeter___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_voltmeter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_const_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_const_0\n"); );
    // Body
    Vtb_voltmeter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_voltmeter___024root*>(voidSelf);
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_voltmeter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_const_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_const_0_sub_0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+104,(8U),32);
    bufp->fullCData(oldp+105,(0xc8U),8);
    bufp->fullIData(oldp+106,(8U),32);
    bufp->fullCData(oldp+107,(0x18U),8);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_whole),4);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_tenths),4);
    bufp->fullIData(oldp+110,(0x00000064U),32);
    bufp->fullIData(oldp+111,(0x00000032U),32);
    bufp->fullBit(oldp+112,(0U));
    bufp->fullCData(oldp+113,(0U),4);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_full_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_full_0\n"); );
    // Body
    Vtb_voltmeter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_voltmeter___024root*>(voidSelf);
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_voltmeter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_voltmeter___024root__trace_full_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_full_0_sub_0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_voltmeter__DOT__copi));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_voltmeter__DOT__dclk));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_voltmeter__DOT__cs_n));
    bufp->fullSData(oldp+3,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg),16);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter),32);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter),3);
    bufp->fullCData(oldp+6,(((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer) 
                             & ((- (IData)((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))) 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state) 
                                               >> 1U))))))),8);
    bufp->fullBit(oldp+7,((3U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger));
    bufp->fullSData(oldp+9,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator),11);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg),8);
    bufp->fullIData(oldp+11,((0x03ffffffU & ((IData)(0x00008000U) 
                                             + ((IData)(0x00002126U) 
                                                * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))))),26);
    bufp->fullCData(oldp+12,((0x000000ffU & (((IData)(0x00008000U) 
                                              + ((IData)(0x00002126U) 
                                                 * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                             >> 0x00000010U))),8);
    bufp->fullSData(oldp+13,((1U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000010U)))))),16);
    bufp->fullSData(oldp+14,((2U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000011U)))))),16);
    bufp->fullSData(oldp+15,((4U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000012U)))))),16);
    bufp->fullSData(oldp+16,((8U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000013U)))))),16);
    bufp->fullSData(oldp+17,((0x0016U & (- (IData)(
                                                   (1U 
                                                    & (((IData)(0x00008000U) 
                                                        + 
                                                        ((IData)(0x00002126U) 
                                                         * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                       >> 0x00000014U)))))),16);
    bufp->fullSData(oldp+18,((0x0032U & (- (IData)(
                                                   (1U 
                                                    & (((IData)(0x00008000U) 
                                                        + 
                                                        ((IData)(0x00002126U) 
                                                         * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                       >> 0x00000015U)))))),16);
    bufp->fullSData(oldp+19,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum))))),16);
    bufp->fullSData(oldp+20,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))))),16);
    bufp->fullSData(oldp+21,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))))),16);
    bufp->fullSData(oldp+22,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum))))),16);
    bufp->fullSData(oldp+23,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))))),16);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state),2);
    bufp->fullCData(oldp+25,((3U & ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                                     ? (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state)))))
                                     : ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                                         ? (((7U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))
                                             ? 2U : 1U)
                                         : (1U & (- (IData)(
                                                            (7U 
                                                             <= vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter)))))))),2);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state),2);
    bufp->fullCData(oldp+27,((3U & ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))
                                     ? ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))))) 
                                        & (2U | (- (IData)(
                                                           ((7U 
                                                             == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count)) 
                                                            & (0x00000063U 
                                                               == vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter))))))
                                     : ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))
                                         ? 2U : (1U 
                                                 & (- (IData)((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger)))))))),2);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count),3);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer),8);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter),32);
    bufp->fullBit(oldp+32,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2));
    bufp->fullBit(oldp+34,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4));
    bufp->fullCData(oldp+36,((1U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000010U)))))),4);
    bufp->fullCData(oldp+37,((2U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000011U)))))),4);
    bufp->fullCData(oldp+38,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum))),4);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum),5);
    bufp->fullCData(oldp+40,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum))),4);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum),5);
    bufp->fullCData(oldp+42,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum))),4);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum),5);
    bufp->fullCData(oldp+44,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum))),4);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum),5);
    bufp->fullBit(oldp+46,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4));
    bufp->fullCData(oldp+50,((4U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000012U)))))),4);
    bufp->fullCData(oldp+51,((8U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000013U)))))),4);
    bufp->fullCData(oldp+52,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))),4);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum),5);
    bufp->fullCData(oldp+54,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum))),4);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum),5);
    bufp->fullCData(oldp+56,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))),4);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum),5);
    bufp->fullCData(oldp+58,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum))),4);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum),5);
    bufp->fullBit(oldp+60,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3));
    bufp->fullBit(oldp+63,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4));
    bufp->fullCData(oldp+64,((6U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000014U)))))),4);
    bufp->fullCData(oldp+65,((2U & (- (IData)((1U & 
                                               (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000015U)))))),4);
    bufp->fullCData(oldp+66,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))),4);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum),5);
    bufp->fullCData(oldp+68,((1U & ((- (IData)((1U 
                                                & (((IData)(0x00008000U) 
                                                    + 
                                                    ((IData)(0x00002126U) 
                                                     * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                   >> 0x00000014U)))) 
                                    >> 4U))),4);
    bufp->fullCData(oldp+69,((3U & ((- (IData)((1U 
                                                & (((IData)(0x00008000U) 
                                                    + 
                                                    ((IData)(0x00002126U) 
                                                     * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                   >> 0x00000015U)))) 
                                    >> 4U))),4);
    bufp->fullCData(oldp+70,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum))),4);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum),5);
    bufp->fullCData(oldp+72,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))),4);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum),5);
    bufp->fullCData(oldp+74,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum))),4);
    bufp->fullCData(oldp+75,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum),5);
    bufp->fullBit(oldp+76,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2));
    bufp->fullBit(oldp+78,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3));
    bufp->fullBit(oldp+79,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4));
    bufp->fullCData(oldp+80,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum))),4);
    bufp->fullCData(oldp+81,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum),5);
    bufp->fullCData(oldp+82,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum))),4);
    bufp->fullCData(oldp+83,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum),5);
    bufp->fullCData(oldp+84,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum))),4);
    bufp->fullCData(oldp+85,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum),5);
    bufp->fullCData(oldp+86,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum))),4);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum),5);
    bufp->fullBit(oldp+88,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1));
    bufp->fullBit(oldp+89,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2));
    bufp->fullBit(oldp+90,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3));
    bufp->fullBit(oldp+91,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4));
    bufp->fullCData(oldp+92,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))),4);
    bufp->fullCData(oldp+93,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum),5);
    bufp->fullCData(oldp+94,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum))),4);
    bufp->fullCData(oldp+95,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum),5);
    bufp->fullCData(oldp+96,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))),4);
    bufp->fullCData(oldp+97,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum),5);
    bufp->fullCData(oldp+98,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum))),4);
    bufp->fullCData(oldp+99,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum),5);
    bufp->fullBit(oldp+100,(vlSelfRef.tb_voltmeter__DOT__clk));
    bufp->fullBit(oldp+101,(vlSelfRef.tb_voltmeter__DOT__rst_n));
    bufp->fullBit(oldp+102,(((~ (IData)(vlSelfRef.tb_voltmeter__DOT__cs_n)) 
                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__shift_reg) 
                                >> 7U))));
    bufp->fullCData(oldp+103,(vlSelfRef.tb_voltmeter__DOT__shift_reg),8);
}
