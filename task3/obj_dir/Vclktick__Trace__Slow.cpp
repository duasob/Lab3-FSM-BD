// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


//======================

void Vclktick::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vclktick::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vclktick::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vclktick::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vclktick::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"en", false,-1);
        tracep->declBus(c+4,"N", false,-1, 15,0);
        tracep->declBit(c+5,"tick", false,-1);
        tracep->declBus(c+7,"clktick WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"clktick clk", false,-1);
        tracep->declBit(c+2,"clktick rst", false,-1);
        tracep->declBit(c+3,"clktick en", false,-1);
        tracep->declBus(c+4,"clktick N", false,-1, 15,0);
        tracep->declBit(c+5,"clktick tick", false,-1);
        tracep->declBus(c+6,"clktick count", false,-1, 15,0);
    }
}

void Vclktick::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vclktick::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vclktick::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vclktick__Syms* __restrict vlSymsp = static_cast<Vclktick__Syms*>(userp);
    Vclktick* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->en));
        tracep->fullSData(oldp+4,(vlTOPp->N),16);
        tracep->fullBit(oldp+5,(vlTOPp->tick));
        tracep->fullSData(oldp+6,(vlTOPp->clktick__DOT__count),16);
        tracep->fullIData(oldp+7,(0x10U),32);
    }
}
