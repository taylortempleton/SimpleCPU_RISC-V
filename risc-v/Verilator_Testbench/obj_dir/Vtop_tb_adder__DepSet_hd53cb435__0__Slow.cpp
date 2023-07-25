// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb__Syms.h"
#include "Vtop_tb_adder.h"

VL_ATTR_COLD void Vtop_tb_adder___stl_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0(Vtop_tb_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_adder___stl_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0\n"); );
    // Body
    vlSelf->__Vcellinp__CLA2____pinNumber3 = (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)));
    vlSelf->__PVT__CLA2__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 4U) & (IData)(vlSelf->__Vcellinp__CLA2____pinNumber3));
    vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 5U) & (IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x60U == (0x60U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA3____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 7U) 
                                              & (IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA3__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 8U) & (IData)(vlSelf->__Vcellinp__CLA3____pinNumber3));
    vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 9U) & (IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x600U == (0x600U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA4____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA4__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 0xcU) & (IData)(vlSelf->__Vcellinp__CLA4____pinNumber3));
    vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 0xdU) & (IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x6000U == (0x6000U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA5____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0xfU) 
                                              & (IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA5__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 0x10U) & (IData)(vlSelf->__Vcellinp__CLA5____pinNumber3));
    vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 0x11U) & (IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x60000U == (0x60000U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA6____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0x13U) 
                                              & (IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA6__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 0x14U) & (IData)(vlSelf->__Vcellinp__CLA6____pinNumber3));
    vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 0x15U) & (IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x600000U == (0x600000U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA7____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0x17U) 
                                              & (IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA7__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 0x18U) & (IData)(vlSelf->__Vcellinp__CLA7____pinNumber3));
    vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 0x19U) & (IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x6000000U == (0x6000000U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    vlSelf->__Vcellinp__CLA8____pinNumber3 = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0x1bU) 
                                              & (IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
    vlSelf->__PVT__CLA8__DOT__CLG1__DOT__and_out_1 
        = ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
            >> 0x1cU) & (IData)(vlSelf->__Vcellinp__CLA8____pinNumber3));
    vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_3 = 
        ((IData)((0x60000000U == (0x60000000U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
         & (IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_2 = 
        ((vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
          >> 0x1dU) & (IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    vlSelf->sum = (((0x80000000U & (((~ ((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1fU))) 
                                     << 0x1fU) & (((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                                   << 0x1fU) 
                                                  | (0x80000000U 
                                                     & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                    | ((0x40000000U & (((~ ((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                            & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                               >> 0x1eU))) 
                                        << 0x1eU) & 
                                       (((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                         << 0x1eU) 
                                        | (0xc0000000U 
                                           & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                       | ((0x20000000U & (((~ ((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                               & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                  >> 0x1dU))) 
                                           << 0x1dU) 
                                          & (((IData)(vlSelf->__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                              << 0x1dU) 
                                             | (0xe0000000U 
                                                & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                          | (0x10000000U & (((~ ((IData)(vlSelf->__Vcellinp__CLA8____pinNumber3) 
                                                 & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x1cU))) 
                                             << 0x1cU) 
                                            & (((IData)(vlSelf->__Vcellinp__CLA8____pinNumber3) 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                   | (((0x8000000U & (((~ ((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x1bU))) 
                                       << 0x1bU) & 
                                      (((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                        << 0x1bU) | 
                                       (0xf8000000U 
                                        & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                       | ((0x4000000U & (((~ ((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1aU))) 
                                          << 0x1aU) 
                                         & (((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                             << 0x1aU) 
                                            | (0xfc000000U 
                                               & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                          | ((0x2000000U & (((~ ((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x19U))) 
                                             << 0x19U) 
                                            & (((IData)(vlSelf->__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                << 0x19U) 
                                               | (0xfe000000U 
                                                  & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                             | (0x1000000U & (((~ ((IData)(vlSelf->__Vcellinp__CLA7____pinNumber3) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x18U))) 
                                               << 0x18U) 
                                              & (((IData)(vlSelf->__Vcellinp__CLA7____pinNumber3) 
                                                  << 0x18U) 
                                                 | (0xff000000U 
                                                    & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                      | (((0x800000U & (((~ ((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                             & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                >> 0x17U))) 
                                         << 0x17U) 
                                        & (((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                            << 0x17U) 
                                           | (0xff800000U 
                                              & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                          | ((0x400000U & (((~ ((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                   >> 0x16U))) 
                                            << 0x16U) 
                                           & (((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                               << 0x16U) 
                                              | (0xffc00000U 
                                                 & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                             | ((0x200000U & (((~ ((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x15U))) 
                                               << 0x15U) 
                                              & (((IData)(vlSelf->__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                  << 0x15U) 
                                                 | (0xffe00000U 
                                                    & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                | (0x100000U & (((~ 
                                                  ((IData)(vlSelf->__Vcellinp__CLA6____pinNumber3) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x14U))) 
                                                 << 0x14U) 
                                                & (((IData)(vlSelf->__Vcellinp__CLA6____pinNumber3) 
                                                    << 0x14U) 
                                                   | (0xfff00000U 
                                                      & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                         | (((0x80000U & (((~ ((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                               & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                  >> 0x13U))) 
                                           << 0x13U) 
                                          & (((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                              << 0x13U) 
                                             | (0xfff80000U 
                                                & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                             | ((0x40000U & (((~ ((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                  & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x12U))) 
                                              << 0x12U) 
                                             & (((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                 << 0x12U) 
                                                | (0xfffc0000U 
                                                   & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                | ((0x20000U & (((~ 
                                                  ((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x11U))) 
                                                 << 0x11U) 
                                                & (((IData)(vlSelf->__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                    << 0x11U) 
                                                   | (0xfffe0000U 
                                                      & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                   | (0x10000U & ((
                                                   (~ 
                                                    ((IData)(vlSelf->__Vcellinp__CLA5____pinNumber3) 
                                                     & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  & (((IData)(vlSelf->__Vcellinp__CLA5____pinNumber3) 
                                                      << 0x10U) 
                                                     | (0xffff0000U 
                                                        & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                            | (((0x8000U & (((~ ((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                 & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0xfU))) 
                                             << 0xfU) 
                                            & (((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                << 0xfU) 
                                               | (0xffff8000U 
                                                  & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                | ((0x4000U & (((~ 
                                                 ((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                  & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0xeU))) 
                                                << 0xeU) 
                                               & (((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                   << 0xeU) 
                                                  | (0xffffc000U 
                                                     & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                   | ((0x2000U & ((
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                     & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0xdU))) 
                                                   << 0xdU) 
                                                  & (((IData)(vlSelf->__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                      << 0xdU) 
                                                     | (0xffffe000U 
                                                        & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                      | (0x1000U & 
                                         (((~ ((IData)(vlSelf->__Vcellinp__CLA4____pinNumber3) 
                                               & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                  >> 0xcU))) 
                                           << 0xcU) 
                                          & (((IData)(vlSelf->__Vcellinp__CLA4____pinNumber3) 
                                              << 0xcU) 
                                             | (0xfffff000U 
                                                & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                               | (((0x800U & (((~ ((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0xbU))) 
                                               << 0xbU) 
                                              & (((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                  << 0xbU) 
                                                 | (0xfffff800U 
                                                    & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                   | ((0x400U & (((~ 
                                                   ((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                    & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0xaU))) 
                                                  << 0xaU) 
                                                 & (((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                     << 0xaU) 
                                                    | (0xfffffc00U 
                                                       & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                      | ((0x200U & 
                                          (((~ ((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                   >> 9U))) 
                                            << 9U) 
                                           & (((IData)(vlSelf->__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                               << 9U) 
                                              | (0xfffffe00U 
                                                 & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                         | (0x100U 
                                            & (((~ 
                                                 ((IData)(vlSelf->__Vcellinp__CLA3____pinNumber3) 
                                                  & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 8U))) 
                                                << 8U) 
                                               & (((IData)(vlSelf->__Vcellinp__CLA3____pinNumber3) 
                                                   << 8U) 
                                                  | (0xffffff00U 
                                                     & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                                  | (((0x80U & (((~ 
                                                  ((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 7U))) 
                                                 << 7U) 
                                                & (((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                    << 7U) 
                                                   | (0xffffff80U 
                                                      & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                      | ((0x40U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                      & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                         >> 6U))) 
                                                    << 6U) 
                                                   & (((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                       << 6U) 
                                                      | (0xffffffc0U 
                                                         & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                         | ((0x20U 
                                             & (((~ 
                                                  ((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                   & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 5U))) 
                                                 << 5U) 
                                                & (((IData)(vlSelf->__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                            | (0x10U 
                                               & (((~ 
                                                    ((IData)(vlSelf->__Vcellinp__CLA2____pinNumber3) 
                                                     & (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 4U))) 
                                                   << 4U) 
                                                  & (((IData)(vlSelf->__Vcellinp__CLA2____pinNumber3) 
                                                      << 4U) 
                                                     | (0xfffffff0U 
                                                        & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))) 
                                     | ((8U & (((~ (IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   (vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & vlSymsp->TOP.top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))))))))));
}
