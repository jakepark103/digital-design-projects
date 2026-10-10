// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_voltmeter.h for the primary calling header

#include "Vtb_voltmeter__pch.h"

VlCoroutine Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__0(Vtb_voltmeter___024root* vlSelf);
VlCoroutine Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__1(Vtb_voltmeter___024root* vlSelf);

void Vtb_voltmeter___024root___eval_initial(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_initial\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_voltmeter__DOT__clk = 0U;
    }
    Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_voltmeter___024root____VbeforeTrig_h3b3f54b2__0(Vtb_voltmeter___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__0(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("voltmeter_tb.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_voltmeter__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                         nullptr, "voltmeter_test.sv", 
                                         51);
    vlSelfRef.tb_voltmeter__DOT__rst_n = 1U;
    while ((0U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg))) {
        Vtb_voltmeter___024root____VbeforeTrig_h3b3f54b2__0(vlSelf, 
                                                            "@(posedge tb_voltmeter.clk)");
        co_await vlSelfRef.__VtrigSched_h3b3f54b2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_voltmeter.clk)", 
                                                             "voltmeter_test.sv", 
                                                             56);
    }
    Vtb_voltmeter___024root____VbeforeTrig_h3b3f54b2__0(vlSelf, 
                                                        "@(posedge tb_voltmeter.clk)");
    co_await vlSelfRef.__VtrigSched_h3b3f54b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_voltmeter.clk)", 
                                                         "voltmeter_test.sv", 
                                                         60);
    VL_WRITEF_NX("[TB] bcd_val updated: 0x%04h\n",1
                 , '#',16,vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg);
    if ((0x0026U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg))) {
        VL_WRITEF_NX("[TB] >>> TEST PASSED <<< Output correctly formatted to 2.6V (0x0026)\n",0);
    } else {
        VL_WRITEF_NX("[TB] >>> TEST FAILED <<< Expected 0x0026, got 0x%04h\n",1
                     , '#',16,vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg);
    }
    VL_WRITEF_NX("[TB] dut.accumulator    = %0d (expected 1600)\n[TB] dut.adc_avg        = %0d (expected 200)\n[TB] dut.voltage_tenths = %0d (expected 26)\n[TB] bcd_val updated    = 0x%04h\n",4
                 , '#',11,vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator
                 , '#',8,(IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg)
                 , '#',8,(0x000000ffU & (((IData)(0x00008000U) 
                                          + ((IData)(0x00002126U) 
                                             * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                         >> 0x00000010U))
                 , '#',16,(IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg));
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "voltmeter_test.sv", 
                                         75);
    VL_FINISH_MT("voltmeter_test.sv", 76, "");
    co_return;
}

VlCoroutine Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__1(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "voltmeter_test.sv", 
                                             9);
        vlSelfRef.tb_voltmeter__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__clk)));
    }
    co_return;
}

bool Vtb_voltmeter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_voltmeter___024root___nba_sequent__TOP__1(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___nba_sequent__TOP__1\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter;
    __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter = 0;
    IData/*31:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter;
    __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter = 0;
    CData/*7:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer = 0;
    CData/*7:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer = 0;
    CData/*2:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count = 0;
    IData/*31:0*/ __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter = 0;
    // Body
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count;
    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter;
    __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter;
    __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter;
    if (vlSelfRef.tb_voltmeter__DOT__rst_n) {
        if ((1U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))) {
            __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer = 0x18U;
            __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer = 0U;
            __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count = 0U;
            __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter = 0U;
            vlSelfRef.tb_voltmeter__DOT__copi = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))) {
            if ((0x00000063U == vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter)) {
                __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count)));
                vlSelfRef.tb_voltmeter__DOT__dclk = 0U;
                vlSelfRef.tb_voltmeter__DOT__copi = 
                    (1U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer) 
                           >> 6U));
                __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter = 0U;
                __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer 
                    = (0x000000feU & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer) 
                                      << 1U));
            } else {
                if ((0x00000032U == vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter)) {
                    __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer 
                        = ((0x000000feU & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer) 
                                           << 1U)) 
                           | ((~ (IData)(vlSelfRef.tb_voltmeter__DOT__cs_n)) 
                              & ((IData)(vlSelfRef.tb_voltmeter__DOT__shift_reg) 
                                 >> 7U)));
                    vlSelfRef.tb_voltmeter__DOT__dclk = 1U;
                }
                __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter 
                    = ((IData)(1U) + vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter);
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))) {
                vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg 
                    = ((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum) 
                                         << 4U)) | 
                         (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))) 
                        << 8U) | ((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))));
            } else {
                vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator) 
                                      >> 3U));
            }
            vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))) {
                __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter)));
                vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator) 
                                      + ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer) 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state) 
                                                             >> 1U))))))));
                if ((7U > (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter))) {
                    vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger = 1U;
                }
            }
        } else {
            vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator = 0U;
            __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter = 0U;
            if ((7U == vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter)) {
                __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter = 0U;
                vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger = 1U;
            } else {
                __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter 
                    = ((IData)(1U) + vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter);
            }
        }
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__state 
            = vlSelfRef.tb_voltmeter__DOT__dut__DOT__next_state;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state 
            = vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__next_state;
    } else {
        __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer = 0U;
        __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer = 0U;
        __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count = 0U;
        __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter = 0U;
        vlSelfRef.tb_voltmeter__DOT__copi = 0U;
        vlSelfRef.tb_voltmeter__DOT__dclk = 0U;
        __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator = 0U;
        __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state = 0U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__counter;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__sample_counter;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter 
        = __Vdly__tb_voltmeter__DOT__dut__DOT__delay_counter;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum 
        = (0x0000001fU & ((6U & (- (IData)((1U & (((IData)(0x00008000U) 
                                                   + 
                                                   ((IData)(0x00002126U) 
                                                    * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                  >> 0x00000014U))))) 
                          + (2U & (- (IData)((1U & 
                                              (((IData)(0x00008000U) 
                                                + ((IData)(0x00002126U) 
                                                   * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                               >> 0x00000015U)))))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum 
        = (0x0000001fU & ((4U & (- (IData)((1U & (((IData)(0x00008000U) 
                                                   + 
                                                   ((IData)(0x00002126U) 
                                                    * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                  >> 0x00000012U))))) 
                          + (8U & (- (IData)((1U & 
                                              (((IData)(0x00008000U) 
                                                + ((IData)(0x00002126U) 
                                                   * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                               >> 0x00000013U)))))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum 
        = (0x0000001fU & ((1U & (- (IData)((1U & (((IData)(0x00008000U) 
                                                   + 
                                                   ((IData)(0x00002126U) 
                                                    * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                  >> 0x00000010U))))) 
                          + (2U & (- (IData)((1U & 
                                              (((IData)(0x00008000U) 
                                                + ((IData)(0x00002126U) 
                                                   * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                               >> 0x00000011U)))))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum 
        = (0x0000001fU & (((1U & ((- (IData)((1U & 
                                              (((IData)(0x00008000U) 
                                                + ((IData)(0x00002126U) 
                                                   * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                               >> 0x00000014U)))) 
                                  >> 4U)) + (3U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((IData)(0x00008000U) 
                                                                   + 
                                                                   ((IData)(0x00002126U) 
                                                                    * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                                  >> 0x00000015U)))) 
                                                   >> 4U))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum 
        = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum)) 
                          + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))) {
        vlSelfRef.tb_voltmeter__DOT__cs_n = (1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__next_state 
            = (3U & ((- (IData)((1U & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))))) 
                     & (2U | (- (IData)(((7U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count)) 
                                         & (0x00000063U 
                                            == vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter)))))));
    } else {
        vlSelfRef.tb_voltmeter__DOT__cs_n = (1U & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__next_state 
            = (3U & ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))
                      ? 2U : (1U & (- (IData)((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger))))));
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__next_state 
        = (3U & ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                  ? (- (IData)((1U & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state)))))
                  : ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                      ? (((7U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter)) 
                          & (3U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))
                          ? 2U : 1U) : (1U & (- (IData)(
                                                        (7U 
                                                         <= vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter)))))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum 
        = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum)) 
                          + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum 
        = vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3;
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4 = 1U;
    }
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum 
        = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum)) 
                           + (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum))) 
                          + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3)));
    vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4 = 0U;
    if ((9U < (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum))) {
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum 
            = (0x0000001fU & ((IData)(6U) + (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum)));
        vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4 = 1U;
    }
}

void Vtb_voltmeter___024root___timing_ready(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___timing_ready\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3b3f54b2__0.ready("@(posedge tb_voltmeter.clk)");
    }
}

void Vtb_voltmeter___024root___timing_resume(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___timing_resume\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3b3f54b2__0.moveToResumeQueue(
                                                          "@(posedge tb_voltmeter.clk)");
    vlSelfRef.__VtrigSched_h3b3f54b2__0.resume("@(posedge tb_voltmeter.clk)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_voltmeter___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_voltmeter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_voltmeter___024root___eval_phase__act(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_phase__act\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.tb_voltmeter__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_voltmeter__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_voltmeter__DOT__dclk)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__dclk__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_voltmeter__DOT__cs_n) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__cs_n__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__cs_n__0 
            = vlSelfRef.tb_voltmeter__DOT__cs_n;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__dclk__0 
            = vlSelfRef.tb_voltmeter__DOT__dclk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0 
            = vlSelfRef.tb_voltmeter__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__rst_n__0 
            = vlSelfRef.tb_voltmeter__DOT__rst_n;
    }
    Vtb_voltmeter___024root___timing_ready(vlSelf);
    Vtb_voltmeter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_voltmeter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_voltmeter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_voltmeter___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_voltmeter___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_voltmeter___024root___eval_phase__inact(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_phase__inact\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("voltmeter_test.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_voltmeter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_voltmeter___024root___eval_phase__nba(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_phase__nba\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_voltmeter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.__Vdly__tb_voltmeter__DOT__shift_reg 
                        = vlSelfRef.tb_voltmeter__DOT__shift_reg;
                    vlSelfRef.__Vdly__tb_voltmeter__DOT__shift_reg 
                        = ((IData)(vlSelfRef.tb_voltmeter__DOT__cs_n)
                            ? 0xc8U : (0x000000feU 
                                       & ((IData)(vlSelfRef.tb_voltmeter__DOT__shift_reg) 
                                          << 1U)));
                }
            }
            if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_voltmeter___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.tb_voltmeter__DOT__shift_reg 
                        = vlSelfRef.__Vdly__tb_voltmeter__DOT__shift_reg;
                }
            }
        }
        Vtb_voltmeter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_voltmeter___024root___eval(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_voltmeter___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("voltmeter_test.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("voltmeter_test.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_voltmeter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("voltmeter_test.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_voltmeter___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_voltmeter___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_voltmeter___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_voltmeter___024root____VbeforeTrig_h3b3f54b2__0(Vtb_voltmeter___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root____VbeforeTrig_h3b3f54b2__0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_voltmeter__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0))) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0 
        = vlSelfRef.tb_voltmeter__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3b3f54b2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3b3f54b2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_voltmeter___024root___eval_debug_assertions(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_debug_assertions\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
