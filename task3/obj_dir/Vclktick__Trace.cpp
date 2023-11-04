// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


void Vclktick::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vclktick::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->en));
        tracep->chgSData(oldp+3,(vlTOPp->N),16);
        tracep->chgBit(oldp+4,(vlTOPp->tick));
        tracep->chgSData(oldp+5,(vlTOPp->clktick__DOT__count),16);
    }
}

void Vclktick::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
