// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "Vclktick.h"
#include "Vclktick__Syms.h"

//==========

VL_CTOR_IMP(Vclktick) {
    Vclktick__Syms* __restrict vlSymsp = __VlSymsp = new Vclktick__Syms(this, name());
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vclktick::__Vconfigure(Vclktick__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vclktick::~Vclktick() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vclktick::_eval_initial(Vclktick__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick::_eval_initial\n"); );
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vclktick::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick::final\n"); );
    // Variables
    Vclktick__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclktick::_eval_settle(Vclktick__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick::_eval_settle\n"); );
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclktick::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    en = VL_RAND_RESET_I(1);
    N = VL_RAND_RESET_I(16);
    tick = VL_RAND_RESET_I(1);
    clktick__DOT__count = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
