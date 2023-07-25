// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "verilated.h"

#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../riscv-pipeline/testbench/top_tb.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h0ee737eb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h0711ac51_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h4789efb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hd7338bcc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h8a71061d_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred 
        = (1U & (vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                 [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)] 
                 >> 1U));
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl 
        = ((8U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                  >> 0x1bU)) | (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                      >> 0xcU)));
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl 
        = ((0x10U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg) 
           | (7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                    >> 0xcU)));
    vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data 
        = vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem
        [(0x1fffU & (vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg 
                     >> 2U))];
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
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg) 
           & (0U != (IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg)));
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
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred)
            ? vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__btb
           [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)]
            : 0U);
    vlSelf->__VdfgTmp_hbfa43bc6__0 = ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0) 
                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg) 
                                         == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg)));
    vlSelf->__VdfgTmp_h2bd2e9c4__0 = ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0) 
                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg) 
                                         == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg)));
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
                    ? vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data
                    : vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg)
                : (((~ (IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)) 
                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                       & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                          == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))))
                    ? vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret
                    : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg)));
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
    vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem 
        = ((3U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
            ? vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem
            : ((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
                ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg
                : ((2U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg))
                    ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg
                    : 0U)));
    vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
        = ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec)
            ? (((- (IData)((1U & (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                  >> 0x13U)))) << 0x15U) 
               | (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                  << 1U)) : ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec)
                              ? (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                 << 0xcU) : vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm));
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge master_clk or posedge top_tb.reset_tb)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge master_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge master_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge master_clk or posedge top_tb.reset_tb)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge master_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge master_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->master_clk = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__reset_tb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__pc_iss = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__instr_iss = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__pc_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__instr_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__is_r_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_i_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_s_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_b_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_u_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_j_type_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__rd_ex = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs1_ex = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs2_ex = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rd_val_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__rs1_val_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__rs2_val_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__pc_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__instr_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__is_r_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_i_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_s_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_b_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_u_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_j_type_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__rd_mem = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs1_mem = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs2_mem = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rd_val_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__rs1_val_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__rs2_val_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__pc_wb = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__instr_wb = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__is_r_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_i_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_s_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_b_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_u_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__is_j_type_wb = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs1_wb = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__rs2_wb = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__instr_count = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top_tb__DOT__init_imem__Vstatic__instr_hex[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top_tb__DOT__init_imem__Vstatic__pc_val[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__T1__DOT__wa_sel_iss_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss = VL_RAND_RESET_I(12);
    vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss = VL_RAND_RESET_I(20);
    vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_instr_imem_ram_i = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_en_imem_ram_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__btb[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl = VL_RAND_RESET_I(4);
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls = VL_RAND_RESET_I(17);
    vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg = VL_RAND_RESET_I(7);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_r_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_s_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_u_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_j_type_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc4_sel_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__cpr_en_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wa_sel_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg = VL_RAND_RESET_I(6);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__n_alu = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__instr_retired_wb_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT__flush_ex_hz = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0 = 0;
    vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0 = 0;
    vlSelf->__VdfgTmp_h2bd2e9c4__0 = 0;
    vlSelf->__VdfgTmp_hbfa43bc6__0 = 0;
    vlSelf->__Vdlyvdim0__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 = 0;
    vlSelf->__Vdlyvval__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0 = 0;
    vlSelf->__Vtrigrprev__TOP__master_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top_tb__DOT__reset_tb = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
