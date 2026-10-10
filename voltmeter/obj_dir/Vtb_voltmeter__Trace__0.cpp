// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_voltmeter__Syms.h"


void Vtb_voltmeter___024root__trace_chg_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_voltmeter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_chg_0\n"); );
    // Body
    Vtb_voltmeter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_voltmeter___024root*>(voidSelf);
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_voltmeter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_voltmeter___024root__trace_chg_0_sub_0(Vtb_voltmeter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_chg_0_sub_0\n"); );
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_voltmeter__DOT__copi));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_voltmeter__DOT__dclk));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_voltmeter__DOT__cs_n));
        bufp->chgSData(oldp+3,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcd_reg),16);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter),32);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter),3);
        bufp->chgCData(oldp+6,(((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer) 
                                & ((- (IData)((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))) 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state) 
                                                    >> 1U))))))),8);
        bufp->chgBit(oldp+7,((3U == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger));
        bufp->chgSData(oldp+9,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__accumulator),11);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg),8);
        bufp->chgIData(oldp+11,((0x03ffffffU & ((IData)(0x00008000U) 
                                                + ((IData)(0x00002126U) 
                                                   * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))))),26);
        bufp->chgCData(oldp+12,((0x000000ffU & (((IData)(0x00008000U) 
                                                 + 
                                                 ((IData)(0x00002126U) 
                                                  * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                >> 0x00000010U))),8);
        bufp->chgSData(oldp+13,((1U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000010U)))))),16);
        bufp->chgSData(oldp+14,((2U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000011U)))))),16);
        bufp->chgSData(oldp+15,((4U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000012U)))))),16);
        bufp->chgSData(oldp+16,((8U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000013U)))))),16);
        bufp->chgSData(oldp+17,((0x0016U & (- (IData)(
                                                      (1U 
                                                       & (((IData)(0x00008000U) 
                                                           + 
                                                           ((IData)(0x00002126U) 
                                                            * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                          >> 0x00000014U)))))),16);
        bufp->chgSData(oldp+18,((0x0032U & (- (IData)(
                                                      (1U 
                                                       & (((IData)(0x00008000U) 
                                                           + 
                                                           ((IData)(0x00002126U) 
                                                            * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                          >> 0x00000015U)))))),16);
        bufp->chgSData(oldp+19,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum))) 
                                  << 8U) | ((0x000000f0U 
                                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum) 
                                                << 4U)) 
                                            | (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum))))),16);
        bufp->chgSData(oldp+20,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))) 
                                  << 8U) | ((0x000000f0U 
                                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum) 
                                                << 4U)) 
                                            | (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))))),16);
        bufp->chgSData(oldp+21,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))) 
                                  << 8U) | ((0x000000f0U 
                                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum) 
                                                << 4U)) 
                                            | (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))))),16);
        bufp->chgSData(oldp+22,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum))) 
                                  << 8U) | ((0x000000f0U 
                                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum) 
                                                << 4U)) 
                                            | (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum))))),16);
        bufp->chgSData(oldp+23,(((((0x000000f0U & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))) 
                                  << 8U) | ((0x000000f0U 
                                             & ((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum) 
                                                << 4U)) 
                                            | (0x0000000fU 
                                               & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))))),16);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+25,((3U & ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state)))))
                                        : ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__state))
                                            ? (((7U 
                                                 == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__sample_counter)) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state)))
                                                ? 2U
                                                : 1U)
                                            : (1U & 
                                               (- (IData)(
                                                          (7U 
                                                           <= vlSelfRef.tb_voltmeter__DOT__dut__DOT__delay_counter)))))))),2);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state),2);
        bufp->chgCData(oldp+27,((3U & ((2U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))
                                        ? ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))))) 
                                           & (2U | 
                                              (- (IData)(
                                                         ((7U 
                                                           == (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count)) 
                                                          & (0x00000063U 
                                                             == vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter))))))
                                        : ((1U & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__state))
                                            ? 2U : 
                                           (1U & (- (IData)((IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__trigger)))))))),2);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count),3);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer),8);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc__DOT__counter),32);
        bufp->chgBit(oldp+32,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1));
        bufp->chgBit(oldp+33,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2));
        bufp->chgBit(oldp+34,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4));
        bufp->chgCData(oldp+36,((1U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000010U)))))),4);
        bufp->chgCData(oldp+37,((2U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000011U)))))),4);
        bufp->chgCData(oldp+38,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum))),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum),5);
        bufp->chgCData(oldp+40,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum))),4);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum),5);
        bufp->chgCData(oldp+42,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum))),4);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum),5);
        bufp->chgCData(oldp+44,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum))),4);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum),5);
        bufp->chgBit(oldp+46,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4));
        bufp->chgCData(oldp+50,((4U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000012U)))))),4);
        bufp->chgCData(oldp+51,((8U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000013U)))))),4);
        bufp->chgCData(oldp+52,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum))),4);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum),5);
        bufp->chgCData(oldp+54,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum))),4);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum),5);
        bufp->chgCData(oldp+56,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum))),4);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum),5);
        bufp->chgCData(oldp+58,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum))),4);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum),5);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4));
        bufp->chgCData(oldp+64,((6U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000014U)))))),4);
        bufp->chgCData(oldp+65,((2U & (- (IData)((1U 
                                                  & (((IData)(0x00008000U) 
                                                      + 
                                                      ((IData)(0x00002126U) 
                                                       * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                     >> 0x00000015U)))))),4);
        bufp->chgCData(oldp+66,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum))),4);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum),5);
        bufp->chgCData(oldp+68,((1U & ((- (IData)((1U 
                                                   & (((IData)(0x00008000U) 
                                                       + 
                                                       ((IData)(0x00002126U) 
                                                        * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                      >> 0x00000014U)))) 
                                       >> 4U))),4);
        bufp->chgCData(oldp+69,((3U & ((- (IData)((1U 
                                                   & (((IData)(0x00008000U) 
                                                       + 
                                                       ((IData)(0x00002126U) 
                                                        * (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__adc_avg))) 
                                                      >> 0x00000015U)))) 
                                       >> 4U))),4);
        bufp->chgCData(oldp+70,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum))),4);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum),5);
        bufp->chgCData(oldp+72,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum))),4);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum),5);
        bufp->chgCData(oldp+74,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum))),4);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum),5);
        bufp->chgBit(oldp+76,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3));
        bufp->chgBit(oldp+79,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4));
        bufp->chgCData(oldp+80,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum))),4);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum),5);
        bufp->chgCData(oldp+82,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum))),4);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum),5);
        bufp->chgCData(oldp+84,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum))),4);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum),5);
        bufp->chgCData(oldp+86,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum))),4);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum),5);
        bufp->chgBit(oldp+88,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1));
        bufp->chgBit(oldp+89,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2));
        bufp->chgBit(oldp+90,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3));
        bufp->chgBit(oldp+91,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4));
        bufp->chgCData(oldp+92,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum))),4);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum),5);
        bufp->chgCData(oldp+94,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum))),4);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum),5);
        bufp->chgCData(oldp+96,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum))),4);
        bufp->chgCData(oldp+97,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum),5);
        bufp->chgCData(oldp+98,((0x0000000fU & (IData)(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum))),4);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum),5);
    }
    bufp->chgBit(oldp+100,(vlSelfRef.tb_voltmeter__DOT__clk));
    bufp->chgBit(oldp+101,(vlSelfRef.tb_voltmeter__DOT__rst_n));
    bufp->chgBit(oldp+102,(((~ (IData)(vlSelfRef.tb_voltmeter__DOT__cs_n)) 
                            & ((IData)(vlSelfRef.tb_voltmeter__DOT__shift_reg) 
                               >> 7U))));
    bufp->chgCData(oldp+103,(vlSelfRef.tb_voltmeter__DOT__shift_reg),8);
}

void Vtb_voltmeter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_voltmeter___024root__trace_cleanup\n"); );
    // Body
    Vtb_voltmeter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_voltmeter___024root*>(voidSelf);
    Vtb_voltmeter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
