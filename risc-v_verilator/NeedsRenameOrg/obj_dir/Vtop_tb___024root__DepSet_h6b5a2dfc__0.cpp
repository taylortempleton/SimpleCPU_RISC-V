// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb___024root.h"

VlCoroutine Vtop_tb___024root___eval_initial__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_tb___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vtrigrprev__TOP__master_clk = vlSelf->master_clk;
    vlSelf->__Vtrigrprev__TOP__top_tb__DOT__reset_tb 
        = vlSelf->top_tb__DOT__reset_tb;
}

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0;
    __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0;
    __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0;
    __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0;
    __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0;
    __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0;
    __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0;
    __Vdlyvdim0__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0;
    __Vdlyvval__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0;
    __Vdlyvset__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 = 0;
    // Body
    vlSelf->__Vdlyvset__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 = 0U;
    __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 = 0U;
    __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 = 0U;
    __Vdlyvset__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 = 0U;
    if (vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_en_imem_ram_i) {
        vlSelf->__Vdlyvval__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 
            = vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_instr_imem_ram_i;
        vlSelf->__Vdlyvset__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 = 1U;
        vlSelf->__Vdlyvdim0__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 
            = (0x7ffU & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                          - (IData)(0x2000U)) >> 2U));
    }
    if (vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) {
        __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 
            = vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits;
        __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0 
            = (0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg);
        if ((1U & (~ (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem)))) {
            __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 
                = vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg;
            __Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0 
                = (0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg);
        }
    }
    if (vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg) {
        __Vdlyvval__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 
            = vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg;
        __Vdlyvset__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0 
            = (0x1fffU & (vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg 
                          >> 2U));
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wa_sel_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__wa_sel_iss_ex));
    if (((IData)(vlSelf->top_tb__DOT__reset_tb) | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg 
            = (3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                     >> 0xfU));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p2;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg 
            = (3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                     >> 0xcU));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p1;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg 
            = (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                     >> 0xcU));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg 
            = (0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                        >> 0x14U));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg 
            = (0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                        >> 0xfU));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg 
            = vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg;
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc4_sel_ex_pipe_reg 
        = (1U & ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                     | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
                 & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                    >> 9U)));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__cpr_en_ex_pipe_reg 
        = (1U & ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                     | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
                 & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                    >> 7U)));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg 
        = (1U & ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                     | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
                 & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                    >> 0xeU)));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_j_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_u_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_s_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_r_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec));
    if (__Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0) {
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred[__Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0] 
            = __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__bpred__v0;
    }
    if (__Vdlyvset__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0) {
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__btb[__Vdlyvdim0__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0] 
            = __Vdlyvval__top_tb__DOT__T1__DOT__BPRED__DOT__btb__v0;
    }
    if (__Vdlyvset__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0) {
        vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem[__Vdlyvdim0__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0] 
            = __Vdlyvval__top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem__v0;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p1 
        = vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
        [(0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                   >> 0xfU))];
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p2 
        = vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
        [(0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                   >> 0x14U))];
    if (vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg) {
        vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg] 
            = vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec));
    if (((IData)(vlSelf->top_tb__DOT__reset_tb) | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg = 0U;
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg = 0U;
    } else {
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg 
            = (0x7fU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg);
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg 
            = (3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                     >> 0xaU));
        vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg 
            = (0x3fU & vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls);
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg 
        = (1U & ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                     | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
                 & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                    >> 8U)));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
           & ((~ (IData)(vlSelf->top_tb__DOT__reset_tb)) 
              & ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec) 
                 | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec) 
                    | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec) 
                       | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec) 
                          | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec) 
                             | (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec))))))));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb 
        = vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem
        [(0x1fffU & (vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg 
                     >> 2U))];
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__4(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg 
        = ((~ (IData)(vlSelf->top_tb__DOT__reset_tb)) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg 
        = ((IData)(vlSelf->top_tb__DOT__reset_tb) ? 0U
            : (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg 
        = ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
               | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))) 
           & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg));
    if ((0U != (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))) {
        vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0 
            = vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg;
        vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret 
            = ((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg))
                ? vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg
                : ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg))
                    ? vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg
                    : vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg));
    } else {
        vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0 = 0U;
        vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret = 0U;
    }
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg 
        = (((IData)(vlSelf->top_tb__DOT__reset_tb) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr))
            ? 0U : (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg) 
           & (0U != (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg)));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__5(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg 
        = (1U & ((~ ((IData)(vlSelf->top_tb__DOT__reset_tb) 
                     | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))) 
                 & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                    >> 6U)));
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg 
        = (((IData)(vlSelf->top_tb__DOT__reset_tb) 
            | (IData)(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr))
            ? 0U : (0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                             >> 7U)));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->__VdfgTmp_hbfa43bc6__0 = ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0) 
                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg) 
                                         == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg)));
    vlSelf->__VdfgTmp_h2bd2e9c4__0 = ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0) 
                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg) 
                                         == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg)));
    vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem 
        = ((IData)(vlSelf->__VdfgTmp_hbfa43bc6__0) ? vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg
            : (((~ (IData)(vlSelf->__VdfgTmp_hbfa43bc6__0)) 
                & ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                   & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg) 
                      == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))))
                ? vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret
                : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg));
    vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg)
            ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg
            : ((IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)
                ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg)
                    ? vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb
                    : vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg)
                : (((~ (IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)) 
                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                       & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                          == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))))
                    ? vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret
                    : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg)));
    vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem 
        = ((3U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
            ? vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem
            : ((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
                ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg
                : ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
                    ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg
                    : 0U)));
    if ((1U == (3U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                      >> 1U)))) {
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res 
            = (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
               << (0x1fU & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem));
    } else if ((2U == (3U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                             >> 1U)))) {
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res 
            = (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
               >> (0x1fU & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem));
    } else if ((3U == (3U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                             >> 1U)))) {
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits 
            = ((IData)(0xffffffffU) << (0x1fU & ((IData)(0x1fU) 
                                                 - vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)));
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res 
            = (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
               >> (0x1fU & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem));
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res 
            = ((vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                >> 0x1fU) ? (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits 
                             | vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res)
                : vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res);
    } else {
        vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res = 0U;
    }
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res 
        = ((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
            ? ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                ? ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                       >> 3U)) & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                  < vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                : (((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                    >> 3U) & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                              < vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)))
            : ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                ? ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                       >> 3U)) & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                  > vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                : ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                       >> 3U)) & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                  == vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))));
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
        = ((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
            ? (~ vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)
            : vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem);
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop_tb___024root___eval_triggers__act(vlSelf);
            Vtop_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top_tb.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop_tb___024root___timing_resume(vlSelf);
                Vtop_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top_tb.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_h3e8c3e9a__0.commit("@(posedge master_clk)");
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_h3e8c3e9a__0.resume("@(posedge master_clk)");
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->master_clk & 0xfeU))) {
        Verilated::overWidthError("master_clk");}
}
#endif  // VL_DEBUG
