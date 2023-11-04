// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "Vf1_fsm.h"
#include "Vf1_fsm__Syms.h"

//==========

void Vf1_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf1_fsm::eval\n"); );
    Vf1_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("f1_fsm.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vf1_fsm::_eval_initial_loop(Vf1_fsm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("f1_fsm.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vf1_fsm::_sequent__TOP__1(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_sequent__TOP__1\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->f1_fsm__DOT__current_state = ((IData)(vlTOPp->rst)
                                           ? 0U : ((IData)(vlTOPp->en)
                                                    ? vlTOPp->f1_fsm__DOT__next_state
                                                    : vlTOPp->f1_fsm__DOT__current_state));
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

void Vf1_fsm::_eval(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_eval\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

VL_INLINE_OPT QData Vf1_fsm::_change_request(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_change_request\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vf1_fsm::_change_request_1(Vf1_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_change_request_1\n"); );
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vf1_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
