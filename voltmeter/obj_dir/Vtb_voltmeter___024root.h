// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_voltmeter.h for the primary calling header

#ifndef VERILATED_VTB_VOLTMETER___024ROOT_H_
#define VERILATED_VTB_VOLTMETER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_voltmeter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_voltmeter___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_voltmeter__DOT__clk;
        CData/*0:0*/ tb_voltmeter__DOT__rst_n;
        CData/*0:0*/ tb_voltmeter__DOT__copi;
        CData/*0:0*/ tb_voltmeter__DOT__dclk;
        CData/*0:0*/ tb_voltmeter__DOT__cs_n;
        CData/*7:0*/ tb_voltmeter__DOT__shift_reg;
        CData/*2:0*/ tb_voltmeter__DOT__dut__DOT__sample_counter;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__trigger;
        CData/*7:0*/ tb_voltmeter__DOT__dut__DOT__adc_avg;
        CData/*3:0*/ tb_voltmeter__DOT__dut__DOT__bcd_whole;
        CData/*3:0*/ tb_voltmeter__DOT__dut__DOT__bcd_tenths;
        CData/*1:0*/ tb_voltmeter__DOT__dut__DOT__state;
        CData/*1:0*/ tb_voltmeter__DOT__dut__DOT__next_state;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c1;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c2;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c3;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__c4;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add3__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add2__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add1__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd4__DOT__add0__DOT__my_sum;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c1;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c2;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c3;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__c4;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add3__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add2__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add1__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd3__DOT__add0__DOT__my_sum;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c1;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c2;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c3;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__c4;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add3__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add2__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add1__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd2__DOT__add0__DOT__my_sum;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c1;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c2;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c3;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__c4;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add3__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add2__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add1__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd1__DOT__add0__DOT__my_sum;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c1;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c2;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c3;
        CData/*0:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__c4;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add3__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add2__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add1__DOT__my_sum;
        CData/*4:0*/ tb_voltmeter__DOT__dut__DOT__bcdAdd0__DOT__add0__DOT__my_sum;
        CData/*1:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__state;
        CData/*1:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__next_state;
        CData/*2:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__bit_count;
        CData/*7:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__tx_buffer;
        CData/*7:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__rx_buffer;
        CData/*7:0*/ __Vdly__tb_voltmeter__DOT__shift_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_voltmeter__DOT__cs_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_voltmeter__DOT__dclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_voltmeter__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_voltmeter__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*10:0*/ tb_voltmeter__DOT__dut__DOT__accumulator;
        SData/*15:0*/ tb_voltmeter__DOT__dut__DOT__bcd_reg;
        IData/*31:0*/ tb_voltmeter__DOT__dut__DOT__delay_counter;
        IData/*31:0*/ tb_voltmeter__DOT__dut__DOT__adc__DOT__counter;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3b3f54b2__0;

    // INTERNAL VARIABLES
    Vtb_voltmeter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_voltmeter___024root(Vtb_voltmeter__Syms* symsp, const char* namep);
    ~Vtb_voltmeter___024root();
    VL_UNCOPYABLE(Vtb_voltmeter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
