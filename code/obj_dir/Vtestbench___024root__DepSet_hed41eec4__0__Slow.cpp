// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__button_next = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__button_prev = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__button_ok = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__button_unused = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__valid_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__data_i = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__Top__DOT__sync_a__DOT__q_r = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__sync_b__DOT__q_r = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__lcd_reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__lcd_enable = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__lcd_data = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__button_next = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__button_prev = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__button_ok = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__State = 0;
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__char_index = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__Top__DOT__lcd_ctrl__DOT__line_index = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
