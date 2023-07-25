// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtop_tb__Syms;
class Vtop_tb_adder;


class Vtop_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_tb_adder* __PVT__top_tb__DOT__T1__DOT__ADD1;
    Vtop_tb_adder* __PVT__top_tb__DOT__T1__DOT__ADD2;
    Vtop_tb_adder* __PVT__top_tb__DOT__T1__DOT__A1__DOT__A1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(master_clk,0,0);
        CData/*0:0*/ top_tb__DOT__reset_tb;
        CData/*0:0*/ top_tb__DOT__is_r_type_ex;
        CData/*0:0*/ top_tb__DOT__is_i_type_ex;
        CData/*0:0*/ top_tb__DOT__is_s_type_ex;
        CData/*0:0*/ top_tb__DOT__is_b_type_ex;
        CData/*0:0*/ top_tb__DOT__is_u_type_ex;
        CData/*0:0*/ top_tb__DOT__is_j_type_ex;
        CData/*4:0*/ top_tb__DOT__rd_ex;
        CData/*4:0*/ top_tb__DOT__rs1_ex;
        CData/*4:0*/ top_tb__DOT__rs2_ex;
        CData/*0:0*/ top_tb__DOT__is_r_type_mem;
        CData/*0:0*/ top_tb__DOT__is_i_type_mem;
        CData/*0:0*/ top_tb__DOT__is_s_type_mem;
        CData/*0:0*/ top_tb__DOT__is_b_type_mem;
        CData/*0:0*/ top_tb__DOT__is_u_type_mem;
        CData/*0:0*/ top_tb__DOT__is_j_type_mem;
        CData/*4:0*/ top_tb__DOT__rd_mem;
        CData/*4:0*/ top_tb__DOT__rs1_mem;
        CData/*4:0*/ top_tb__DOT__rs2_mem;
        CData/*0:0*/ top_tb__DOT__is_r_type_wb;
        CData/*0:0*/ top_tb__DOT__is_i_type_wb;
        CData/*0:0*/ top_tb__DOT__is_s_type_wb;
        CData/*0:0*/ top_tb__DOT__is_b_type_wb;
        CData/*0:0*/ top_tb__DOT__is_u_type_wb;
        CData/*0:0*/ top_tb__DOT__is_j_type_wb;
        CData/*4:0*/ top_tb__DOT__rd_wb;
        CData/*4:0*/ top_tb__DOT__rs1_wb;
        CData/*4:0*/ top_tb__DOT__rs2_wb;
        CData/*0:0*/ top_tb__DOT__T1__DOT__wa_sel_iss_ex;
        CData/*0:0*/ top_tb__DOT__T1__DOT__jump_iss_ex;
        CData/*0:0*/ top_tb__DOT__T1__DOT__flush_incorr_pred_ex;
        CData/*0:0*/ top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem;
        CData/*0:0*/ top_tb__DOT__T1__DOT__branch_taken_ex;
        CData/*0:0*/ top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr;
        CData/*0:0*/ top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr;
        CData/*0:0*/ top_tb__DOT__T1__DOT__jalr_iss_ex;
        CData/*0:0*/ top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_en_imem_ram_i;
        CData/*1:0*/ top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits;
        CData/*0:0*/ top_tb__DOT__T1__DOT__BPRED__DOT__brn_takeness_bpred;
        CData/*0:0*/ top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec;
        CData/*0:0*/ top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec;
        CData/*3:0*/ top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl;
        CData/*4:0*/ top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg;
        CData/*2:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg;
        CData/*6:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg;
        CData/*4:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg;
        CData/*4:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg;
        CData/*4:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_r_type_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_s_type_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_u_type_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_j_type_ex_pipe_reg;
        CData/*1:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg;
        CData/*1:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg;
    };
    struct {
        CData/*1:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc4_sel_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__cpr_en_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wa_sel_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg;
        CData/*5:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__A1__DOT__n_alu;
        CData/*0:0*/ top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res;
        CData/*0:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr;
        CData/*0:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg;
        CData/*1:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg;
        CData/*4:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg;
        CData/*1:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__instr_retired_wb_pipe_reg;
        CData/*4:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg;
        CData/*0:0*/ top_tb__DOT__T1__DOT__hazard__DOT__flush_ex_hz;
        CData/*0:0*/ top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_h7dd99e79__0;
        CData/*0:0*/ top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0;
        CData/*0:0*/ __VdfgTmp_h2bd2e9c4__0;
        CData/*0:0*/ __VdfgTmp_hbfa43bc6__0;
        CData/*0:0*/ __Vdlyvset__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0;
        CData/*0:0*/ __Vtrigrprev__TOP__master_clk;
        CData/*0:0*/ __Vtrigrprev__TOP__top_tb__DOT__reset_tb;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top_tb__DOT__T1__DOT__instr_imm_12bit_iss;
        SData/*10:0*/ __Vdlyvdim0__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0;
        IData/*31:0*/ top_tb__DOT__pc_iss;
        IData/*31:0*/ top_tb__DOT__instr_iss;
        IData/*31:0*/ top_tb__DOT__pc_ex;
        IData/*31:0*/ top_tb__DOT__instr_ex;
        IData/*31:0*/ top_tb__DOT__rd_val_ex;
        IData/*31:0*/ top_tb__DOT__rs1_val_ex;
        IData/*31:0*/ top_tb__DOT__rs2_val_ex;
        IData/*31:0*/ top_tb__DOT__pc_mem;
        IData/*31:0*/ top_tb__DOT__instr_mem;
        IData/*31:0*/ top_tb__DOT__rd_val_mem;
        IData/*31:0*/ top_tb__DOT__rs1_val_mem;
        IData/*31:0*/ top_tb__DOT__rs2_val_mem;
        IData/*31:0*/ top_tb__DOT__pc_wb;
        IData/*31:0*/ top_tb__DOT__instr_wb;
        IData/*31:0*/ top_tb__DOT__instr_count;
        IData/*19:0*/ top_tb__DOT__T1__DOT__instr_imm_20bit_iss;
        IData/*31:0*/ top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex;
        IData/*31:0*/ top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem;
        IData/*31:0*/ top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem;
        IData/*31:0*/ top_tb__DOT__T1__DOT__r_data_p2_ex_mem;
        IData/*31:0*/ top_tb__DOT__T1__DOT__wr_data_rf_wb_ret;
        IData/*31:0*/ top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_instr_imem_ram_i;
        IData/*31:0*/ top_tb__DOT__T1__DOT__BPRED__DOT__brn_target_addr_bpred;
        IData/*31:0*/ top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg;
        IData/*16:0*/ top_tb__DOT__T1__DOT__C1__DOT__controls;
        IData/*31:0*/ top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm;
        IData/*31:0*/ top_tb__DOT__T1__DOT__R1__DOT__r_data_p1;
    };
    struct {
        IData/*31:0*/ top_tb__DOT__T1__DOT__R1__DOT__r_data_p2;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu;
        IData/*31:0*/ top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res;
        IData/*31:0*/ top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits;
        IData/*31:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data;
        IData/*31:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg;
        IData/*31:0*/ top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg;
        IData/*31:0*/ __Vdlyvval__top_tb__DOT__T1__DOT__I_MEM1__DOT__imem__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 2048> top_tb__DOT__T1__DOT__I_MEM1__DOT__imem;
        VlUnpacked<CData/*1:0*/, 1024> top_tb__DOT__T1__DOT__BPRED__DOT__bpred;
        VlUnpacked<IData/*31:0*/, 1024> top_tb__DOT__T1__DOT__BPRED__DOT__btb;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__T1__DOT__R1__DOT__reg_file;
        VlUnpacked<IData/*31:0*/, 8192> top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem;
        VlUnpacked<CData/*0:0*/, 13> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3e8c3e9a__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
