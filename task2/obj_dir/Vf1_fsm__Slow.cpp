// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "Vf1_fsm.h"
#include "Vf1_fsm__Syms.h"

//==========

VL_CTOR_IMP(Vf1_fsm) {
    Vf1_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vf1_fsm__Syms(this, name());
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vf1_fsm::__Vconfigure(Vf1_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vf1_fsm::~Vf1_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vf1_fsm::_settle__TOP__2(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_settle__TOP__2\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((((((((0U == vlTOPp->f1_fsm__DOT__current_state) 
               | (1U == vlTOPp->f1_fsm__DOT__current_state)) 
              | (2U == vlTOPp->f1_fsm__DOT__current_state)) 
             | (3U == vlTOPp->f1_fsm__DOT__current_state)) 
            | (4U == vlTOPp->f1_fsm__DOT__current_state)) 
           | (5U == vlTOPp->f1_fsm__DOT__current_state)) 
          | (6U == vlTOPp->f1_fsm__DOT__current_state)) 
         | (7U == vlTOPp->f1_fsm__DOT__current_state))) {
        vlTOPp->f1_fsm__DOT__next_state = ((0U == vlTOPp->f1_fsm__DOT__current_state)
                                            ? 1U : 
                                           ((1U == vlTOPp->f1_fsm__DOT__current_state)
                                             ? 2U : 
                                            ((2U == vlTOPp->f1_fsm__DOT__current_state)
                                              ? 3U : 
                                             ((3U == vlTOPp->f1_fsm__DOT__current_state)
                                               ? 4U
                                               : ((4U 
                                                   == vlTOPp->f1_fsm__DOT__current_state)
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == vlTOPp->f1_fsm__DOT__current_state)
                                                    ? 6U
                                                    : 
                                                   ((6U 
                                                     == vlTOPp->f1_fsm__DOT__current_state)
                                                     ? 7U
                                                     : 8U)))))));
        vlTOPp->f1_fsm__DOT__pulse = ((0U == vlTOPp->f1_fsm__DOT__current_state)
                                       ? 0U : ((1U 
                                                == vlTOPp->f1_fsm__DOT__current_state)
                                                ? 1U
                                                : (
                                                   (2U 
                                                    == vlTOPp->f1_fsm__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlTOPp->f1_fsm__DOT__current_state)
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      == vlTOPp->f1_fsm__DOT__current_state)
                                                      ? 0xfU
                                                      : 
                                                     ((5U 
                                                       == vlTOPp->f1_fsm__DOT__current_state)
                                                       ? 0x1fU
                                                       : 
                                                      ((6U 
                                                        == vlTOPp->f1_fsm__DOT__current_state)
                                                        ? 0x3fU
                                                        : 0x7fU)))))));
    } else {
        vlTOPp->f1_fsm__DOT__next_state = 0U;
        vlTOPp->f1_fsm__DOT__pulse = ((8U == vlTOPp->f1_fsm__DOT__current_state)
                                       ? 0xffU : 0U);
    }
    vlTOPp->data_out = vlTOPp->f1_fsm__DOT__pulse;
}

void Vf1_fsm::_eval_initial(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_eval_initial\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vf1_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::final\n"); );
    // Variables
    Vf1_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf1_fsm::_eval_settle(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_eval_settle\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vf1_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_ctor_var_reset\n"); );
    // Body
    en = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(8);
    f1_fsm__DOT__pulse = VL_RAND_RESET_I(8);
    f1_fsm__DOT__current_state = 0;
    f1_fsm__DOT__next_state = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
