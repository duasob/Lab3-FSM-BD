// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


void Vf1_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vf1_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->f1_fsm__DOT__pulse),8);
            tracep->chgIData(oldp+1,(vlTOPp->f1_fsm__DOT__current_state),32);
            tracep->chgIData(oldp+2,(vlTOPp->f1_fsm__DOT__next_state),32);
        }
        tracep->chgBit(oldp+3,(vlTOPp->en));
        tracep->chgBit(oldp+4,(vlTOPp->clk));
        tracep->chgBit(oldp+5,(vlTOPp->rst));
        tracep->chgCData(oldp+6,(vlTOPp->data_out),8);
    }
}

void Vf1_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
