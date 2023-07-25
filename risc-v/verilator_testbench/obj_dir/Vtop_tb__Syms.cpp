// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_tb__Syms.h"
#include "Vtop_tb.h"
#include "Vtop_tb___024root.h"
#include "Vtop_tb_adder.h"

// FUNCTIONS
Vtop_tb__Syms::~Vtop_tb__Syms()
{
}

Vtop_tb__Syms::Vtop_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top_tb__DOT__T1__DOT__A1__DOT__A1{this, Verilated::catName(namep, "top_tb.T1.A1.A1")}
    , TOP__top_tb__DOT__T1__DOT__ADD1{this, Verilated::catName(namep, "top_tb.T1.ADD1")}
    , TOP__top_tb__DOT__T1__DOT__ADD2{this, Verilated::catName(namep, "top_tb.T1.ADD2")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top_tb__DOT__T1__DOT__A1__DOT__A1 = &TOP__top_tb__DOT__T1__DOT__A1__DOT__A1;
    TOP.__PVT__top_tb__DOT__T1__DOT__ADD1 = &TOP__top_tb__DOT__T1__DOT__ADD1;
    TOP.__PVT__top_tb__DOT__T1__DOT__ADD2 = &TOP__top_tb__DOT__T1__DOT__ADD2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vconfigure(true);
    TOP__top_tb__DOT__T1__DOT__ADD1.__Vconfigure(false);
    TOP__top_tb__DOT__T1__DOT__ADD2.__Vconfigure(false);
}
