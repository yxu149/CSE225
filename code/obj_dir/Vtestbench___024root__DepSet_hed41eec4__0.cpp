// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root___eval_initial__TOP__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i 
        = vlSelf->testbench__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "../provided_modules/nonsynth_clock_gen.sv", 
                                           11);
        vlSelf->testbench__DOT__clk_i = (1U & (~ (IData)(vlSelf->testbench__DOT__clk_i)));
    }
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__testbench__DOT__lcd_ctrl__DOT__step;
    __Vdly__testbench__DOT__lcd_ctrl__DOT__step = 0;
    // Body
    __Vdly__testbench__DOT__lcd_ctrl__DOT__step = vlSelf->testbench__DOT__lcd_ctrl__DOT__step;
    __Vdly__testbench__DOT__lcd_ctrl__DOT__step = ((IData)(1U) 
                                                   + vlSelf->testbench__DOT__lcd_ctrl__DOT__step);
    if (((((((((0U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
               | (2U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
              | (3U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
             | (4U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
            | (5U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
           | (6U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
          | (7U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
         | (9U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) {
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data 
            = ((0U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                ? 0x30U : ((2U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                            ? 0x30U : ((3U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                        ? 0x1cU : (
                                                   (4U 
                                                    == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                    ? 0x1cU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                     ? 0xe0U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                      ? 0xe0U
                                                      : 0x80U))))));
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable 
            = ((0U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
               | ((2U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                  & ((3U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                     | ((4U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                        & ((5U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                           | ((6U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                              & (7U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)))))));
    } else if (((((((((0xaU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                      | (0xbU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                     | (0xcU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                    | (0xdU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                   | (0xeU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                  | (0xfU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                 | (0x10U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                | (0x11U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) {
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data 
            = ((0xaU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                ? 0x48U : ((0xbU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                            ? 0x48U : ((0xcU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                        ? 0x65U : (
                                                   (0xdU 
                                                    == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                    ? 0x65U
                                                    : 0x6cU))));
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable 
            = ((0xaU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
               | ((0xbU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                  & ((0xcU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                     | ((0xdU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                        & ((0xeU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                           | ((0xfU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                              & (0x10U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)))))));
    } else if (((((((((0x12U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                      | (0x13U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                     | (0x14U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                    | (0x15U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                   | (0x16U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                  | (0x17U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                 | (0x18U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                | (0x19U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) {
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data 
            = ((0x12U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                ? 0x6fU : ((0x13U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                            ? 0x6fU : ((0x14U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                        ? 0x2cU : (
                                                   (0x15U 
                                                    == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                    ? 0x2cU
                                                    : 
                                                   ((0x16U 
                                                     == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                     ? 0x20U
                                                     : 
                                                    ((0x17U 
                                                      == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                      ? 0x20U
                                                      : 0x77U))))));
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable 
            = ((0x12U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
               | ((0x13U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                  & ((0x14U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                     | ((0x15U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                        & ((0x16U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                           | ((0x17U != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                              & (0x18U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)))))));
    } else if (((((((((0x1aU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                      | (0x1bU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                     | (0x1cU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                    | (0x1dU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                   | (0x1eU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                  | (0x1fU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                 | (0x20U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                | (0x21U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) {
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data 
            = ((0x1aU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                ? 0x6fU : ((0x1bU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                            ? 0x6fU : ((0x1cU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                        ? 0x72U : (
                                                   (0x1dU 
                                                    == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                    ? 0x72U
                                                    : 
                                                   ((0x1eU 
                                                     == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                     ? 0x6cU
                                                     : 
                                                    ((0x1fU 
                                                      == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)
                                                      ? 0x6cU
                                                      : 0x64U))))));
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable 
            = ((0x1aU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
               | ((0x1bU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                  & ((0x1cU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                     | ((0x1dU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                        & ((0x1eU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                           | ((0x1fU != vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                              & (0x20U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)))))));
    } else {
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data 
            = vlSelf->testbench__DOT__data_i;
        vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable 
            = vlSelf->testbench__DOT__enable_i;
    }
    vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_reset 
        = ((~ ((((((((0U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                     | (2U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                    | (3U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                   | (4U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                  | (5U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                 | (6U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                | (7U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
               | (9U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) 
           & ((~ ((((((((0xaU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                        | (0xbU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                       | (0xcU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                      | (0xdU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                     | (0xeU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                    | (0xfU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                   | (0x10U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                  | (0x11U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) 
              & ((~ ((((((((0x12U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                           | (0x13U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                          | (0x14U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                         | (0x15U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                        | (0x16U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                       | (0x17U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                      | (0x18U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                     | (0x19U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) 
                 & ((~ ((((((((0x1aU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step) 
                              | (0x1bU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                             | (0x1cU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                            | (0x1dU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                           | (0x1eU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                          | (0x1fU == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                         | (0x20U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step)) 
                        | (0x21U == vlSelf->testbench__DOT__lcd_ctrl__DOT__step))) 
                    & (IData)(vlSelf->testbench__DOT__reset_i)))));
    vlSelf->testbench__DOT__lcd_ctrl__DOT__step = __Vdly__testbench__DOT__lcd_ctrl__DOT__step;
    vlSelf->testbench__DOT__data_i = vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_data;
    vlSelf->testbench__DOT__reset_i = vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_reset;
    vlSelf->testbench__DOT__enable_i = vlSelf->testbench__DOT__lcd_ctrl__DOT__lcd_enable;
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtestbench___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtestbench___024root___timing_resume(vlSelf);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
