// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf);

Vtop_tb___024root::Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_tb___024root___ctor_var_reset(this);
}

void Vtop_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_tb___024root::~Vtop_tb___024root() {
}
