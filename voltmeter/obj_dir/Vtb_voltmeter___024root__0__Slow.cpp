// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_voltmeter.h for the primary calling header

#include "Vtb_voltmeter__pch.h"

void Vtb_voltmeter___024root___timing_ready(Vtb_voltmeter___024root* vlSelf);

VL_ATTR_COLD void Vtb_voltmeter___024root___eval_static(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_static\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__cs_n__0 
        = vlSelfRef.tb_voltmeter__DOT__cs_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__dclk__0 
        = vlSelfRef.tb_voltmeter__DOT__dclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0 
        = vlSelfRef.tb_voltmeter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_voltmeter__DOT__rst_n__0 
        = vlSelfRef.tb_voltmeter__DOT__rst_n;
    Vtb_voltmeter___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_voltmeter___024root___eval_final(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_final\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_voltmeter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_voltmeter___024root___eval_phase__stl(Vtb_voltmeter___024root* vlSelf);

VL_ATTR_COLD void Vtb_voltmeter___024root___eval_settle(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_settle\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_voltmeter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("voltmeter_test.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_voltmeter___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_voltmeter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_voltmeter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_voltmeter___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_voltmeter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_voltmeter___024root___stl_sequent__TOP__0(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___stl_sequent__TOP__0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD bool Vtb_voltmeter___024root___eval_phase__stl(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___eval_phase__stl\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_voltmeter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_voltmeter___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_voltmeter___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_voltmeter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_voltmeter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_voltmeter___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_voltmeter.cs_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_voltmeter.dclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_voltmeter.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_voltmeter.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_voltmeter___024root___ctor_var_reset(Vtb_voltmeter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root___ctor_var_reset\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_voltmeter__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15223552337201362743ull);
    vlSelf->tb_voltmeter__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17228174246679210614ull);
    vlSelf->tb_voltmeter__DOT__copi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15273611366844177735ull);
    vlSelf->tb_voltmeter__DOT__dclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15468036934627749040ull);
    vlSelf->tb_voltmeter__DOT__cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5682251880012374442ull);
    vlSelf->tb_voltmeter__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3294176967016876719ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__delay_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5114295651431439574ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__sample_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7966699178725768131ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6013194854998782655ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__accumulator = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13197710699837432619ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc_avg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2414830793513663299ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcd_whole = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11487001548985056436ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcd_tenths = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2435102652579168635ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcd_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18287454685260058426ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7391950826491514302ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12377890143646960510ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8688663554783728592ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13728234714430652029ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13495570738795238189ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4481786667595950504ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15116464001850939020ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11506668097643876380ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6067740208851220500ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2174727221891638455ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 607633181522567496ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13854729274541479474ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16863243253026128432ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17017477309898568005ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6406127509994483919ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4736249367984653535ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14488820684251732422ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5598542049068756487ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784462727163693099ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16164300811870017690ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3319568507001416145ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17060841520220212478ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9844771259396310103ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 211947514079509634ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5507182435412748099ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1454638897051820592ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13993221587956203044ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10135533854621801300ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5875859034082207576ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7620512915421180136ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5050262658113310556ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6825872043754620988ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2507412364871876179ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8869303867388229267ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12564174616703059432ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12127378128761307703ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16924025295498592586ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12422745296885247257ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17437295491495408803ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7214401240722956814ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14835367907468173405ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13465467937240246167ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17031043746290795247ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4732855916751413572ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16181559930245077830ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10279716997339768428ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13506400175154318911ull);
    vlSelf->tb_voltmeter__DOT__dut__DOT__adc__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2446822344049987875ull);
    vlSelf->__Vdly__tb_voltmeter__DOT__shift_reg = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_voltmeter__DOT__cs_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_voltmeter__DOT__dclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_voltmeter__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
