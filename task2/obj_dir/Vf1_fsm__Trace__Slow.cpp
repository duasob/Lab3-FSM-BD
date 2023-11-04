// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


//======================

void Vf1_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vf1_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vf1_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vf1_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vf1_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"en", false,-1);
        tracep->declBit(c+5,"clk", false,-1);
        tracep->declBit(c+6,"rst", false,-1);
        tracep->declBus(c+7,"data_out", false,-1, 8,1);
        tracep->declBit(c+4,"f1_fsm en", false,-1);
        tracep->declBit(c+5,"f1_fsm clk", false,-1);
        tracep->declBit(c+6,"f1_fsm rst", false,-1);
        tracep->declBus(c+7,"f1_fsm data_out", false,-1, 8,1);
        tracep->declBus(c+1,"f1_fsm pulse", false,-1, 8,1);
        tracep->declBus(c+2,"f1_fsm current_state", false,-1, 31,0);
        tracep->declBus(c+3,"f1_fsm next_state", false,-1, 31,0);
    }
}

void Vf1_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vf1_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vf1_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vf1_fsm__Syms* __restrict vlSymsp = static_cast<Vf1_fsm__Syms*>(userp);
    Vf1_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->f1_fsm__DOT__pulse),8);
        tracep->fullIData(oldp+2,(vlTOPp->f1_fsm__DOT__current_state),32);
        tracep->fullIData(oldp+3,(vlTOPp->f1_fsm__DOT__next_state),32);
        tracep->fullBit(oldp+4,(vlTOPp->en));
        tracep->fullBit(oldp+5,(vlTOPp->clk));
        tracep->fullBit(oldp+6,(vlTOPp->rst));
        tracep->fullCData(oldp+7,(vlTOPp->data_out),8);
    }
}
