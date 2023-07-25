// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->master_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__master_clk))) 
                                      | ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top_tb__DOT__reset_tb))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->master_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__master_clk)));
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->master_clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__master_clk));
    vlSelf->__Vtrigrprev__TOP__master_clk = vlSelf->master_clk;
    vlSelf->__Vtrigrprev__TOP__top_tb__DOT__reset_tb 
        = vlSelf->top_tb__DOT__reset_tb;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->top_tb__DOT__reset_tb) {
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data;
        vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg;
    }
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__instr_retired_wb_pipe_reg 
        = ((~ (IData)(vlSelf->top_tb__DOT__reset_tb)) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))) 
           & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg) 
              & (3U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg))));
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg));
    if (((IData)(vlSelf->top_tb__DOT__reset_tb) | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))) {
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg 
            = (((0U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                | (1U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))
                ? vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum
                : (((2U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                    | ((4U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                       | (6U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))))
                    ? vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res
                    : (((8U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                        | ((0x10U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                           | ((0x18U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                              | (0x20U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))))
                        ? ((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                            ? ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                ? 0U : ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                         ? 0U : (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                 ^ vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)))
                            : ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                ? ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                    ? (~ (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          | vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                    : (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                : ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                    ? (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       | vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)
                                    : 0U))) : (((0x31U 
                                                 == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                                | (0x11U 
                                                   == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))
                                                ? (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res)
                                                : (
                                                   (0x29U 
                                                    == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__n_alu)
                                                    : 0U)))));
    }
    if (((IData)(vlSelf->top_tb__DOT__reset_tb) | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr))) {
        vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred;
        vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg;
    }
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__2(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__n_alu = 
        (1U & ((0x31U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                ? (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res)
                : ((0x11U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                    ? (~ (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res))
                    : ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag)
                        ? (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                           >> 0x1fU) : (vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum 
                                        >> 0x1fU)))));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__6(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
        = (((IData)(vlSelf->top_tb__DOT__reset_tb) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr))
            ? 0U : vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem
           [(0x7ffU & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                        - (IData)(0x2000U)) >> 2U))]);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
        = ((IData)(vlSelf->top_tb__DOT__reset_tb) ? 0x2000U
            : (((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
                & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg)) 
                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex)))
                ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg
                : (((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex)) 
                    & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg)) 
                       & (IData)(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred)))
                    ? vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred
                    : (((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
                        & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex))
                        ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex)
                            ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg
                            : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg)
                        : (((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg) 
                                & (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem))) 
                            & (IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex))
                            ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg
                            : ((IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex)
                                ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex)
                                    ? 0U : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum)
                                : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum))))));
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl 
        = ((8U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                  >> 0x1bU)) | (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                      >> 0xcU)));
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl 
        = ((0x10U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg) 
           | (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                    >> 0xcU)));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__7(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0) {
        vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem[vlSelf->__Vdlyvdim0__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0] 
            = vlSelf->__Vdlyvval__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0;
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex));
    if (((IData)(vlSelf->top_tb__DOT__reset_tb) | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg 
            = vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg;
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h0ee737eb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h0711ac51_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h4789efb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hd7338bcc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h8a71061d_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__8(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (0x7fU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec 
        = Vtop_tb__ConstPool__TABLE_h0ee737eb_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec 
        = Vtop_tb__ConstPool__TABLE_h0711ac51_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec 
        = Vtop_tb__ConstPool__TABLE_hbdb291c7_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec 
        = Vtop_tb__ConstPool__TABLE_h4789efb2_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec 
        = Vtop_tb__ConstPool__TABLE_hd7338bcc_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec 
        = Vtop_tb__ConstPool__TABLE_h8a71061d_0[__Vtableidx2];
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg 
        = (((IData)(vlSelf->top_tb__DOT__reset_tb) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr))
            ? 0U : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred));
    vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex = ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec) 
                                                 & (7U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)));
    vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss 
        = (0xfffU & (((- (IData)((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec))) 
                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                         >> 0x14U)) | (((- (IData)((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec))) 
                                        & ((0xfe0U 
                                            & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                 >> 7U)))) 
                                       | ((- (IData)((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec))) 
                                          & ((0x800U 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                 >> 0x14U)) 
                                             | ((0x400U 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                    << 3U)) 
                                                | ((0x3f0U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                         >> 8U)))))))));
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec)
            ? ((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                ? 0x420U : ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                             ? 0x420U : ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                          ? ((4U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                  ? 0x420U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x3446U
                                                   : 0x420U))
                                              : ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                  ? 0x420U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x420U
                                                   : 0x3441U)))
                                          : ((4U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x3450U
                                                   : 0x3448U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x3444U
                                                   : 0x3460U))
                                              : ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x3471U
                                                   : 0x3469U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl))
                                                   ? 0x3442U
                                                   : 0x3440U))))))
            : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec)
                ? ((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                    ? 0x1400U : ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                  ? ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                      ? ((4U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                          ? ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                              ? 0x1400U
                                              : ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                  ? 0x1400U
                                                  : 0x1450U))
                                          : 0x1400U)
                                      : ((4U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                          ? ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                  ? 0x1400U
                                                  : 0x1448U)
                                              : ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                  ? 0x1444U
                                                  : 0x1460U))
                                          : ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                  ? 0x1471U
                                                  : 0x1469U)
                                              : ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                  ? 0x1442U
                                                  : 0x1440U))))
                                  : ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                      ? 0x1400U : (
                                                   (4U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                      ? 0x11a40U
                                                      : 0x1400U)
                                                     : 0x1040U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl))
                                                      ? 0x1400U
                                                      : 0x1040U)
                                                     : 0x1040U)))))
                : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec)
                    ? ((0U == (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                     >> 0xcU))) ? 0x1500U
                        : ((1U == (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                         >> 0xcU)))
                            ? 0x1500U : ((2U == (7U 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                    >> 0xcU)))
                                          ? 0x1500U
                                          : 0x1400U)))
                    : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec)
                        ? ((0x4000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                            ? ((0x2000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                ? ((0x1000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                    ? 0xb011U : 0xb031U)
                                : 0xb001U) : ((0x2000U 
                                               & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                               ? 0x8001U
                                               : 0xb001U))
                        : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec)
                            ? ((0x27U == (0x7fU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg))
                                ? 0x6440U : ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg))
                                              ? 0x4440U
                                              : 0xe000U))
                            : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec)
                                ? 0xd840U : 0U))))));
    vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
        = (0xfffffU & (((- (IData)((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec))) 
                        & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                           >> 0xcU)) | ((- (IData)((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec))) 
                                        & ((0x80000U 
                                            & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                               >> 0xcU)) 
                                           | ((0x7f800U 
                                               & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                  >> 1U)) 
                                              | ((0x400U 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                     >> 0xaU)) 
                                                 | (0x3ffU 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                       >> 0x15U))))))));
    vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex = ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec) 
                                                 | (IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex));
    vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm 
        = ((0x40U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
            ? ((0x20U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                ? ((0x10U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                    ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                    : ((8U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                        ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                        : ((4U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                            ? ((2U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                ? ((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                       >> 0xbU)))) 
                                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                       >> 0xbU)))) 
                                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
                            : ((2U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                ? ((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                       >> 0xbU)))) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                        << 1U)) : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                                   >> 0xbU)))) 
                                                    << 0xcU) 
                                                   | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))))))
                : (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                      >> 0xbU)))) << 0xcU) 
                   | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
            : ((0x20U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                ? ((0x10U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                    ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                    : ((8U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                        ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                        : ((4U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                            ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                            : ((2U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                ? ((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                       >> 0xbU)))) 
                                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                       >> 0xbU)))) 
                                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))))))
                : ((8U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                    ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                    : ((4U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                        ? (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                        : ((2U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                            ? ((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))
                            : (((- (IData)((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss)))))));
    vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec)
            ? (((- (IData)((1U & (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                  >> 0x13U)))) << 0x15U) 
               | (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                  << 1U)) : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec)
                              ? (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                 << 0xcU) : vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtop_tb__ConstPool__TABLE_hc2ab7189_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex = 
        ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
         & (((~ (IData)((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum))) 
             & (0U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
            | ((((4U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg)) 
                 | (6U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                & (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__n_alu)) 
               | (((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum) 
                   & (1U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                  | (((5U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg)) 
                      | (7U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg))) 
                     & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__n_alu)) 
                        | (~ (IData)((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum)))))))));
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred 
        = (1U & (vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                 [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)] 
                 >> 1U));
    vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem 
        = (((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg) 
            == (IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex)) 
           & (vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg 
              == vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred)
            ? vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__btb
           [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)]
            : 0U);
    __Vtableidx1 = (((IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem) 
                     << 2U) | vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                    [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)]);
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits 
        = Vtop_tb__ConstPool__TABLE_hc2ab7189_0[__Vtableidx1];
    vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex 
        = ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem)) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT__flush_ex_hz 
        = ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem)) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex));
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT__flush_ex_hz) 
           | (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex));
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr 
        = (((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT__flush_ex_hz) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex)) 
           | ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
              & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex)));
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__4(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__5(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__1(Vtop_tb___024root* vlSelf);
void Vtop_tb_adder___nba_comb__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0(Vtop_tb_adder* vlSelf);
void Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0(Vtop_tb_adder* vlSelf);
void Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__1(Vtop_tb_adder* vlSelf);
void Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD2__0(Vtop_tb_adder* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vtop_tb_adder___nba_comb__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1));
        Vtop_tb___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_tb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_tb___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_tb___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD1__1((&vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1));
        Vtop_tb_adder___nba_sequent__TOP__top_tb__DOT__T1__DOT__ADD2__0((&vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_tb___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
}
