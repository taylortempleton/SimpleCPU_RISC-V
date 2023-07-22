// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtop_tb__ConstPool__TABLE_hc2ab7189_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top_tb__DOT__T1__DOT__n_ex_mem = (1U & 
                                              ((0x31U 
                                                == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                ? (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res)
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 
                                                   (~ (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag)
                                                     ? 
                                                    (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum 
                                                     >> 0x1fU)))));
    vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex = 
        ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
         & (((~ (IData)((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum))) 
             & (0U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
            | ((((4U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg)) 
                 | (6U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                & (IData)(vlSelf->top_tb__DOT__T1__DOT__n_ex_mem)) 
               | (((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum) 
                   & (1U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                  | (((5U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg)) 
                      | (7U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                     & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__n_ex_mem)) 
                        | (~ (IData)((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum)))))))));
    vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem 
        = (((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg) 
            == (IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex)) 
           & (vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg 
              == vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg));
    __Vtableidx1 = (((IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem) 
                     << 2U) | vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                    [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)]);
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits 
        = Vtop_tb__ConstPool__TABLE_hc2ab7189_0[__Vtableidx1];
    vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex 
        = ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem)) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__flush_ex = ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem)) 
                                              & (IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex));
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__flush_ex) 
           | (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex));
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr 
        = (((IData)(vlSelf->top_tb__DOT__T1__DOT__flush_ex) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex)) 
           | ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
              & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex)));
}

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb_adder___stl_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0(Vtop_tb_adder* vlSelf);
void Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD2__0(Vtop_tb_adder* vlSelf);
void Vtop_tb_adder___nba_comb__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0(Vtop_tb_adder* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop_tb_adder___stl_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1));
        Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD2__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2));
        Vtop_tb_adder___nba_comb__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1));
        Vtop_tb___024root___stl_sequent__TOP__1(vlSelf);
    }
}
