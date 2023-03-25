// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtestbench__Syms;

class Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk_i;
    CData/*0:0*/ testbench__DOT__valid_i;
    CData/*7:0*/ testbench__DOT__data_i;
    CData/*0:0*/ testbench__DOT__enable_i;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__lcd_reset;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__lcd_enable;
    CData/*7:0*/ testbench__DOT__lcd_ctrl__DOT__lcd_data;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__button_next;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__button_prev;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__button_ok;
    CData/*3:0*/ testbench__DOT__lcd_ctrl__DOT__char_index;
    CData/*0:0*/ testbench__DOT__lcd_ctrl__DOT__line_index;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__clk_i;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ testbench__DOT__lcd_ctrl__DOT__State;
    IData/*31:0*/ testbench__DOT__lcd_ctrl__DOT__step;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
