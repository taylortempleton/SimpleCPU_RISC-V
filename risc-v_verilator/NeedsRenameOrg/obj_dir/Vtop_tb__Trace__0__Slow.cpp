// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1299,"master_clk", false,-1);
    tracep->pushNamePrefix("top_tb ");
    tracep->declBit(c+1299,"master_clk", false,-1);
    tracep->declBit(c+1300,"reset_tb", false,-1);
    tracep->declBus(c+607,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1301,"instr_fetch", false,-1, 31,0);
    tracep->declBus(c+1318,"pc_iss", false,-1, 31,0);
    tracep->declBus(c+1319,"instr_iss", false,-1, 31,0);
    tracep->declBit(c+864,"is_r_type_iss", false,-1);
    tracep->declBit(c+865,"is_i_type_iss", false,-1);
    tracep->declBit(c+866,"is_s_type_iss", false,-1);
    tracep->declBit(c+867,"is_b_type_iss", false,-1);
    tracep->declBit(c+868,"is_u_type_iss", false,-1);
    tracep->declBit(c+869,"is_j_type_iss", false,-1);
    tracep->declBus(c+608,"rd_iss", false,-1, 4,0);
    tracep->declBus(c+609,"rs1_iss", false,-1, 4,0);
    tracep->declBus(c+610,"rs2_iss", false,-1, 4,0);
    tracep->declBus(c+1320,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+1321,"instr_ex", false,-1, 31,0);
    tracep->declBit(c+1322,"is_r_type_ex", false,-1);
    tracep->declBit(c+1323,"is_i_type_ex", false,-1);
    tracep->declBit(c+1324,"is_s_type_ex", false,-1);
    tracep->declBit(c+1325,"is_b_type_ex", false,-1);
    tracep->declBit(c+1326,"is_u_type_ex", false,-1);
    tracep->declBit(c+1327,"is_j_type_ex", false,-1);
    tracep->declBus(c+1328,"rd_ex", false,-1, 4,0);
    tracep->declBus(c+1329,"rs1_ex", false,-1, 4,0);
    tracep->declBus(c+1330,"rs2_ex", false,-1, 4,0);
    tracep->declBus(c+1331,"rd_val_ex", false,-1, 31,0);
    tracep->declBus(c+1332,"rs1_val_ex", false,-1, 31,0);
    tracep->declBus(c+1333,"rs2_val_ex", false,-1, 31,0);
    tracep->declBus(c+1334,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+1335,"instr_mem", false,-1, 31,0);
    tracep->declBit(c+1336,"is_r_type_mem", false,-1);
    tracep->declBit(c+1337,"is_i_type_mem", false,-1);
    tracep->declBit(c+1338,"is_s_type_mem", false,-1);
    tracep->declBit(c+1339,"is_b_type_mem", false,-1);
    tracep->declBit(c+1340,"is_u_type_mem", false,-1);
    tracep->declBit(c+1341,"is_j_type_mem", false,-1);
    tracep->declBus(c+1342,"rd_mem", false,-1, 4,0);
    tracep->declBus(c+1343,"rs1_mem", false,-1, 4,0);
    tracep->declBus(c+1344,"rs2_mem", false,-1, 4,0);
    tracep->declBus(c+1345,"rd_val_mem", false,-1, 31,0);
    tracep->declBus(c+1346,"rs1_val_mem", false,-1, 31,0);
    tracep->declBus(c+1347,"rs2_val_mem", false,-1, 31,0);
    tracep->declBus(c+1348,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+1349,"instr_wb", false,-1, 31,0);
    tracep->declBit(c+1350,"is_r_type_wb", false,-1);
    tracep->declBit(c+1351,"is_i_type_wb", false,-1);
    tracep->declBit(c+1352,"is_s_type_wb", false,-1);
    tracep->declBit(c+1353,"is_b_type_wb", false,-1);
    tracep->declBit(c+1354,"is_u_type_wb", false,-1);
    tracep->declBit(c+1355,"is_j_type_wb", false,-1);
    tracep->declBus(c+1356,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+1357,"rs1_wb", false,-1, 4,0);
    tracep->declBus(c+1358,"rs2_wb", false,-1, 4,0);
    tracep->declBus(c+1,"rd_val_wb", false,-1, 31,0);
    tracep->declBus(c+2,"rs1_val_wb", false,-1, 31,0);
    tracep->declBus(c+3,"rs2_val_wb", false,-1, 31,0);
    tracep->declBit(c+55,"instr_retired_wb", false,-1);
    tracep->declBus(c+1359,"instr_count", false,-1, 31,0);
    tracep->declBus(c+1360,"tb_init_imem__Vstatic__instr_seg_begin", false,-1, 31,0);
    tracep->declBus(c+1361,"tb_init_imem__Vstatic__instr_seg_size", false,-1, 31,0);
    tracep->pushNamePrefix("T1 ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+1362,"stall_fetch", false,-1);
    tracep->declBus(c+607,"curr_pc_pc_reg_fetch", false,-1, 31,0);
    tracep->declBus(c+1302,"next_pc_fetch_iss", false,-1, 31,0);
    tracep->declBus(c+1303,"next_cal_pc_fetch_iss", false,-1, 31,0);
    tracep->declBus(c+1301,"instr_pc_reg_fetch", false,-1, 31,0);
    tracep->declBus(c+870,"next_seq_pc_pc_reg_fetch", false,-1, 31,0);
    tracep->declBus(c+1290,"next_pred_pc_fetch_iss", false,-1, 31,0);
    tracep->declBit(c+611,"next_seq_pc_carry_pc_reg_fetch", false,-1);
    tracep->declBit(c+1291,"brn_pred_fetch_iss", false,-1);
    tracep->declBit(c+1304,"valid_iss_ex", false,-1);
    tracep->declBit(c+1362,"stall_iss", false,-1);
    tracep->declBit(c+1305,"flush_iss", false,-1);
    tracep->declBit(c+1306,"flush_incorr_pred_iss", false,-1);
    tracep->declBus(c+871,"next_seq_pc_iss_ex", false,-1, 31,0);
    tracep->declBus(c+612,"instr_iss_ex", false,-1, 31,0);
    tracep->declBus(c+56,"curr_pc_iss_ex", false,-1, 31,0);
    tracep->declBus(c+57,"next_pred_pc_iss_ex", false,-1, 31,0);
    tracep->declBit(c+872,"brn_pred_iss_ex", false,-1);
    tracep->declBus(c+609,"rs1_iss_ex", false,-1, 4,0);
    tracep->declBus(c+610,"rs2_iss_ex", false,-1, 4,0);
    tracep->declBus(c+608,"rd_iss_ex", false,-1, 4,0);
    tracep->declBus(c+613,"funct3_iss_ex", false,-1, 2,0);
    tracep->declBus(c+614,"funct7_iss_ex", false,-1, 6,0);
    tracep->declBus(c+615,"op_iss_ex", false,-1, 6,0);
    tracep->declBit(c+864,"is_r_type_iss_ex", false,-1);
    tracep->declBit(c+865,"is_i_type_iss_ex", false,-1);
    tracep->declBit(c+866,"is_s_type_iss_ex", false,-1);
    tracep->declBit(c+867,"is_b_type_iss_ex", false,-1);
    tracep->declBit(c+868,"is_u_type_iss_ex", false,-1);
    tracep->declBit(c+869,"is_j_type_iss_ex", false,-1);
    tracep->declBus(c+873,"pc_sel_iss_ex", false,-1, 1,0);
    tracep->declBit(c+874,"op1sel_iss_ex", false,-1);
    tracep->declBus(c+875,"op2sel_iss_ex", false,-1, 1,0);
    tracep->declBus(c+876,"wb_sel_iss_ex", false,-1, 1,0);
    tracep->declBit(c+877,"pc4_sel_iss_ex", false,-1);
    tracep->declBit(c+878,"mem_wr_iss_ex", false,-1);
    tracep->declBit(c+879,"cpr_en_iss_ex", false,-1);
    tracep->declBit(c+1363,"wa_sel_iss_ex", false,-1);
    tracep->declBit(c+880,"rf_en_iss_ex", false,-1);
    tracep->declBus(c+881,"alu_fn_iss_ex", false,-1, 5,0);
    tracep->declBus(c+1307,"r_data_p1_rf_iss_ex", false,-1, 31,0);
    tracep->declBus(c+1308,"r_data_p2_rf_iss_ex", false,-1, 31,0);
    tracep->declBus(c+616,"i_type_imm_iss_ex", false,-1, 11,0);
    tracep->declBus(c+617,"s_type_imm_iss_ex", false,-1, 11,0);
    tracep->declBus(c+618,"b_type_imm_iss_ex", false,-1, 11,0);
    tracep->declBus(c+619,"u_type_imm_iss_ex", false,-1, 19,0);
    tracep->declBus(c+620,"j_type_imm_iss_ex", false,-1, 19,0);
    tracep->declBus(c+882,"instr_imm_12bit_iss", false,-1, 11,0);
    tracep->declBus(c+883,"instr_imm_20bit_iss", false,-1, 19,0);
    tracep->declBus(c+884,"sign_extnd_imm_12bit_iss", false,-1, 31,0);
    tracep->declBus(c+885,"sign_extnd_imm_20bit_iss", false,-1, 31,0);
    tracep->declBus(c+886,"sign_extnd_imm_iss_ex", false,-1, 31,0);
    tracep->declBus(c+887,"next_j_br_pc_iss_ex", false,-1, 31,0);
    tracep->declBit(c+109,"next_j_br_pc_carry_iss_ex", false,-1);
    tracep->declBus(c+887,"next_brn_pc_iss_ex", false,-1, 31,0);
    tracep->declBus(c+888,"next_jmp_pc_iss_ex", false,-1, 31,0);
    tracep->declBit(c+889,"jump_iss_ex", false,-1);
    tracep->declBit(c+121,"valid_ex_mem", false,-1);
    tracep->declBit(c+1292,"flush_ex", false,-1);
    tracep->declBit(c+1293,"flush_incorr_pred_ex", false,-1);
    tracep->declBus(c+36,"funct3_ex_mem", false,-1, 2,0);
    tracep->declBus(c+37,"rs1_ex_mem", false,-1, 4,0);
    tracep->declBus(c+38,"rs2_ex_mem", false,-1, 4,0);
    tracep->declBus(c+1309,"rd_ex_mem", false,-1, 4,0);
    tracep->declBus(c+122,"op_ex_mem", false,-1, 6,0);
    tracep->declBit(c+39,"is_r_type_ex_mem", false,-1);
    tracep->declBit(c+123,"is_i_type_ex_mem", false,-1);
    tracep->declBit(c+40,"is_s_type_ex_mem", false,-1);
    tracep->declBit(c+859,"is_b_type_ex_mem", false,-1);
    tracep->declBit(c+41,"is_u_type_ex_mem", false,-1);
    tracep->declBit(c+42,"is_j_type_ex_mem", false,-1);
    tracep->declBit(c+860,"jump_ex_mem", false,-1);
    tracep->declBus(c+43,"pc_sel_ex_mem", false,-1, 1,0);
    tracep->declBit(c+44,"op1sel_ex_mem", false,-1);
    tracep->declBus(c+45,"op2sel_ex_mem", false,-1, 1,0);
    tracep->declBus(c+124,"wb_sel_ex_mem", false,-1, 1,0);
    tracep->declBit(c+46,"pc4_sel_ex_mem", false,-1);
    tracep->declBit(c+125,"mem_wr_ex_mem", false,-1);
    tracep->declBit(c+47,"cpr_en_ex_mem", false,-1);
    tracep->declBit(c+48,"wa_sel_ex_mem", false,-1);
    tracep->declBus(c+126,"alu_fn_ex_mem", false,-1, 5,0);
    tracep->declBus(c+861,"next_seq_pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+49,"curr_pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+50,"next_pred_pc_ex_mem", false,-1, 31,0);
    tracep->declBit(c+862,"brn_pred_ex_mem", false,-1);
    tracep->declBus(c+863,"next_brn_pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+51,"sign_extnd_imm_ex", false,-1, 31,0);
    tracep->declBus(c+52,"r_data_p1_rf_ex_mem", false,-1, 31,0);
    tracep->declBus(c+53,"r_data_p2_rf_ex_mem", false,-1, 31,0);
    tracep->declBus(c+144,"r_data_p1_alu_ex_mem", false,-1, 31,0);
    tracep->declBus(c+145,"r_data_p2_alu_ex_mem", false,-1, 31,0);
    tracep->declBus(c+1310,"r_data_p1_ex_mem", false,-1, 31,0);
    tracep->declBus(c+146,"r_data_p2_ex_mem", false,-1, 31,0);
    tracep->declBus(c+1311,"fwd_r_data_p1_alu_ex", false,-1, 1,0);
    tracep->declBus(c+1312,"fwd_r_data_p2_alu_ex", false,-1, 1,0);
    tracep->declBit(c+1294,"brn_corr_pred_ex_mem", false,-1);
    tracep->declBit(c+1313,"force_pc_update_ex", false,-1);
    tracep->declBus(c+1314,"force_pc_val_ex", false,-1, 31,0);
    tracep->declBus(c+131,"alu_res_ex_mem", false,-1, 31,0);
    tracep->declBit(c+147,"z_ex_mem", false,-1);
    tracep->declBit(c+148,"n_ex_mem", false,-1);
    tracep->declBit(c+127,"is_lw_ex_mem", false,-1);
    tracep->declBit(c+1295,"branch_taken_ex", false,-1);
    tracep->declBit(c+58,"valid_mem_wb", false,-1);
    tracep->declBit(c+139,"rf_en_mem_wb", false,-1);
    tracep->declBus(c+59,"wb_sel_mem_wb", false,-1, 1,0);
    tracep->declBit(c+60,"mem_wr_mem_wb", false,-1);
    tracep->declBus(c+140,"rd_mem_wb", false,-1, 4,0);
    tracep->declBus(c+61,"alu_res_mem_wb", false,-1, 31,0);
    tracep->declBus(c+62,"next_seq_pc_mem_wb", false,-1, 31,0);
    tracep->declBit(c+63,"is_lw_mem_wb", false,-1);
    tracep->declBus(c+1315,"read_data_dmem_ram_mem_wb", false,-1, 31,0);
    tracep->declBus(c+64,"r_data_p2_mem_wb", false,-1, 31,0);
    tracep->declBit(c+55,"valid_wb_ret", false,-1);
    tracep->declBit(c+141,"rf_en_wb_ret", false,-1);
    tracep->declBus(c+65,"wb_sel_wb_ret", false,-1, 1,0);
    tracep->declBus(c+142,"rd_wb_ret", false,-1, 4,0);
    tracep->declBus(c+66,"alu_res_wb_ret", false,-1, 31,0);
    tracep->declBus(c+67,"read_data_wb_ret", false,-1, 31,0);
    tracep->declBus(c+68,"next_seq_pc_wb_ret", false,-1, 31,0);
    tracep->declBit(c+55,"instr_retired", false,-1);
    tracep->declBus(c+143,"wr_data_rf_wb_ret", false,-1, 31,0);
    tracep->declBit(c+890,"jalr_iss_ex", false,-1);
    tracep->declBit(c+1362,"next_jalr_pc_iss_ex", false,-1);
    tracep->declBit(c+1316,"rf_en_ex_mem", false,-1);
    tracep->pushNamePrefix("A1 ");
    tracep->declBus(c+144,"opr_a_alu_i", false,-1, 31,0);
    tracep->declBus(c+145,"opr_b_alu_i", false,-1, 31,0);
    tracep->declBus(c+126,"op_alu_i", false,-1, 5,0);
    tracep->declBus(c+131,"res_alu_o", false,-1, 31,0);
    tracep->declBit(c+147,"z_alu_o", false,-1);
    tracep->declBit(c+148,"n_alu_o", false,-1);
    tracep->declBus(c+131,"res_alu", false,-1, 31,0);
    tracep->declBit(c+147,"z_alu", false,-1);
    tracep->declBit(c+148,"n_alu", false,-1);
    tracep->declBit(c+149,"v_alu", false,-1);
    tracep->declBus(c+150,"opr_b_negated_alu", false,-1, 31,0);
    tracep->declBit(c+128,"cin_alu", false,-1);
    tracep->declBus(c+151,"adder_out_alu", false,-1, 31,0);
    tracep->declBit(c+152,"carry_out_alu", false,-1);
    tracep->declBus(c+132,"logical_out_alu", false,-1, 31,0);
    tracep->declBus(c+153,"shifter_out_alu", false,-1, 31,0);
    tracep->declBit(c+154,"comparator_out_alu", false,-1);
    tracep->pushNamePrefix("C1 ");
    tracep->declBus(c+144,"op1", false,-1, 31,0);
    tracep->declBus(c+145,"op2", false,-1, 31,0);
    tracep->declBus(c+129,"operation", false,-1, 2,0);
    tracep->declBit(c+154,"res", false,-1);
    tracep->declBit(c+154,"comp_res", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("L1 ");
    tracep->declBus(c+144,"op1", false,-1, 31,0);
    tracep->declBus(c+145,"op2", false,-1, 31,0);
    tracep->declBus(c+129,"operation", false,-1, 2,0);
    tracep->declBus(c+132,"res", false,-1, 31,0);
    tracep->declBus(c+132,"res_logical", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("S1 ");
    tracep->declBus(c+144,"op1", false,-1, 31,0);
    tracep->declBus(c+155,"shamt", false,-1, 4,0);
    tracep->declBus(c+130,"operation", false,-1, 1,0);
    tracep->declBus(c+153,"res", false,-1, 31,0);
    tracep->declBus(c+153,"shift_res", false,-1, 31,0);
    tracep->declBus(c+156,"sign_bits", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("BPRED ");
    tracep->declBus(c+1364,"NUM_ENTRIES", false,-1, 31,0);
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBus(c+621,"brn_addr_bpred_i", false,-1, 9,0);
    tracep->declBit(c+859,"brn_ex_mem_bpred_i", false,-1);
    tracep->declBus(c+54,"brn_fdback_addr_bpred_i", false,-1, 9,0);
    tracep->declBit(c+1294,"brn_fdback_bpred_i", false,-1);
    tracep->declBus(c+863,"brn_btb_addr_bpred_i", false,-1, 31,0);
    tracep->declBit(c+1291,"brn_takeness_bpred_o", false,-1);
    tracep->declBus(c+1290,"brn_target_addr_bpred_o", false,-1, 31,0);
    tracep->declBus(c+1317,"brn_pred_bits", false,-1, 1,0);
    tracep->declBus(c+1296,"nxt_brn_pred_bits", false,-1, 1,0);
    tracep->declBit(c+1291,"brn_takeness_bpred", false,-1);
    tracep->declBus(c+1290,"brn_target_addr_bpred", false,-1, 31,0);
    tracep->pushNamePrefix("COUNTER ");
    tracep->declBus(c+1317,"count_i", false,-1, 1,0);
    tracep->declBit(c+1294,"op", false,-1);
    tracep->declBus(c+1296,"count", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("C1 ");
    tracep->declBus(c+613,"instr_funct3_ctl_i", false,-1, 2,0);
    tracep->declBus(c+614,"instr_funct7_ctl_i", false,-1, 6,0);
    tracep->declBus(c+615,"instr_opcode_ctl_i", false,-1, 6,0);
    tracep->declBit(c+864,"is_r_type_ctl_i", false,-1);
    tracep->declBit(c+865,"is_i_type_ctl_i", false,-1);
    tracep->declBit(c+866,"is_s_type_ctl_i", false,-1);
    tracep->declBit(c+867,"is_b_type_ctl_i", false,-1);
    tracep->declBit(c+868,"is_u_type_ctl_i", false,-1);
    tracep->declBit(c+869,"is_j_type_ctl_i", false,-1);
    tracep->declBus(c+873,"pc_sel_ctl_o", false,-1, 1,0);
    tracep->declBit(c+874,"op1sel_ctl_o", false,-1);
    tracep->declBus(c+875,"op2sel_ctl_o", false,-1, 1,0);
    tracep->declBus(c+876,"wb_sel_ctl_o", false,-1, 1,0);
    tracep->declBit(c+877,"pc4_sel_ctl_o", false,-1);
    tracep->declBit(c+878,"mem_wr_ctl_o", false,-1);
    tracep->declBit(c+879,"cpr_en_ctl_o", false,-1);
    tracep->declBit(c+880,"rf_en_ctl_o", false,-1);
    tracep->declBus(c+881,"alu_fun_ctl_o", false,-1, 5,0);
    tracep->declBus(c+873,"pc_sel_ctl", false,-1, 1,0);
    tracep->declBit(c+874,"op1sel_ctl", false,-1);
    tracep->declBus(c+875,"op2sel_ctl", false,-1, 1,0);
    tracep->declBus(c+876,"wb_sel_ctl", false,-1, 1,0);
    tracep->declBit(c+877,"pc4_sel_ctl", false,-1);
    tracep->declBit(c+878,"mem_wr_ctl", false,-1);
    tracep->declBit(c+879,"cpr_en_ctl", false,-1);
    tracep->declBit(c+880,"rf_en_ctl", false,-1);
    tracep->declBus(c+881,"alu_fun_ctl", false,-1, 5,0);
    tracep->declBus(c+622,"instr_funct_ctl", false,-1, 3,0);
    tracep->declBus(c+623,"instr_opc_ctl", false,-1, 4,0);
    tracep->declBus(c+891,"controls", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D1 ");
    tracep->declBus(c+612,"instr_dec_i", false,-1, 31,0);
    tracep->declBus(c+609,"rs1_dec_o", false,-1, 4,0);
    tracep->declBus(c+610,"rs2_dec_o", false,-1, 4,0);
    tracep->declBus(c+608,"rd_dec_o", false,-1, 4,0);
    tracep->declBus(c+615,"op_dec_o", false,-1, 6,0);
    tracep->declBus(c+613,"funct3_dec_o", false,-1, 2,0);
    tracep->declBus(c+614,"funct7_dec_o", false,-1, 6,0);
    tracep->declBit(c+864,"is_r_type_dec_o", false,-1);
    tracep->declBit(c+865,"is_i_type_dec_o", false,-1);
    tracep->declBit(c+866,"is_s_type_dec_o", false,-1);
    tracep->declBit(c+867,"is_b_type_dec_o", false,-1);
    tracep->declBit(c+868,"is_u_type_dec_o", false,-1);
    tracep->declBit(c+869,"is_j_type_dec_o", false,-1);
    tracep->declBus(c+616,"i_type_imm_dec_o", false,-1, 11,0);
    tracep->declBus(c+617,"s_type_imm_dec_o", false,-1, 11,0);
    tracep->declBus(c+618,"b_type_imm_dec_o", false,-1, 11,0);
    tracep->declBus(c+619,"u_type_imm_dec_o", false,-1, 19,0);
    tracep->declBus(c+620,"j_type_imm_dec_o", false,-1, 19,0);
    tracep->declBus(c+609,"rs1_dec", false,-1, 4,0);
    tracep->declBus(c+610,"rs2_dec", false,-1, 4,0);
    tracep->declBus(c+608,"rd_dec", false,-1, 4,0);
    tracep->declBus(c+615,"op_dec", false,-1, 6,0);
    tracep->declBus(c+613,"funct3_dec", false,-1, 2,0);
    tracep->declBus(c+614,"funct7_dec", false,-1, 6,0);
    tracep->declBit(c+864,"is_r_type_dec", false,-1);
    tracep->declBit(c+865,"is_i_type_dec", false,-1);
    tracep->declBit(c+866,"is_s_type_dec", false,-1);
    tracep->declBit(c+867,"is_b_type_dec", false,-1);
    tracep->declBit(c+868,"is_u_type_dec", false,-1);
    tracep->declBit(c+869,"is_j_type_dec", false,-1);
    tracep->declBus(c+616,"i_type_imm_dec", false,-1, 11,0);
    tracep->declBus(c+617,"s_type_imm_dec", false,-1, 11,0);
    tracep->declBus(c+618,"b_type_imm_dec", false,-1, 11,0);
    tracep->declBus(c+619,"u_type_imm_dec", false,-1, 19,0);
    tracep->declBus(c+620,"j_type_imm_dec", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D_MEM1 ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBus(c+61,"addr_dmem_ram_i", false,-1, 31,0);
    tracep->declBus(c+64,"wr_data_dmem_ram_i", false,-1, 31,0);
    tracep->declBus(c+1365,"wr_strb_dmem_ram_i", false,-1, 0,3);
    tracep->declBit(c+60,"wr_en_dmem_ram_i", false,-1);
    tracep->declBus(c+1315,"read_data_dmem_ram_o", false,-1, 31,0);
    tracep->declBus(c+1366,"data_seg_begin", false,-1, 31,0);
    tracep->declBus(c+1361,"data_seg_size", false,-1, 31,0);
    tracep->declBus(c+1315,"read_data", false,-1, 31,0);
    tracep->declBus(c+1367,"wr_strb", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM_REG ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+1368,"clr", false,-1);
    tracep->declBit(c+121,"valid_mem_pipe_reg_i", false,-1);
    tracep->declBit(c+1316,"rf_en_mem_pipe_reg_i", false,-1);
    tracep->declBus(c+124,"wb_sel_mem_pipe_reg_i", false,-1, 1,0);
    tracep->declBit(c+125,"mem_wr_mem_pipe_reg_i", false,-1);
    tracep->declBus(c+1309,"rd_mem_pipe_reg_i", false,-1, 4,0);
    tracep->declBus(c+131,"alu_res_mem_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+861,"next_seq_pc_mem_pipe_reg_i", false,-1, 31,0);
    tracep->declBit(c+127,"is_lw_mem_pipe_reg_i", false,-1);
    tracep->declBus(c+146,"r_data_p2_mem_pipe_reg_i", false,-1, 31,0);
    tracep->declBit(c+58,"valid_mem_pipe_reg_o", false,-1);
    tracep->declBit(c+139,"rf_en_mem_pipe_reg_o", false,-1);
    tracep->declBus(c+59,"wb_sel_mem_pipe_reg_o", false,-1, 1,0);
    tracep->declBit(c+60,"mem_wr_mem_pipe_reg_o", false,-1);
    tracep->declBus(c+140,"rd_mem_pipe_reg_o", false,-1, 4,0);
    tracep->declBus(c+61,"alu_res_mem_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+62,"next_seq_pc_mem_pipe_reg_o", false,-1, 31,0);
    tracep->declBit(c+63,"is_lw_mem_pipe_reg_o", false,-1);
    tracep->declBus(c+64,"r_data_p2_mem_pipe_reg_o", false,-1, 31,0);
    tracep->declBit(c+58,"valid_mem_pipe_reg", false,-1);
    tracep->declBit(c+139,"rf_en_mem_pipe_reg", false,-1);
    tracep->declBus(c+59,"wb_sel_mem_pipe_reg", false,-1, 1,0);
    tracep->declBit(c+60,"mem_wr_mem_pipe_reg", false,-1);
    tracep->declBus(c+140,"rd_mem_pipe_reg", false,-1, 4,0);
    tracep->declBus(c+61,"alu_res_mem_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+62,"next_seq_pc_mem_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+63,"is_lw_mem_pipe_reg", false,-1);
    tracep->declBus(c+64,"r_data_p2_mem_pipe_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FETCH_ISS_REG ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+1297,"clr", false,-1);
    tracep->declBit(c+1362,"enable", false,-1);
    tracep->declBus(c+870,"next_pc_iss_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+1301,"instr_iss_pipe_reg_i", false,-1, 31,0);
    tracep->declBit(c+1291,"brn_pred_iss_pipe_reg_i", false,-1);
    tracep->declBus(c+607,"curr_pc_iss_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+1290,"next_pred_pc_iss_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+871,"next_pc_iss_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+612,"instr_iss_pipe_reg_o", false,-1, 31,0);
    tracep->declBit(c+872,"brn_pred_iss_pipe_reg_o", false,-1);
    tracep->declBus(c+56,"curr_pc_iss_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+57,"next_pred_pc_iss_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+871,"next_pc_iss_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+612,"instr_iss_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+872,"brn_pred_iss_pipe_reg", false,-1);
    tracep->declBus(c+56,"curr_pc_iss_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+57,"next_pred_pc_iss_pipe_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FETCH_REG ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+1362,"enable", false,-1);
    tracep->declBus(c+1302,"next_pc_pc_reg_i", false,-1, 31,0);
    tracep->declBus(c+607,"next_pc_pc_reg_o", false,-1, 31,0);
    tracep->declBus(c+607,"next_pc_pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ISS_EX_REG ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+1298,"clr", false,-1);
    tracep->declBit(c+1304,"valid_ex_pipe_reg_i", false,-1);
    tracep->declBus(c+613,"funct3_ex_pipe_reg_i", false,-1, 2,0);
    tracep->declBus(c+615,"op_ex_pipe_reg_i", false,-1, 6,0);
    tracep->declBus(c+609,"rs1_ex_pipe_reg_i", false,-1, 4,0);
    tracep->declBus(c+610,"rs2_ex_pipe_reg_i", false,-1, 4,0);
    tracep->declBus(c+608,"rd_ex_pipe_reg_i", false,-1, 4,0);
    tracep->declBit(c+864,"is_r_type_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+865,"is_i_type_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+866,"is_s_type_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+867,"is_b_type_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+868,"is_u_type_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+869,"is_j_type_ex_pipe_reg_i", false,-1);
    tracep->declBus(c+873,"pc_sel_ex_pipe_reg_i", false,-1, 1,0);
    tracep->declBit(c+874,"op1sel_ex_pipe_reg_i", false,-1);
    tracep->declBus(c+875,"op2sel_ex_pipe_reg_i", false,-1, 1,0);
    tracep->declBus(c+876,"wb_sel_ex_pipe_reg_i", false,-1, 1,0);
    tracep->declBit(c+877,"pc4_sel_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+878,"mem_wr_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+879,"cpr_en_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+1363,"wa_sel_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+880,"rf_en_ex_pipe_reg_i", false,-1);
    tracep->declBus(c+881,"alu_fun_ex_pipe_reg_i", false,-1, 5,0);
    tracep->declBus(c+871,"next_seq_pc_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+56,"curr_pc_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+887,"next_brn_pc_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+57,"next_pred_pc_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+886,"sext_imm_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+1307,"r_data_p1_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+1308,"r_data_p2_ex_pipe_reg_i", false,-1, 31,0);
    tracep->declBit(c+889,"jump_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+872,"brn_pred_ex_pipe_reg_i", false,-1);
    tracep->declBit(c+121,"valid_ex_pipe_reg_o", false,-1);
    tracep->declBus(c+36,"funct3_ex_pipe_reg_o", false,-1, 2,0);
    tracep->declBus(c+122,"op_ex_pipe_reg_o", false,-1, 6,0);
    tracep->declBus(c+37,"rs1_ex_pipe_reg_o", false,-1, 4,0);
    tracep->declBus(c+38,"rs2_ex_pipe_reg_o", false,-1, 4,0);
    tracep->declBus(c+1309,"rd_ex_pipe_reg_o", false,-1, 4,0);
    tracep->declBit(c+39,"is_r_type_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+123,"is_i_type_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+40,"is_s_type_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+859,"is_b_type_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+41,"is_u_type_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+42,"is_j_type_ex_pipe_reg_o", false,-1);
    tracep->declBus(c+43,"pc_sel_ex_pipe_reg_o", false,-1, 1,0);
    tracep->declBit(c+44,"op1sel_ex_pipe_reg_o", false,-1);
    tracep->declBus(c+45,"op2sel_ex_pipe_reg_o", false,-1, 1,0);
    tracep->declBus(c+124,"wb_sel_ex_pipe_reg_o", false,-1, 1,0);
    tracep->declBit(c+46,"pc4_sel_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+125,"mem_wr_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+47,"cpr_en_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+48,"wa_sel_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+1316,"rf_en_ex_pipe_reg_o", false,-1);
    tracep->declBus(c+126,"alu_fun_ex_pipe_reg_o", false,-1, 5,0);
    tracep->declBus(c+861,"next_seq_pc_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+49,"curr_pc_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+863,"next_brn_pc_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+50,"next_pred_pc_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+51,"sext_imm_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+52,"r_data_p1_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+53,"r_data_p2_ex_pipe_reg_o", false,-1, 31,0);
    tracep->declBit(c+860,"jump_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+862,"brn_pred_ex_pipe_reg_o", false,-1);
    tracep->declBit(c+121,"valid_ex_pipe_reg", false,-1);
    tracep->declBus(c+36,"funct3_ex_pipe_reg", false,-1, 2,0);
    tracep->declBus(c+122,"op_ex_pipe_reg", false,-1, 6,0);
    tracep->declBus(c+37,"rs1_ex_pipe_reg", false,-1, 4,0);
    tracep->declBus(c+38,"rs2_ex_pipe_reg", false,-1, 4,0);
    tracep->declBus(c+1309,"rd_ex_pipe_reg", false,-1, 4,0);
    tracep->declBit(c+39,"is_r_type_ex_pipe_reg", false,-1);
    tracep->declBit(c+123,"is_i_type_ex_pipe_reg", false,-1);
    tracep->declBit(c+40,"is_s_type_ex_pipe_reg", false,-1);
    tracep->declBit(c+859,"is_b_type_ex_pipe_reg", false,-1);
    tracep->declBit(c+41,"is_u_type_ex_pipe_reg", false,-1);
    tracep->declBit(c+42,"is_j_type_ex_pipe_reg", false,-1);
    tracep->declBus(c+43,"pc_sel_ex_pipe_reg", false,-1, 1,0);
    tracep->declBit(c+44,"op1sel_ex_pipe_reg", false,-1);
    tracep->declBus(c+45,"op2sel_ex_pipe_reg", false,-1, 1,0);
    tracep->declBus(c+124,"wb_sel_ex_pipe_reg", false,-1, 1,0);
    tracep->declBit(c+46,"pc4_sel_ex_pipe_reg", false,-1);
    tracep->declBit(c+125,"mem_wr_ex_pipe_reg", false,-1);
    tracep->declBit(c+47,"cpr_en_ex_pipe_reg", false,-1);
    tracep->declBit(c+48,"wa_sel_ex_pipe_reg", false,-1);
    tracep->declBit(c+1316,"rf_en_ex_pipe_reg", false,-1);
    tracep->declBus(c+126,"alu_fun_ex_pipe_reg", false,-1, 5,0);
    tracep->declBus(c+861,"next_seq_pc_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+49,"curr_pc_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+863,"next_brn_pc_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+50,"next_pred_pc_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+51,"sext_imm_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+52,"r_data_p1_ex_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+53,"r_data_p2_ex_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+860,"jump_ex_pipe_reg", false,-1);
    tracep->declBit(c+862,"brn_pred_ex_pipe_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("I_MEM1 ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBus(c+607,"addr_imem_ram_i", false,-1, 31,0);
    tracep->declBus(c+1369,"wr_instr_imem_ram_i", false,-1, 31,0);
    tracep->declBit(c+1370,"wr_en_imem_ram_i", false,-1);
    tracep->declBus(c+1301,"read_instr_imem_ram_o", false,-1, 31,0);
    tracep->declBus(c+1360,"instr_seg_begin", false,-1, 31,0);
    tracep->declBus(c+1361,"instr_seg_size", false,-1, 31,0);
    tracep->declBus(c+1301,"read_instr", false,-1, 31,0);
    tracep->declBus(c+624,"shifted_read_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB_REG ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+58,"valid_wb_pipe_reg_i", false,-1);
    tracep->declBit(c+139,"rf_en_wb_pipe_reg_i", false,-1);
    tracep->declBus(c+59,"wb_sel_wb_pipe_reg_i", false,-1, 1,0);
    tracep->declBus(c+140,"rd_wb_pipe_reg_i", false,-1, 4,0);
    tracep->declBus(c+61,"alu_res_wb_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+1315,"read_data_wb_pipe_reg_i", false,-1, 31,0);
    tracep->declBus(c+62,"next_seq_pc_wb_pipe_reg_i", false,-1, 31,0);
    tracep->declBit(c+55,"instr_retired_wb_pipe_reg_o", false,-1);
    tracep->declBit(c+141,"rf_en_wb_pipe_reg_o", false,-1);
    tracep->declBus(c+65,"wb_sel_wb_pipe_reg_o", false,-1, 1,0);
    tracep->declBus(c+142,"rd_wb_pipe_reg_o", false,-1, 4,0);
    tracep->declBus(c+66,"alu_res_wb_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+67,"read_data_wb_pipe_reg_o", false,-1, 31,0);
    tracep->declBus(c+68,"next_seq_pc_wb_pipe_reg_o", false,-1, 31,0);
    tracep->declBit(c+141,"rf_en_wb_pipe_reg", false,-1);
    tracep->declBus(c+65,"wb_sel_wb_pipe_reg", false,-1, 1,0);
    tracep->declBit(c+55,"instr_retired_wb_pipe_reg", false,-1);
    tracep->declBus(c+142,"rd_wb_pipe_reg", false,-1, 4,0);
    tracep->declBus(c+66,"alu_res_wb_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+67,"read_data_wb_pipe_reg", false,-1, 31,0);
    tracep->declBus(c+68,"next_seq_pc_wb_pipe_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R1 ");
    tracep->declBit(c+1299,"clk", false,-1);
    tracep->declBit(c+1300,"reset", false,-1);
    tracep->declBit(c+141,"w_en_rf_i", false,-1);
    tracep->declBus(c+143,"w_data_rf_i", false,-1, 31,0);
    tracep->declBus(c+142,"w_reg_rf_i", false,-1, 4,0);
    tracep->declBus(c+609,"r_reg_p1_rf_i", false,-1, 4,0);
    tracep->declBus(c+610,"r_reg_p2_rf_i", false,-1, 4,0);
    tracep->declBus(c+1307,"r_data_p1_rf_o", false,-1, 31,0);
    tracep->declBus(c+1308,"r_data_p2_rf_o", false,-1, 31,0);
    tracep->declBus(c+1307,"r_data_p1", false,-1, 31,0);
    tracep->declBus(c+1308,"r_data_p2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SIGN_EXTND_12BIT ");
    tracep->declBus(c+882,"instr_imm_i", false,-1, 11,0);
    tracep->declBus(c+615,"instr_type_i", false,-1, 6,0);
    tracep->declBus(c+884,"sign_extnd_instr_imm_o", false,-1, 31,0);
    tracep->declBus(c+884,"sign_extnd_instr_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SIGN_EXTND_20BIT ");
    tracep->declBus(c+883,"instr_imm_i", false,-1, 19,0);
    tracep->declBus(c+885,"sign_extnd_instr_imm_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard ");
    tracep->declBus(c+37,"rs1_ex_mem_hz_i", false,-1, 4,0);
    tracep->declBus(c+38,"rs2_ex_mem_hz_i", false,-1, 4,0);
    tracep->declBus(c+140,"rd_mem_wb_hz_i", false,-1, 4,0);
    tracep->declBus(c+142,"rd_wb_ret_hz_i", false,-1, 4,0);
    tracep->declBus(c+45,"op2sel_ex_mem_hz_i", false,-1, 1,0);
    tracep->declBit(c+139,"rf_en_mem_wb_hz_i", false,-1);
    tracep->declBit(c+141,"rf_en_wb_ret_hz_i", false,-1);
    tracep->declBit(c+1295,"branch_taken_ex_mem_hz_i", false,-1);
    tracep->declBit(c+889,"jump_iss_ex_hz_i", false,-1);
    tracep->declBit(c+1294,"brn_pred_ex_mem_hz_i", false,-1);
    tracep->declBit(c+1362,"stall_fetch_hz_o", false,-1);
    tracep->declBit(c+1362,"stall_iss_hz_o", false,-1);
    tracep->declBit(c+1292,"flush_ex_hz_o", false,-1);
    tracep->declBit(c+1305,"flush_iss_hz_o", false,-1);
    tracep->declBus(c+1311,"fwd_p1_ex_mem_hz_o", false,-1, 1,0);
    tracep->declBus(c+1312,"fwd_p2_ex_mem_hz_o", false,-1, 1,0);
    tracep->declBit(c+1362,"stall_fetch_hz", false,-1);
    tracep->declBit(c+1362,"stall_iss_hz", false,-1);
    tracep->declBit(c+1292,"flush_ex_hz", false,-1);
    tracep->declBit(c+1305,"flush_iss_hz", false,-1);
    tracep->declBus(c+1311,"fwd_p1_ex_mem_hz", false,-1, 1,0);
    tracep->declBus(c+1312,"fwd_p2_ex_mem_hz", false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD1__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+607,"op1", false,-1, 31,0);
    tracep->declBus(c+1371,"op2", false,-1, 31,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+870,"sum", false,-1, 31,0);
    tracep->declBit(c+611,"carry", false,-1);
    tracep->declBit(c+625,"v_flag", false,-1);
    tracep->declBus(c+626,"cout", false,-1, 6,0);
    tracep->declBus(c+627,"flag_v", false,-1, 7,0);
    tracep->pushNamePrefix("CLA1 ");
    tracep->declBus(c+628,"op1", false,-1, 3,0);
    tracep->declBus(c+1372,"op2", false,-1, 3,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+629,"s", false,-1, 3,0);
    tracep->declBit(c+630,"cout", false,-1);
    tracep->declBit(c+631,"v", false,-1);
    tracep->declBus(c+632,"g", false,-1, 3,0);
    tracep->declBus(c+633,"p", false,-1, 3,0);
    tracep->declBus(c+634,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+632,"g", false,-1, 3,0);
    tracep->declBus(c+633,"p", false,-1, 3,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+634,"cout", false,-1, 3,0);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+1373,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+1373,"and_out_6", false,-1);
    tracep->declBit(c+1362,"or_out_1", false,-1);
    tracep->declBit(c+1373,"or_out_2", false,-1);
    tracep->declBit(c+635,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+636,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+636,"p", false,-1);
    tracep->declBit(c+636,"s", false,-1);
    tracep->declBit(c+636,"or_out_1", false,-1);
    tracep->declBit(c+636,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+636,"and_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_3", false,-1);
    tracep->declBit(c+636,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+1375,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+637,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+637,"p", false,-1);
    tracep->declBit(c+637,"s", false,-1);
    tracep->declBit(c+637,"or_out_1", false,-1);
    tracep->declBit(c+637,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+637,"and_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_3", false,-1);
    tracep->declBit(c+637,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+1375,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+635,"op1", false,-1);
    tracep->declBit(c+1375,"op2", false,-1);
    tracep->declBit(c+1373,"cin", false,-1);
    tracep->declBit(c+635,"g", false,-1);
    tracep->declBit(c+1375,"p", false,-1);
    tracep->declBit(c+638,"s", false,-1);
    tracep->declBit(c+1375,"or_out_1", false,-1);
    tracep->declBit(c+638,"or_out_2", false,-1);
    tracep->declBit(c+635,"and_out_1", false,-1);
    tracep->declBit(c+638,"and_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_3", false,-1);
    tracep->declBit(c+638,"and_out_4", false,-1);
    tracep->declBit(c+638,"not_out_1", false,-1);
    tracep->declBit(c+1375,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+639,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+635,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+639,"p", false,-1);
    tracep->declBit(c+640,"s", false,-1);
    tracep->declBit(c+639,"or_out_1", false,-1);
    tracep->declBit(c+641,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+639,"and_out_2", false,-1);
    tracep->declBit(c+642,"and_out_3", false,-1);
    tracep->declBit(c+640,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+643,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA2 ");
    tracep->declBus(c+644,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+630,"cin", false,-1);
    tracep->declBus(c+645,"s", false,-1, 3,0);
    tracep->declBit(c+646,"cout", false,-1);
    tracep->declBit(c+647,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+644,"p", false,-1, 3,0);
    tracep->declBus(c+648,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+644,"p", false,-1, 3,0);
    tracep->declBit(c+630,"cin", false,-1);
    tracep->declBus(c+648,"cout", false,-1, 3,0);
    tracep->declBit(c+649,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+650,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+651,"and_out_6", false,-1);
    tracep->declBit(c+652,"or_out_1", false,-1);
    tracep->declBit(c+653,"or_out_2", false,-1);
    tracep->declBit(c+654,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+655,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+630,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+655,"p", false,-1);
    tracep->declBit(c+656,"s", false,-1);
    tracep->declBit(c+655,"or_out_1", false,-1);
    tracep->declBit(c+657,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+655,"and_out_2", false,-1);
    tracep->declBit(c+658,"and_out_3", false,-1);
    tracep->declBit(c+656,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+659,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+660,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+652,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+660,"p", false,-1);
    tracep->declBit(c+661,"s", false,-1);
    tracep->declBit(c+660,"or_out_1", false,-1);
    tracep->declBit(c+662,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+660,"and_out_2", false,-1);
    tracep->declBit(c+663,"and_out_3", false,-1);
    tracep->declBit(c+661,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+664,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+665,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+653,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+665,"p", false,-1);
    tracep->declBit(c+666,"s", false,-1);
    tracep->declBit(c+665,"or_out_1", false,-1);
    tracep->declBit(c+667,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+665,"and_out_2", false,-1);
    tracep->declBit(c+668,"and_out_3", false,-1);
    tracep->declBit(c+666,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+669,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+670,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+654,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+670,"p", false,-1);
    tracep->declBit(c+671,"s", false,-1);
    tracep->declBit(c+670,"or_out_1", false,-1);
    tracep->declBit(c+672,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+670,"and_out_2", false,-1);
    tracep->declBit(c+673,"and_out_3", false,-1);
    tracep->declBit(c+671,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+674,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA3 ");
    tracep->declBus(c+675,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+646,"cin", false,-1);
    tracep->declBus(c+676,"s", false,-1, 3,0);
    tracep->declBit(c+677,"cout", false,-1);
    tracep->declBit(c+678,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+675,"p", false,-1, 3,0);
    tracep->declBus(c+679,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+675,"p", false,-1, 3,0);
    tracep->declBit(c+646,"cin", false,-1);
    tracep->declBus(c+679,"cout", false,-1, 3,0);
    tracep->declBit(c+680,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+681,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+682,"and_out_6", false,-1);
    tracep->declBit(c+683,"or_out_1", false,-1);
    tracep->declBit(c+684,"or_out_2", false,-1);
    tracep->declBit(c+685,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+686,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+646,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+686,"p", false,-1);
    tracep->declBit(c+687,"s", false,-1);
    tracep->declBit(c+686,"or_out_1", false,-1);
    tracep->declBit(c+688,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+686,"and_out_2", false,-1);
    tracep->declBit(c+689,"and_out_3", false,-1);
    tracep->declBit(c+687,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+690,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+691,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+683,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+691,"p", false,-1);
    tracep->declBit(c+692,"s", false,-1);
    tracep->declBit(c+691,"or_out_1", false,-1);
    tracep->declBit(c+693,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+691,"and_out_2", false,-1);
    tracep->declBit(c+694,"and_out_3", false,-1);
    tracep->declBit(c+692,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+695,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+696,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+684,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+696,"p", false,-1);
    tracep->declBit(c+697,"s", false,-1);
    tracep->declBit(c+696,"or_out_1", false,-1);
    tracep->declBit(c+698,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+696,"and_out_2", false,-1);
    tracep->declBit(c+699,"and_out_3", false,-1);
    tracep->declBit(c+697,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+700,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+701,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+685,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+701,"p", false,-1);
    tracep->declBit(c+702,"s", false,-1);
    tracep->declBit(c+701,"or_out_1", false,-1);
    tracep->declBit(c+703,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+701,"and_out_2", false,-1);
    tracep->declBit(c+704,"and_out_3", false,-1);
    tracep->declBit(c+702,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+705,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA4 ");
    tracep->declBus(c+706,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+677,"cin", false,-1);
    tracep->declBus(c+707,"s", false,-1, 3,0);
    tracep->declBit(c+708,"cout", false,-1);
    tracep->declBit(c+709,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+706,"p", false,-1, 3,0);
    tracep->declBus(c+710,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+706,"p", false,-1, 3,0);
    tracep->declBit(c+677,"cin", false,-1);
    tracep->declBus(c+710,"cout", false,-1, 3,0);
    tracep->declBit(c+711,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+712,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+713,"and_out_6", false,-1);
    tracep->declBit(c+714,"or_out_1", false,-1);
    tracep->declBit(c+715,"or_out_2", false,-1);
    tracep->declBit(c+716,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+717,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+677,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+717,"p", false,-1);
    tracep->declBit(c+718,"s", false,-1);
    tracep->declBit(c+717,"or_out_1", false,-1);
    tracep->declBit(c+719,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+717,"and_out_2", false,-1);
    tracep->declBit(c+720,"and_out_3", false,-1);
    tracep->declBit(c+718,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+721,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+722,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+714,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+722,"p", false,-1);
    tracep->declBit(c+723,"s", false,-1);
    tracep->declBit(c+722,"or_out_1", false,-1);
    tracep->declBit(c+724,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+722,"and_out_2", false,-1);
    tracep->declBit(c+725,"and_out_3", false,-1);
    tracep->declBit(c+723,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+726,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+727,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+715,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+727,"p", false,-1);
    tracep->declBit(c+728,"s", false,-1);
    tracep->declBit(c+727,"or_out_1", false,-1);
    tracep->declBit(c+729,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+727,"and_out_2", false,-1);
    tracep->declBit(c+730,"and_out_3", false,-1);
    tracep->declBit(c+728,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+731,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+732,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+716,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+732,"p", false,-1);
    tracep->declBit(c+733,"s", false,-1);
    tracep->declBit(c+732,"or_out_1", false,-1);
    tracep->declBit(c+734,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+732,"and_out_2", false,-1);
    tracep->declBit(c+735,"and_out_3", false,-1);
    tracep->declBit(c+733,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+736,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA5 ");
    tracep->declBus(c+737,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+708,"cin", false,-1);
    tracep->declBus(c+738,"s", false,-1, 3,0);
    tracep->declBit(c+739,"cout", false,-1);
    tracep->declBit(c+740,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+737,"p", false,-1, 3,0);
    tracep->declBus(c+741,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+737,"p", false,-1, 3,0);
    tracep->declBit(c+708,"cin", false,-1);
    tracep->declBus(c+741,"cout", false,-1, 3,0);
    tracep->declBit(c+742,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+743,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+744,"and_out_6", false,-1);
    tracep->declBit(c+745,"or_out_1", false,-1);
    tracep->declBit(c+746,"or_out_2", false,-1);
    tracep->declBit(c+747,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+748,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+708,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+748,"p", false,-1);
    tracep->declBit(c+749,"s", false,-1);
    tracep->declBit(c+748,"or_out_1", false,-1);
    tracep->declBit(c+750,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+748,"and_out_2", false,-1);
    tracep->declBit(c+751,"and_out_3", false,-1);
    tracep->declBit(c+749,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+752,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+753,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+745,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+753,"p", false,-1);
    tracep->declBit(c+754,"s", false,-1);
    tracep->declBit(c+753,"or_out_1", false,-1);
    tracep->declBit(c+755,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+753,"and_out_2", false,-1);
    tracep->declBit(c+756,"and_out_3", false,-1);
    tracep->declBit(c+754,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+757,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+758,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+746,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+758,"p", false,-1);
    tracep->declBit(c+759,"s", false,-1);
    tracep->declBit(c+758,"or_out_1", false,-1);
    tracep->declBit(c+760,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+758,"and_out_2", false,-1);
    tracep->declBit(c+761,"and_out_3", false,-1);
    tracep->declBit(c+759,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+762,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+763,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+747,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+763,"p", false,-1);
    tracep->declBit(c+764,"s", false,-1);
    tracep->declBit(c+763,"or_out_1", false,-1);
    tracep->declBit(c+765,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+763,"and_out_2", false,-1);
    tracep->declBit(c+766,"and_out_3", false,-1);
    tracep->declBit(c+764,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+767,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA6 ");
    tracep->declBus(c+768,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+739,"cin", false,-1);
    tracep->declBus(c+769,"s", false,-1, 3,0);
    tracep->declBit(c+770,"cout", false,-1);
    tracep->declBit(c+771,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+768,"p", false,-1, 3,0);
    tracep->declBus(c+772,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+768,"p", false,-1, 3,0);
    tracep->declBit(c+739,"cin", false,-1);
    tracep->declBus(c+772,"cout", false,-1, 3,0);
    tracep->declBit(c+773,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+774,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+775,"and_out_6", false,-1);
    tracep->declBit(c+776,"or_out_1", false,-1);
    tracep->declBit(c+777,"or_out_2", false,-1);
    tracep->declBit(c+778,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+779,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+739,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+779,"p", false,-1);
    tracep->declBit(c+780,"s", false,-1);
    tracep->declBit(c+779,"or_out_1", false,-1);
    tracep->declBit(c+781,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+779,"and_out_2", false,-1);
    tracep->declBit(c+782,"and_out_3", false,-1);
    tracep->declBit(c+780,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+783,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+784,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+776,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+784,"p", false,-1);
    tracep->declBit(c+785,"s", false,-1);
    tracep->declBit(c+784,"or_out_1", false,-1);
    tracep->declBit(c+786,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+784,"and_out_2", false,-1);
    tracep->declBit(c+787,"and_out_3", false,-1);
    tracep->declBit(c+785,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+788,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+789,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+777,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+789,"p", false,-1);
    tracep->declBit(c+790,"s", false,-1);
    tracep->declBit(c+789,"or_out_1", false,-1);
    tracep->declBit(c+791,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+789,"and_out_2", false,-1);
    tracep->declBit(c+792,"and_out_3", false,-1);
    tracep->declBit(c+790,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+793,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+794,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+778,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+794,"p", false,-1);
    tracep->declBit(c+795,"s", false,-1);
    tracep->declBit(c+794,"or_out_1", false,-1);
    tracep->declBit(c+796,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+794,"and_out_2", false,-1);
    tracep->declBit(c+797,"and_out_3", false,-1);
    tracep->declBit(c+795,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+798,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA7 ");
    tracep->declBus(c+799,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+770,"cin", false,-1);
    tracep->declBus(c+800,"s", false,-1, 3,0);
    tracep->declBit(c+801,"cout", false,-1);
    tracep->declBit(c+802,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+799,"p", false,-1, 3,0);
    tracep->declBus(c+803,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+799,"p", false,-1, 3,0);
    tracep->declBit(c+770,"cin", false,-1);
    tracep->declBus(c+803,"cout", false,-1, 3,0);
    tracep->declBit(c+804,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+805,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+806,"and_out_6", false,-1);
    tracep->declBit(c+807,"or_out_1", false,-1);
    tracep->declBit(c+808,"or_out_2", false,-1);
    tracep->declBit(c+809,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+810,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+770,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+810,"p", false,-1);
    tracep->declBit(c+811,"s", false,-1);
    tracep->declBit(c+810,"or_out_1", false,-1);
    tracep->declBit(c+812,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+810,"and_out_2", false,-1);
    tracep->declBit(c+813,"and_out_3", false,-1);
    tracep->declBit(c+811,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+814,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+815,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+807,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+815,"p", false,-1);
    tracep->declBit(c+816,"s", false,-1);
    tracep->declBit(c+815,"or_out_1", false,-1);
    tracep->declBit(c+817,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+815,"and_out_2", false,-1);
    tracep->declBit(c+818,"and_out_3", false,-1);
    tracep->declBit(c+816,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+819,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+820,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+808,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+820,"p", false,-1);
    tracep->declBit(c+821,"s", false,-1);
    tracep->declBit(c+820,"or_out_1", false,-1);
    tracep->declBit(c+822,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+820,"and_out_2", false,-1);
    tracep->declBit(c+823,"and_out_3", false,-1);
    tracep->declBit(c+821,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+824,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+825,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+809,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+825,"p", false,-1);
    tracep->declBit(c+826,"s", false,-1);
    tracep->declBit(c+825,"or_out_1", false,-1);
    tracep->declBit(c+827,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+825,"and_out_2", false,-1);
    tracep->declBit(c+828,"and_out_3", false,-1);
    tracep->declBit(c+826,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+829,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA8 ");
    tracep->declBus(c+830,"op1", false,-1, 3,0);
    tracep->declBus(c+1376,"op2", false,-1, 3,0);
    tracep->declBit(c+801,"cin", false,-1);
    tracep->declBus(c+831,"s", false,-1, 3,0);
    tracep->declBit(c+611,"cout", false,-1);
    tracep->declBit(c+625,"v", false,-1);
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+830,"p", false,-1, 3,0);
    tracep->declBus(c+832,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1376,"g", false,-1, 3,0);
    tracep->declBus(c+830,"p", false,-1, 3,0);
    tracep->declBit(c+801,"cin", false,-1);
    tracep->declBus(c+832,"cout", false,-1, 3,0);
    tracep->declBit(c+833,"and_out_1", false,-1);
    tracep->declBit(c+1373,"and_out_2", false,-1);
    tracep->declBit(c+834,"and_out_3", false,-1);
    tracep->declBit(c+1373,"and_out_4", false,-1);
    tracep->declBit(c+1373,"and_out_5", false,-1);
    tracep->declBit(c+835,"and_out_6", false,-1);
    tracep->declBit(c+836,"or_out_1", false,-1);
    tracep->declBit(c+837,"or_out_2", false,-1);
    tracep->declBit(c+838,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+839,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+801,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+839,"p", false,-1);
    tracep->declBit(c+840,"s", false,-1);
    tracep->declBit(c+839,"or_out_1", false,-1);
    tracep->declBit(c+841,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+839,"and_out_2", false,-1);
    tracep->declBit(c+842,"and_out_3", false,-1);
    tracep->declBit(c+840,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+843,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+844,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+836,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+844,"p", false,-1);
    tracep->declBit(c+845,"s", false,-1);
    tracep->declBit(c+844,"or_out_1", false,-1);
    tracep->declBit(c+846,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+844,"and_out_2", false,-1);
    tracep->declBit(c+847,"and_out_3", false,-1);
    tracep->declBit(c+845,"and_out_4", false,-1);
    tracep->declBit(c+1374,"not_out_1", false,-1);
    tracep->declBit(c+848,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+849,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+837,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+849,"p", false,-1);
    tracep->declBit(c+850,"s", false,-1);
    tracep->declBit(c+849,"or_out_1", false,-1);
    tracep->declBit(c+851,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+849,"and_out_2", false,-1);
    tracep->declBit(c+852,"and_out_3", false,-1);
    tracep->declBit(c+850,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+853,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+854,"op1", false,-1);
    tracep->declBit(c+1362,"op2", false,-1);
    tracep->declBit(c+838,"cin", false,-1);
    tracep->declBit(c+1362,"g", false,-1);
    tracep->declBit(c+854,"p", false,-1);
    tracep->declBit(c+855,"s", false,-1);
    tracep->declBit(c+854,"or_out_1", false,-1);
    tracep->declBit(c+856,"or_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+854,"and_out_2", false,-1);
    tracep->declBit(c+857,"and_out_3", false,-1);
    tracep->declBit(c+855,"and_out_4", false,-1);
    tracep->declBit(c+1375,"not_out_1", false,-1);
    tracep->declBit(c+858,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD2__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+56,"op1", false,-1, 31,0);
    tracep->declBus(c+886,"op2", false,-1, 31,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+887,"sum", false,-1, 31,0);
    tracep->declBit(c+109,"carry", false,-1);
    tracep->declBit(c+110,"v_flag", false,-1);
    tracep->declBus(c+892,"cout", false,-1, 6,0);
    tracep->declBus(c+111,"flag_v", false,-1, 7,0);
    tracep->pushNamePrefix("CLA1 ");
    tracep->declBus(c+69,"op1", false,-1, 3,0);
    tracep->declBus(c+893,"op2", false,-1, 3,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+112,"s", false,-1, 3,0);
    tracep->declBit(c+894,"cout", false,-1);
    tracep->declBit(c+895,"v", false,-1);
    tracep->declBus(c+896,"g", false,-1, 3,0);
    tracep->declBus(c+113,"p", false,-1, 3,0);
    tracep->declBus(c+897,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+896,"g", false,-1, 3,0);
    tracep->declBus(c+113,"p", false,-1, 3,0);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBus(c+897,"cout", false,-1, 3,0);
    tracep->declBit(c+1362,"and_out_1", false,-1);
    tracep->declBit(c+898,"and_out_2", false,-1);
    tracep->declBit(c+1373,"and_out_3", false,-1);
    tracep->declBit(c+899,"and_out_4", false,-1);
    tracep->declBit(c+900,"and_out_5", false,-1);
    tracep->declBit(c+1373,"and_out_6", false,-1);
    tracep->declBit(c+901,"or_out_1", false,-1);
    tracep->declBit(c+902,"or_out_2", false,-1);
    tracep->declBit(c+903,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+70,"op1", false,-1);
    tracep->declBit(c+904,"op2", false,-1);
    tracep->declBit(c+1362,"cin", false,-1);
    tracep->declBit(c+901,"g", false,-1);
    tracep->declBit(c+114,"p", false,-1);
    tracep->declBit(c+115,"s", false,-1);
    tracep->declBit(c+114,"or_out_1", false,-1);
    tracep->declBit(c+115,"or_out_2", false,-1);
    tracep->declBit(c+901,"and_out_1", false,-1);
    tracep->declBit(c+115,"and_out_2", false,-1);
    tracep->declBit(c+1362,"and_out_3", false,-1);
    tracep->declBit(c+115,"and_out_4", false,-1);
    tracep->declBit(c+905,"not_out_1", false,-1);
    tracep->declBit(c+1375,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+71,"op1", false,-1);
    tracep->declBit(c+906,"op2", false,-1);
    tracep->declBit(c+901,"cin", false,-1);
    tracep->declBit(c+907,"g", false,-1);
    tracep->declBit(c+908,"p", false,-1);
    tracep->declBit(c+909,"s", false,-1);
    tracep->declBit(c+908,"or_out_1", false,-1);
    tracep->declBit(c+910,"or_out_2", false,-1);
    tracep->declBit(c+907,"and_out_1", false,-1);
    tracep->declBit(c+911,"and_out_2", false,-1);
    tracep->declBit(c+912,"and_out_3", false,-1);
    tracep->declBit(c+909,"and_out_4", false,-1);
    tracep->declBit(c+913,"not_out_1", false,-1);
    tracep->declBit(c+914,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+72,"op1", false,-1);
    tracep->declBit(c+915,"op2", false,-1);
    tracep->declBit(c+902,"cin", false,-1);
    tracep->declBit(c+916,"g", false,-1);
    tracep->declBit(c+917,"p", false,-1);
    tracep->declBit(c+918,"s", false,-1);
    tracep->declBit(c+917,"or_out_1", false,-1);
    tracep->declBit(c+919,"or_out_2", false,-1);
    tracep->declBit(c+916,"and_out_1", false,-1);
    tracep->declBit(c+920,"and_out_2", false,-1);
    tracep->declBit(c+921,"and_out_3", false,-1);
    tracep->declBit(c+918,"and_out_4", false,-1);
    tracep->declBit(c+922,"not_out_1", false,-1);
    tracep->declBit(c+923,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+73,"op1", false,-1);
    tracep->declBit(c+924,"op2", false,-1);
    tracep->declBit(c+903,"cin", false,-1);
    tracep->declBit(c+925,"g", false,-1);
    tracep->declBit(c+926,"p", false,-1);
    tracep->declBit(c+927,"s", false,-1);
    tracep->declBit(c+926,"or_out_1", false,-1);
    tracep->declBit(c+928,"or_out_2", false,-1);
    tracep->declBit(c+925,"and_out_1", false,-1);
    tracep->declBit(c+929,"and_out_2", false,-1);
    tracep->declBit(c+930,"and_out_3", false,-1);
    tracep->declBit(c+927,"and_out_4", false,-1);
    tracep->declBit(c+931,"not_out_1", false,-1);
    tracep->declBit(c+932,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA2 ");
    tracep->declBus(c+74,"op1", false,-1, 3,0);
    tracep->declBus(c+933,"op2", false,-1, 3,0);
    tracep->declBit(c+894,"cin", false,-1);
    tracep->declBus(c+934,"s", false,-1, 3,0);
    tracep->declBit(c+935,"cout", false,-1);
    tracep->declBit(c+936,"v", false,-1);
    tracep->declBus(c+937,"g", false,-1, 3,0);
    tracep->declBus(c+938,"p", false,-1, 3,0);
    tracep->declBus(c+939,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+937,"g", false,-1, 3,0);
    tracep->declBus(c+938,"p", false,-1, 3,0);
    tracep->declBit(c+894,"cin", false,-1);
    tracep->declBus(c+939,"cout", false,-1, 3,0);
    tracep->declBit(c+940,"and_out_1", false,-1);
    tracep->declBit(c+941,"and_out_2", false,-1);
    tracep->declBit(c+942,"and_out_3", false,-1);
    tracep->declBit(c+943,"and_out_4", false,-1);
    tracep->declBit(c+944,"and_out_5", false,-1);
    tracep->declBit(c+945,"and_out_6", false,-1);
    tracep->declBit(c+946,"or_out_1", false,-1);
    tracep->declBit(c+947,"or_out_2", false,-1);
    tracep->declBit(c+948,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+75,"op1", false,-1);
    tracep->declBit(c+949,"op2", false,-1);
    tracep->declBit(c+894,"cin", false,-1);
    tracep->declBit(c+950,"g", false,-1);
    tracep->declBit(c+951,"p", false,-1);
    tracep->declBit(c+952,"s", false,-1);
    tracep->declBit(c+951,"or_out_1", false,-1);
    tracep->declBit(c+953,"or_out_2", false,-1);
    tracep->declBit(c+950,"and_out_1", false,-1);
    tracep->declBit(c+954,"and_out_2", false,-1);
    tracep->declBit(c+955,"and_out_3", false,-1);
    tracep->declBit(c+952,"and_out_4", false,-1);
    tracep->declBit(c+956,"not_out_1", false,-1);
    tracep->declBit(c+957,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+76,"op1", false,-1);
    tracep->declBit(c+958,"op2", false,-1);
    tracep->declBit(c+946,"cin", false,-1);
    tracep->declBit(c+959,"g", false,-1);
    tracep->declBit(c+960,"p", false,-1);
    tracep->declBit(c+961,"s", false,-1);
    tracep->declBit(c+960,"or_out_1", false,-1);
    tracep->declBit(c+962,"or_out_2", false,-1);
    tracep->declBit(c+959,"and_out_1", false,-1);
    tracep->declBit(c+963,"and_out_2", false,-1);
    tracep->declBit(c+964,"and_out_3", false,-1);
    tracep->declBit(c+961,"and_out_4", false,-1);
    tracep->declBit(c+965,"not_out_1", false,-1);
    tracep->declBit(c+966,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+77,"op1", false,-1);
    tracep->declBit(c+967,"op2", false,-1);
    tracep->declBit(c+947,"cin", false,-1);
    tracep->declBit(c+968,"g", false,-1);
    tracep->declBit(c+969,"p", false,-1);
    tracep->declBit(c+970,"s", false,-1);
    tracep->declBit(c+969,"or_out_1", false,-1);
    tracep->declBit(c+971,"or_out_2", false,-1);
    tracep->declBit(c+968,"and_out_1", false,-1);
    tracep->declBit(c+972,"and_out_2", false,-1);
    tracep->declBit(c+973,"and_out_3", false,-1);
    tracep->declBit(c+970,"and_out_4", false,-1);
    tracep->declBit(c+974,"not_out_1", false,-1);
    tracep->declBit(c+975,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+78,"op1", false,-1);
    tracep->declBit(c+976,"op2", false,-1);
    tracep->declBit(c+948,"cin", false,-1);
    tracep->declBit(c+977,"g", false,-1);
    tracep->declBit(c+978,"p", false,-1);
    tracep->declBit(c+979,"s", false,-1);
    tracep->declBit(c+978,"or_out_1", false,-1);
    tracep->declBit(c+980,"or_out_2", false,-1);
    tracep->declBit(c+977,"and_out_1", false,-1);
    tracep->declBit(c+981,"and_out_2", false,-1);
    tracep->declBit(c+982,"and_out_3", false,-1);
    tracep->declBit(c+979,"and_out_4", false,-1);
    tracep->declBit(c+983,"not_out_1", false,-1);
    tracep->declBit(c+984,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA3 ");
    tracep->declBus(c+79,"op1", false,-1, 3,0);
    tracep->declBus(c+985,"op2", false,-1, 3,0);
    tracep->declBit(c+935,"cin", false,-1);
    tracep->declBus(c+986,"s", false,-1, 3,0);
    tracep->declBit(c+987,"cout", false,-1);
    tracep->declBit(c+988,"v", false,-1);
    tracep->declBus(c+989,"g", false,-1, 3,0);
    tracep->declBus(c+990,"p", false,-1, 3,0);
    tracep->declBus(c+991,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+989,"g", false,-1, 3,0);
    tracep->declBus(c+990,"p", false,-1, 3,0);
    tracep->declBit(c+935,"cin", false,-1);
    tracep->declBus(c+991,"cout", false,-1, 3,0);
    tracep->declBit(c+992,"and_out_1", false,-1);
    tracep->declBit(c+993,"and_out_2", false,-1);
    tracep->declBit(c+994,"and_out_3", false,-1);
    tracep->declBit(c+995,"and_out_4", false,-1);
    tracep->declBit(c+996,"and_out_5", false,-1);
    tracep->declBit(c+997,"and_out_6", false,-1);
    tracep->declBit(c+998,"or_out_1", false,-1);
    tracep->declBit(c+999,"or_out_2", false,-1);
    tracep->declBit(c+1000,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+80,"op1", false,-1);
    tracep->declBit(c+1001,"op2", false,-1);
    tracep->declBit(c+935,"cin", false,-1);
    tracep->declBit(c+1002,"g", false,-1);
    tracep->declBit(c+1003,"p", false,-1);
    tracep->declBit(c+1004,"s", false,-1);
    tracep->declBit(c+1003,"or_out_1", false,-1);
    tracep->declBit(c+1005,"or_out_2", false,-1);
    tracep->declBit(c+1002,"and_out_1", false,-1);
    tracep->declBit(c+1006,"and_out_2", false,-1);
    tracep->declBit(c+1007,"and_out_3", false,-1);
    tracep->declBit(c+1004,"and_out_4", false,-1);
    tracep->declBit(c+1008,"not_out_1", false,-1);
    tracep->declBit(c+1009,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+81,"op1", false,-1);
    tracep->declBit(c+1010,"op2", false,-1);
    tracep->declBit(c+998,"cin", false,-1);
    tracep->declBit(c+1011,"g", false,-1);
    tracep->declBit(c+1012,"p", false,-1);
    tracep->declBit(c+1013,"s", false,-1);
    tracep->declBit(c+1012,"or_out_1", false,-1);
    tracep->declBit(c+1014,"or_out_2", false,-1);
    tracep->declBit(c+1011,"and_out_1", false,-1);
    tracep->declBit(c+1015,"and_out_2", false,-1);
    tracep->declBit(c+1016,"and_out_3", false,-1);
    tracep->declBit(c+1013,"and_out_4", false,-1);
    tracep->declBit(c+1017,"not_out_1", false,-1);
    tracep->declBit(c+1018,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+82,"op1", false,-1);
    tracep->declBit(c+1019,"op2", false,-1);
    tracep->declBit(c+999,"cin", false,-1);
    tracep->declBit(c+1020,"g", false,-1);
    tracep->declBit(c+1021,"p", false,-1);
    tracep->declBit(c+1022,"s", false,-1);
    tracep->declBit(c+1021,"or_out_1", false,-1);
    tracep->declBit(c+1023,"or_out_2", false,-1);
    tracep->declBit(c+1020,"and_out_1", false,-1);
    tracep->declBit(c+1024,"and_out_2", false,-1);
    tracep->declBit(c+1025,"and_out_3", false,-1);
    tracep->declBit(c+1022,"and_out_4", false,-1);
    tracep->declBit(c+1026,"not_out_1", false,-1);
    tracep->declBit(c+1027,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+83,"op1", false,-1);
    tracep->declBit(c+1028,"op2", false,-1);
    tracep->declBit(c+1000,"cin", false,-1);
    tracep->declBit(c+1029,"g", false,-1);
    tracep->declBit(c+1030,"p", false,-1);
    tracep->declBit(c+1031,"s", false,-1);
    tracep->declBit(c+1030,"or_out_1", false,-1);
    tracep->declBit(c+1032,"or_out_2", false,-1);
    tracep->declBit(c+1029,"and_out_1", false,-1);
    tracep->declBit(c+1033,"and_out_2", false,-1);
    tracep->declBit(c+1034,"and_out_3", false,-1);
    tracep->declBit(c+1031,"and_out_4", false,-1);
    tracep->declBit(c+1035,"not_out_1", false,-1);
    tracep->declBit(c+1036,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA4 ");
    tracep->declBus(c+84,"op1", false,-1, 3,0);
    tracep->declBus(c+1037,"op2", false,-1, 3,0);
    tracep->declBit(c+987,"cin", false,-1);
    tracep->declBus(c+1038,"s", false,-1, 3,0);
    tracep->declBit(c+1039,"cout", false,-1);
    tracep->declBit(c+1040,"v", false,-1);
    tracep->declBus(c+1041,"g", false,-1, 3,0);
    tracep->declBus(c+1042,"p", false,-1, 3,0);
    tracep->declBus(c+1043,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1041,"g", false,-1, 3,0);
    tracep->declBus(c+1042,"p", false,-1, 3,0);
    tracep->declBit(c+987,"cin", false,-1);
    tracep->declBus(c+1043,"cout", false,-1, 3,0);
    tracep->declBit(c+1044,"and_out_1", false,-1);
    tracep->declBit(c+1045,"and_out_2", false,-1);
    tracep->declBit(c+1046,"and_out_3", false,-1);
    tracep->declBit(c+1047,"and_out_4", false,-1);
    tracep->declBit(c+1048,"and_out_5", false,-1);
    tracep->declBit(c+1049,"and_out_6", false,-1);
    tracep->declBit(c+1050,"or_out_1", false,-1);
    tracep->declBit(c+1051,"or_out_2", false,-1);
    tracep->declBit(c+1052,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+85,"op1", false,-1);
    tracep->declBit(c+1053,"op2", false,-1);
    tracep->declBit(c+987,"cin", false,-1);
    tracep->declBit(c+1054,"g", false,-1);
    tracep->declBit(c+1055,"p", false,-1);
    tracep->declBit(c+1056,"s", false,-1);
    tracep->declBit(c+1055,"or_out_1", false,-1);
    tracep->declBit(c+1057,"or_out_2", false,-1);
    tracep->declBit(c+1054,"and_out_1", false,-1);
    tracep->declBit(c+1058,"and_out_2", false,-1);
    tracep->declBit(c+1059,"and_out_3", false,-1);
    tracep->declBit(c+1056,"and_out_4", false,-1);
    tracep->declBit(c+1060,"not_out_1", false,-1);
    tracep->declBit(c+1061,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+86,"op1", false,-1);
    tracep->declBit(c+1062,"op2", false,-1);
    tracep->declBit(c+1050,"cin", false,-1);
    tracep->declBit(c+1063,"g", false,-1);
    tracep->declBit(c+1064,"p", false,-1);
    tracep->declBit(c+1065,"s", false,-1);
    tracep->declBit(c+1064,"or_out_1", false,-1);
    tracep->declBit(c+1066,"or_out_2", false,-1);
    tracep->declBit(c+1063,"and_out_1", false,-1);
    tracep->declBit(c+1067,"and_out_2", false,-1);
    tracep->declBit(c+1068,"and_out_3", false,-1);
    tracep->declBit(c+1065,"and_out_4", false,-1);
    tracep->declBit(c+1069,"not_out_1", false,-1);
    tracep->declBit(c+1070,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+87,"op1", false,-1);
    tracep->declBit(c+1071,"op2", false,-1);
    tracep->declBit(c+1051,"cin", false,-1);
    tracep->declBit(c+1072,"g", false,-1);
    tracep->declBit(c+1073,"p", false,-1);
    tracep->declBit(c+1074,"s", false,-1);
    tracep->declBit(c+1073,"or_out_1", false,-1);
    tracep->declBit(c+1075,"or_out_2", false,-1);
    tracep->declBit(c+1072,"and_out_1", false,-1);
    tracep->declBit(c+1076,"and_out_2", false,-1);
    tracep->declBit(c+1077,"and_out_3", false,-1);
    tracep->declBit(c+1074,"and_out_4", false,-1);
    tracep->declBit(c+1078,"not_out_1", false,-1);
    tracep->declBit(c+1079,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+88,"op1", false,-1);
    tracep->declBit(c+1080,"op2", false,-1);
    tracep->declBit(c+1052,"cin", false,-1);
    tracep->declBit(c+1081,"g", false,-1);
    tracep->declBit(c+1082,"p", false,-1);
    tracep->declBit(c+1083,"s", false,-1);
    tracep->declBit(c+1082,"or_out_1", false,-1);
    tracep->declBit(c+1084,"or_out_2", false,-1);
    tracep->declBit(c+1081,"and_out_1", false,-1);
    tracep->declBit(c+1085,"and_out_2", false,-1);
    tracep->declBit(c+1086,"and_out_3", false,-1);
    tracep->declBit(c+1083,"and_out_4", false,-1);
    tracep->declBit(c+1087,"not_out_1", false,-1);
    tracep->declBit(c+1088,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA5 ");
    tracep->declBus(c+89,"op1", false,-1, 3,0);
    tracep->declBus(c+1089,"op2", false,-1, 3,0);
    tracep->declBit(c+1039,"cin", false,-1);
    tracep->declBus(c+1090,"s", false,-1, 3,0);
    tracep->declBit(c+1091,"cout", false,-1);
    tracep->declBit(c+1092,"v", false,-1);
    tracep->declBus(c+1093,"g", false,-1, 3,0);
    tracep->declBus(c+1094,"p", false,-1, 3,0);
    tracep->declBus(c+1095,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1093,"g", false,-1, 3,0);
    tracep->declBus(c+1094,"p", false,-1, 3,0);
    tracep->declBit(c+1039,"cin", false,-1);
    tracep->declBus(c+1095,"cout", false,-1, 3,0);
    tracep->declBit(c+1096,"and_out_1", false,-1);
    tracep->declBit(c+1097,"and_out_2", false,-1);
    tracep->declBit(c+1098,"and_out_3", false,-1);
    tracep->declBit(c+1099,"and_out_4", false,-1);
    tracep->declBit(c+1100,"and_out_5", false,-1);
    tracep->declBit(c+1101,"and_out_6", false,-1);
    tracep->declBit(c+1102,"or_out_1", false,-1);
    tracep->declBit(c+1103,"or_out_2", false,-1);
    tracep->declBit(c+1104,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+90,"op1", false,-1);
    tracep->declBit(c+1105,"op2", false,-1);
    tracep->declBit(c+1039,"cin", false,-1);
    tracep->declBit(c+1106,"g", false,-1);
    tracep->declBit(c+1107,"p", false,-1);
    tracep->declBit(c+1108,"s", false,-1);
    tracep->declBit(c+1107,"or_out_1", false,-1);
    tracep->declBit(c+1109,"or_out_2", false,-1);
    tracep->declBit(c+1106,"and_out_1", false,-1);
    tracep->declBit(c+1110,"and_out_2", false,-1);
    tracep->declBit(c+1111,"and_out_3", false,-1);
    tracep->declBit(c+1108,"and_out_4", false,-1);
    tracep->declBit(c+1112,"not_out_1", false,-1);
    tracep->declBit(c+1113,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+91,"op1", false,-1);
    tracep->declBit(c+1114,"op2", false,-1);
    tracep->declBit(c+1102,"cin", false,-1);
    tracep->declBit(c+1115,"g", false,-1);
    tracep->declBit(c+1116,"p", false,-1);
    tracep->declBit(c+1117,"s", false,-1);
    tracep->declBit(c+1116,"or_out_1", false,-1);
    tracep->declBit(c+1118,"or_out_2", false,-1);
    tracep->declBit(c+1115,"and_out_1", false,-1);
    tracep->declBit(c+1119,"and_out_2", false,-1);
    tracep->declBit(c+1120,"and_out_3", false,-1);
    tracep->declBit(c+1117,"and_out_4", false,-1);
    tracep->declBit(c+1121,"not_out_1", false,-1);
    tracep->declBit(c+1122,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+92,"op1", false,-1);
    tracep->declBit(c+1123,"op2", false,-1);
    tracep->declBit(c+1103,"cin", false,-1);
    tracep->declBit(c+1124,"g", false,-1);
    tracep->declBit(c+1125,"p", false,-1);
    tracep->declBit(c+1126,"s", false,-1);
    tracep->declBit(c+1125,"or_out_1", false,-1);
    tracep->declBit(c+1127,"or_out_2", false,-1);
    tracep->declBit(c+1124,"and_out_1", false,-1);
    tracep->declBit(c+1128,"and_out_2", false,-1);
    tracep->declBit(c+1129,"and_out_3", false,-1);
    tracep->declBit(c+1126,"and_out_4", false,-1);
    tracep->declBit(c+1130,"not_out_1", false,-1);
    tracep->declBit(c+1131,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+93,"op1", false,-1);
    tracep->declBit(c+1132,"op2", false,-1);
    tracep->declBit(c+1104,"cin", false,-1);
    tracep->declBit(c+1133,"g", false,-1);
    tracep->declBit(c+1134,"p", false,-1);
    tracep->declBit(c+1135,"s", false,-1);
    tracep->declBit(c+1134,"or_out_1", false,-1);
    tracep->declBit(c+1136,"or_out_2", false,-1);
    tracep->declBit(c+1133,"and_out_1", false,-1);
    tracep->declBit(c+1137,"and_out_2", false,-1);
    tracep->declBit(c+1138,"and_out_3", false,-1);
    tracep->declBit(c+1135,"and_out_4", false,-1);
    tracep->declBit(c+1139,"not_out_1", false,-1);
    tracep->declBit(c+1140,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA6 ");
    tracep->declBus(c+94,"op1", false,-1, 3,0);
    tracep->declBus(c+1141,"op2", false,-1, 3,0);
    tracep->declBit(c+1091,"cin", false,-1);
    tracep->declBus(c+1142,"s", false,-1, 3,0);
    tracep->declBit(c+1143,"cout", false,-1);
    tracep->declBit(c+1144,"v", false,-1);
    tracep->declBus(c+1145,"g", false,-1, 3,0);
    tracep->declBus(c+1146,"p", false,-1, 3,0);
    tracep->declBus(c+1147,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1145,"g", false,-1, 3,0);
    tracep->declBus(c+1146,"p", false,-1, 3,0);
    tracep->declBit(c+1091,"cin", false,-1);
    tracep->declBus(c+1147,"cout", false,-1, 3,0);
    tracep->declBit(c+1148,"and_out_1", false,-1);
    tracep->declBit(c+1149,"and_out_2", false,-1);
    tracep->declBit(c+1150,"and_out_3", false,-1);
    tracep->declBit(c+1151,"and_out_4", false,-1);
    tracep->declBit(c+1152,"and_out_5", false,-1);
    tracep->declBit(c+1153,"and_out_6", false,-1);
    tracep->declBit(c+1154,"or_out_1", false,-1);
    tracep->declBit(c+1155,"or_out_2", false,-1);
    tracep->declBit(c+1156,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+95,"op1", false,-1);
    tracep->declBit(c+1157,"op2", false,-1);
    tracep->declBit(c+1091,"cin", false,-1);
    tracep->declBit(c+1158,"g", false,-1);
    tracep->declBit(c+1159,"p", false,-1);
    tracep->declBit(c+1160,"s", false,-1);
    tracep->declBit(c+1159,"or_out_1", false,-1);
    tracep->declBit(c+1161,"or_out_2", false,-1);
    tracep->declBit(c+1158,"and_out_1", false,-1);
    tracep->declBit(c+1162,"and_out_2", false,-1);
    tracep->declBit(c+1163,"and_out_3", false,-1);
    tracep->declBit(c+1160,"and_out_4", false,-1);
    tracep->declBit(c+1164,"not_out_1", false,-1);
    tracep->declBit(c+1165,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+96,"op1", false,-1);
    tracep->declBit(c+1166,"op2", false,-1);
    tracep->declBit(c+1154,"cin", false,-1);
    tracep->declBit(c+1167,"g", false,-1);
    tracep->declBit(c+1168,"p", false,-1);
    tracep->declBit(c+1169,"s", false,-1);
    tracep->declBit(c+1168,"or_out_1", false,-1);
    tracep->declBit(c+1170,"or_out_2", false,-1);
    tracep->declBit(c+1167,"and_out_1", false,-1);
    tracep->declBit(c+1171,"and_out_2", false,-1);
    tracep->declBit(c+1172,"and_out_3", false,-1);
    tracep->declBit(c+1169,"and_out_4", false,-1);
    tracep->declBit(c+1173,"not_out_1", false,-1);
    tracep->declBit(c+1174,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+97,"op1", false,-1);
    tracep->declBit(c+1175,"op2", false,-1);
    tracep->declBit(c+1155,"cin", false,-1);
    tracep->declBit(c+1176,"g", false,-1);
    tracep->declBit(c+1177,"p", false,-1);
    tracep->declBit(c+1178,"s", false,-1);
    tracep->declBit(c+1177,"or_out_1", false,-1);
    tracep->declBit(c+1179,"or_out_2", false,-1);
    tracep->declBit(c+1176,"and_out_1", false,-1);
    tracep->declBit(c+1180,"and_out_2", false,-1);
    tracep->declBit(c+1181,"and_out_3", false,-1);
    tracep->declBit(c+1178,"and_out_4", false,-1);
    tracep->declBit(c+1182,"not_out_1", false,-1);
    tracep->declBit(c+1183,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+98,"op1", false,-1);
    tracep->declBit(c+1184,"op2", false,-1);
    tracep->declBit(c+1156,"cin", false,-1);
    tracep->declBit(c+1185,"g", false,-1);
    tracep->declBit(c+1186,"p", false,-1);
    tracep->declBit(c+1187,"s", false,-1);
    tracep->declBit(c+1186,"or_out_1", false,-1);
    tracep->declBit(c+1188,"or_out_2", false,-1);
    tracep->declBit(c+1185,"and_out_1", false,-1);
    tracep->declBit(c+1189,"and_out_2", false,-1);
    tracep->declBit(c+1190,"and_out_3", false,-1);
    tracep->declBit(c+1187,"and_out_4", false,-1);
    tracep->declBit(c+1191,"not_out_1", false,-1);
    tracep->declBit(c+1192,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA7 ");
    tracep->declBus(c+99,"op1", false,-1, 3,0);
    tracep->declBus(c+1193,"op2", false,-1, 3,0);
    tracep->declBit(c+1143,"cin", false,-1);
    tracep->declBus(c+1194,"s", false,-1, 3,0);
    tracep->declBit(c+1195,"cout", false,-1);
    tracep->declBit(c+1196,"v", false,-1);
    tracep->declBus(c+1197,"g", false,-1, 3,0);
    tracep->declBus(c+1198,"p", false,-1, 3,0);
    tracep->declBus(c+1199,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+1197,"g", false,-1, 3,0);
    tracep->declBus(c+1198,"p", false,-1, 3,0);
    tracep->declBit(c+1143,"cin", false,-1);
    tracep->declBus(c+1199,"cout", false,-1, 3,0);
    tracep->declBit(c+1200,"and_out_1", false,-1);
    tracep->declBit(c+1201,"and_out_2", false,-1);
    tracep->declBit(c+1202,"and_out_3", false,-1);
    tracep->declBit(c+1203,"and_out_4", false,-1);
    tracep->declBit(c+1204,"and_out_5", false,-1);
    tracep->declBit(c+1205,"and_out_6", false,-1);
    tracep->declBit(c+1206,"or_out_1", false,-1);
    tracep->declBit(c+1207,"or_out_2", false,-1);
    tracep->declBit(c+1208,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+100,"op1", false,-1);
    tracep->declBit(c+1209,"op2", false,-1);
    tracep->declBit(c+1143,"cin", false,-1);
    tracep->declBit(c+1210,"g", false,-1);
    tracep->declBit(c+1211,"p", false,-1);
    tracep->declBit(c+1212,"s", false,-1);
    tracep->declBit(c+1211,"or_out_1", false,-1);
    tracep->declBit(c+1213,"or_out_2", false,-1);
    tracep->declBit(c+1210,"and_out_1", false,-1);
    tracep->declBit(c+1214,"and_out_2", false,-1);
    tracep->declBit(c+1215,"and_out_3", false,-1);
    tracep->declBit(c+1212,"and_out_4", false,-1);
    tracep->declBit(c+1216,"not_out_1", false,-1);
    tracep->declBit(c+1217,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+101,"op1", false,-1);
    tracep->declBit(c+1218,"op2", false,-1);
    tracep->declBit(c+1206,"cin", false,-1);
    tracep->declBit(c+1219,"g", false,-1);
    tracep->declBit(c+1220,"p", false,-1);
    tracep->declBit(c+1221,"s", false,-1);
    tracep->declBit(c+1220,"or_out_1", false,-1);
    tracep->declBit(c+1222,"or_out_2", false,-1);
    tracep->declBit(c+1219,"and_out_1", false,-1);
    tracep->declBit(c+1223,"and_out_2", false,-1);
    tracep->declBit(c+1224,"and_out_3", false,-1);
    tracep->declBit(c+1221,"and_out_4", false,-1);
    tracep->declBit(c+1225,"not_out_1", false,-1);
    tracep->declBit(c+1226,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+102,"op1", false,-1);
    tracep->declBit(c+1227,"op2", false,-1);
    tracep->declBit(c+1207,"cin", false,-1);
    tracep->declBit(c+1228,"g", false,-1);
    tracep->declBit(c+1229,"p", false,-1);
    tracep->declBit(c+1230,"s", false,-1);
    tracep->declBit(c+1229,"or_out_1", false,-1);
    tracep->declBit(c+1231,"or_out_2", false,-1);
    tracep->declBit(c+1228,"and_out_1", false,-1);
    tracep->declBit(c+1232,"and_out_2", false,-1);
    tracep->declBit(c+1233,"and_out_3", false,-1);
    tracep->declBit(c+1230,"and_out_4", false,-1);
    tracep->declBit(c+1234,"not_out_1", false,-1);
    tracep->declBit(c+1235,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+103,"op1", false,-1);
    tracep->declBit(c+1236,"op2", false,-1);
    tracep->declBit(c+1208,"cin", false,-1);
    tracep->declBit(c+1237,"g", false,-1);
    tracep->declBit(c+1238,"p", false,-1);
    tracep->declBit(c+1239,"s", false,-1);
    tracep->declBit(c+1238,"or_out_1", false,-1);
    tracep->declBit(c+1240,"or_out_2", false,-1);
    tracep->declBit(c+1237,"and_out_1", false,-1);
    tracep->declBit(c+1241,"and_out_2", false,-1);
    tracep->declBit(c+1242,"and_out_3", false,-1);
    tracep->declBit(c+1239,"and_out_4", false,-1);
    tracep->declBit(c+1243,"not_out_1", false,-1);
    tracep->declBit(c+1244,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA8 ");
    tracep->declBus(c+104,"op1", false,-1, 3,0);
    tracep->declBus(c+1245,"op2", false,-1, 3,0);
    tracep->declBit(c+1195,"cin", false,-1);
    tracep->declBus(c+1246,"s", false,-1, 3,0);
    tracep->declBit(c+109,"cout", false,-1);
    tracep->declBit(c+110,"v", false,-1);
    tracep->declBus(c+116,"g", false,-1, 3,0);
    tracep->declBus(c+117,"p", false,-1, 3,0);
    tracep->declBus(c+1247,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+116,"g", false,-1, 3,0);
    tracep->declBus(c+117,"p", false,-1, 3,0);
    tracep->declBit(c+1195,"cin", false,-1);
    tracep->declBus(c+1247,"cout", false,-1, 3,0);
    tracep->declBit(c+1248,"and_out_1", false,-1);
    tracep->declBit(c+1249,"and_out_2", false,-1);
    tracep->declBit(c+1250,"and_out_3", false,-1);
    tracep->declBit(c+1251,"and_out_4", false,-1);
    tracep->declBit(c+1252,"and_out_5", false,-1);
    tracep->declBit(c+1253,"and_out_6", false,-1);
    tracep->declBit(c+1254,"or_out_1", false,-1);
    tracep->declBit(c+1255,"or_out_2", false,-1);
    tracep->declBit(c+1256,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+105,"op1", false,-1);
    tracep->declBit(c+1257,"op2", false,-1);
    tracep->declBit(c+1195,"cin", false,-1);
    tracep->declBit(c+1258,"g", false,-1);
    tracep->declBit(c+1259,"p", false,-1);
    tracep->declBit(c+1260,"s", false,-1);
    tracep->declBit(c+1259,"or_out_1", false,-1);
    tracep->declBit(c+1261,"or_out_2", false,-1);
    tracep->declBit(c+1258,"and_out_1", false,-1);
    tracep->declBit(c+1262,"and_out_2", false,-1);
    tracep->declBit(c+1263,"and_out_3", false,-1);
    tracep->declBit(c+1260,"and_out_4", false,-1);
    tracep->declBit(c+1264,"not_out_1", false,-1);
    tracep->declBit(c+1265,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+106,"op1", false,-1);
    tracep->declBit(c+1266,"op2", false,-1);
    tracep->declBit(c+1254,"cin", false,-1);
    tracep->declBit(c+1267,"g", false,-1);
    tracep->declBit(c+1268,"p", false,-1);
    tracep->declBit(c+1269,"s", false,-1);
    tracep->declBit(c+1268,"or_out_1", false,-1);
    tracep->declBit(c+1270,"or_out_2", false,-1);
    tracep->declBit(c+1267,"and_out_1", false,-1);
    tracep->declBit(c+1271,"and_out_2", false,-1);
    tracep->declBit(c+1272,"and_out_3", false,-1);
    tracep->declBit(c+1269,"and_out_4", false,-1);
    tracep->declBit(c+1273,"not_out_1", false,-1);
    tracep->declBit(c+1274,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+107,"op1", false,-1);
    tracep->declBit(c+1275,"op2", false,-1);
    tracep->declBit(c+1255,"cin", false,-1);
    tracep->declBit(c+1276,"g", false,-1);
    tracep->declBit(c+1277,"p", false,-1);
    tracep->declBit(c+1278,"s", false,-1);
    tracep->declBit(c+1277,"or_out_1", false,-1);
    tracep->declBit(c+1279,"or_out_2", false,-1);
    tracep->declBit(c+1276,"and_out_1", false,-1);
    tracep->declBit(c+1280,"and_out_2", false,-1);
    tracep->declBit(c+1281,"and_out_3", false,-1);
    tracep->declBit(c+1278,"and_out_4", false,-1);
    tracep->declBit(c+1282,"not_out_1", false,-1);
    tracep->declBit(c+1283,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+108,"op1", false,-1);
    tracep->declBit(c+1284,"op2", false,-1);
    tracep->declBit(c+1256,"cin", false,-1);
    tracep->declBit(c+118,"g", false,-1);
    tracep->declBit(c+119,"p", false,-1);
    tracep->declBit(c+1285,"s", false,-1);
    tracep->declBit(c+119,"or_out_1", false,-1);
    tracep->declBit(c+1286,"or_out_2", false,-1);
    tracep->declBit(c+118,"and_out_1", false,-1);
    tracep->declBit(c+1287,"and_out_2", false,-1);
    tracep->declBit(c+1288,"and_out_3", false,-1);
    tracep->declBit(c+1285,"and_out_4", false,-1);
    tracep->declBit(c+120,"not_out_1", false,-1);
    tracep->declBit(c+1289,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+144,"op1", false,-1, 31,0);
    tracep->declBus(c+150,"op2", false,-1, 31,0);
    tracep->declBit(c+128,"cin", false,-1);
    tracep->declBus(c+151,"sum", false,-1, 31,0);
    tracep->declBit(c+152,"carry", false,-1);
    tracep->declBit(c+149,"v_flag", false,-1);
    tracep->declBus(c+157,"cout", false,-1, 6,0);
    tracep->declBus(c+158,"flag_v", false,-1, 7,0);
    tracep->pushNamePrefix("CLA1 ");
    tracep->declBus(c+159,"op1", false,-1, 3,0);
    tracep->declBus(c+160,"op2", false,-1, 3,0);
    tracep->declBit(c+128,"cin", false,-1);
    tracep->declBus(c+133,"s", false,-1, 3,0);
    tracep->declBit(c+161,"cout", false,-1);
    tracep->declBit(c+162,"v", false,-1);
    tracep->declBus(c+163,"g", false,-1, 3,0);
    tracep->declBus(c+164,"p", false,-1, 3,0);
    tracep->declBus(c+134,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+163,"g", false,-1, 3,0);
    tracep->declBus(c+164,"p", false,-1, 3,0);
    tracep->declBit(c+128,"cin", false,-1);
    tracep->declBus(c+134,"cout", false,-1, 3,0);
    tracep->declBit(c+165,"and_out_1", false,-1);
    tracep->declBit(c+166,"and_out_2", false,-1);
    tracep->declBit(c+167,"and_out_3", false,-1);
    tracep->declBit(c+168,"and_out_4", false,-1);
    tracep->declBit(c+169,"and_out_5", false,-1);
    tracep->declBit(c+170,"and_out_6", false,-1);
    tracep->declBit(c+171,"or_out_1", false,-1);
    tracep->declBit(c+172,"or_out_2", false,-1);
    tracep->declBit(c+173,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+174,"op1", false,-1);
    tracep->declBit(c+175,"op2", false,-1);
    tracep->declBit(c+128,"cin", false,-1);
    tracep->declBit(c+176,"g", false,-1);
    tracep->declBit(c+177,"p", false,-1);
    tracep->declBit(c+135,"s", false,-1);
    tracep->declBit(c+177,"or_out_1", false,-1);
    tracep->declBit(c+136,"or_out_2", false,-1);
    tracep->declBit(c+176,"and_out_1", false,-1);
    tracep->declBit(c+178,"and_out_2", false,-1);
    tracep->declBit(c+137,"and_out_3", false,-1);
    tracep->declBit(c+135,"and_out_4", false,-1);
    tracep->declBit(c+179,"not_out_1", false,-1);
    tracep->declBit(c+138,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+180,"op1", false,-1);
    tracep->declBit(c+181,"op2", false,-1);
    tracep->declBit(c+171,"cin", false,-1);
    tracep->declBit(c+182,"g", false,-1);
    tracep->declBit(c+183,"p", false,-1);
    tracep->declBit(c+184,"s", false,-1);
    tracep->declBit(c+183,"or_out_1", false,-1);
    tracep->declBit(c+185,"or_out_2", false,-1);
    tracep->declBit(c+182,"and_out_1", false,-1);
    tracep->declBit(c+186,"and_out_2", false,-1);
    tracep->declBit(c+187,"and_out_3", false,-1);
    tracep->declBit(c+184,"and_out_4", false,-1);
    tracep->declBit(c+188,"not_out_1", false,-1);
    tracep->declBit(c+189,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+190,"op1", false,-1);
    tracep->declBit(c+191,"op2", false,-1);
    tracep->declBit(c+172,"cin", false,-1);
    tracep->declBit(c+192,"g", false,-1);
    tracep->declBit(c+193,"p", false,-1);
    tracep->declBit(c+194,"s", false,-1);
    tracep->declBit(c+193,"or_out_1", false,-1);
    tracep->declBit(c+195,"or_out_2", false,-1);
    tracep->declBit(c+192,"and_out_1", false,-1);
    tracep->declBit(c+196,"and_out_2", false,-1);
    tracep->declBit(c+197,"and_out_3", false,-1);
    tracep->declBit(c+194,"and_out_4", false,-1);
    tracep->declBit(c+198,"not_out_1", false,-1);
    tracep->declBit(c+199,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+200,"op1", false,-1);
    tracep->declBit(c+201,"op2", false,-1);
    tracep->declBit(c+173,"cin", false,-1);
    tracep->declBit(c+202,"g", false,-1);
    tracep->declBit(c+203,"p", false,-1);
    tracep->declBit(c+204,"s", false,-1);
    tracep->declBit(c+203,"or_out_1", false,-1);
    tracep->declBit(c+205,"or_out_2", false,-1);
    tracep->declBit(c+202,"and_out_1", false,-1);
    tracep->declBit(c+206,"and_out_2", false,-1);
    tracep->declBit(c+207,"and_out_3", false,-1);
    tracep->declBit(c+204,"and_out_4", false,-1);
    tracep->declBit(c+208,"not_out_1", false,-1);
    tracep->declBit(c+209,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA2 ");
    tracep->declBus(c+210,"op1", false,-1, 3,0);
    tracep->declBus(c+211,"op2", false,-1, 3,0);
    tracep->declBit(c+161,"cin", false,-1);
    tracep->declBus(c+212,"s", false,-1, 3,0);
    tracep->declBit(c+213,"cout", false,-1);
    tracep->declBit(c+214,"v", false,-1);
    tracep->declBus(c+215,"g", false,-1, 3,0);
    tracep->declBus(c+216,"p", false,-1, 3,0);
    tracep->declBus(c+217,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+215,"g", false,-1, 3,0);
    tracep->declBus(c+216,"p", false,-1, 3,0);
    tracep->declBit(c+161,"cin", false,-1);
    tracep->declBus(c+217,"cout", false,-1, 3,0);
    tracep->declBit(c+218,"and_out_1", false,-1);
    tracep->declBit(c+219,"and_out_2", false,-1);
    tracep->declBit(c+220,"and_out_3", false,-1);
    tracep->declBit(c+221,"and_out_4", false,-1);
    tracep->declBit(c+222,"and_out_5", false,-1);
    tracep->declBit(c+223,"and_out_6", false,-1);
    tracep->declBit(c+224,"or_out_1", false,-1);
    tracep->declBit(c+225,"or_out_2", false,-1);
    tracep->declBit(c+226,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+227,"op1", false,-1);
    tracep->declBit(c+228,"op2", false,-1);
    tracep->declBit(c+161,"cin", false,-1);
    tracep->declBit(c+229,"g", false,-1);
    tracep->declBit(c+230,"p", false,-1);
    tracep->declBit(c+231,"s", false,-1);
    tracep->declBit(c+230,"or_out_1", false,-1);
    tracep->declBit(c+232,"or_out_2", false,-1);
    tracep->declBit(c+229,"and_out_1", false,-1);
    tracep->declBit(c+233,"and_out_2", false,-1);
    tracep->declBit(c+234,"and_out_3", false,-1);
    tracep->declBit(c+231,"and_out_4", false,-1);
    tracep->declBit(c+235,"not_out_1", false,-1);
    tracep->declBit(c+236,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+237,"op1", false,-1);
    tracep->declBit(c+238,"op2", false,-1);
    tracep->declBit(c+224,"cin", false,-1);
    tracep->declBit(c+239,"g", false,-1);
    tracep->declBit(c+240,"p", false,-1);
    tracep->declBit(c+241,"s", false,-1);
    tracep->declBit(c+240,"or_out_1", false,-1);
    tracep->declBit(c+242,"or_out_2", false,-1);
    tracep->declBit(c+239,"and_out_1", false,-1);
    tracep->declBit(c+243,"and_out_2", false,-1);
    tracep->declBit(c+244,"and_out_3", false,-1);
    tracep->declBit(c+241,"and_out_4", false,-1);
    tracep->declBit(c+245,"not_out_1", false,-1);
    tracep->declBit(c+246,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+247,"op1", false,-1);
    tracep->declBit(c+248,"op2", false,-1);
    tracep->declBit(c+225,"cin", false,-1);
    tracep->declBit(c+249,"g", false,-1);
    tracep->declBit(c+250,"p", false,-1);
    tracep->declBit(c+251,"s", false,-1);
    tracep->declBit(c+250,"or_out_1", false,-1);
    tracep->declBit(c+252,"or_out_2", false,-1);
    tracep->declBit(c+249,"and_out_1", false,-1);
    tracep->declBit(c+253,"and_out_2", false,-1);
    tracep->declBit(c+254,"and_out_3", false,-1);
    tracep->declBit(c+251,"and_out_4", false,-1);
    tracep->declBit(c+255,"not_out_1", false,-1);
    tracep->declBit(c+256,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+257,"op1", false,-1);
    tracep->declBit(c+258,"op2", false,-1);
    tracep->declBit(c+226,"cin", false,-1);
    tracep->declBit(c+259,"g", false,-1);
    tracep->declBit(c+260,"p", false,-1);
    tracep->declBit(c+261,"s", false,-1);
    tracep->declBit(c+260,"or_out_1", false,-1);
    tracep->declBit(c+262,"or_out_2", false,-1);
    tracep->declBit(c+259,"and_out_1", false,-1);
    tracep->declBit(c+263,"and_out_2", false,-1);
    tracep->declBit(c+264,"and_out_3", false,-1);
    tracep->declBit(c+261,"and_out_4", false,-1);
    tracep->declBit(c+265,"not_out_1", false,-1);
    tracep->declBit(c+266,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA3 ");
    tracep->declBus(c+267,"op1", false,-1, 3,0);
    tracep->declBus(c+268,"op2", false,-1, 3,0);
    tracep->declBit(c+213,"cin", false,-1);
    tracep->declBus(c+269,"s", false,-1, 3,0);
    tracep->declBit(c+270,"cout", false,-1);
    tracep->declBit(c+271,"v", false,-1);
    tracep->declBus(c+272,"g", false,-1, 3,0);
    tracep->declBus(c+273,"p", false,-1, 3,0);
    tracep->declBus(c+274,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+272,"g", false,-1, 3,0);
    tracep->declBus(c+273,"p", false,-1, 3,0);
    tracep->declBit(c+213,"cin", false,-1);
    tracep->declBus(c+274,"cout", false,-1, 3,0);
    tracep->declBit(c+275,"and_out_1", false,-1);
    tracep->declBit(c+276,"and_out_2", false,-1);
    tracep->declBit(c+277,"and_out_3", false,-1);
    tracep->declBit(c+278,"and_out_4", false,-1);
    tracep->declBit(c+279,"and_out_5", false,-1);
    tracep->declBit(c+280,"and_out_6", false,-1);
    tracep->declBit(c+281,"or_out_1", false,-1);
    tracep->declBit(c+282,"or_out_2", false,-1);
    tracep->declBit(c+283,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+284,"op1", false,-1);
    tracep->declBit(c+285,"op2", false,-1);
    tracep->declBit(c+213,"cin", false,-1);
    tracep->declBit(c+286,"g", false,-1);
    tracep->declBit(c+287,"p", false,-1);
    tracep->declBit(c+288,"s", false,-1);
    tracep->declBit(c+287,"or_out_1", false,-1);
    tracep->declBit(c+289,"or_out_2", false,-1);
    tracep->declBit(c+286,"and_out_1", false,-1);
    tracep->declBit(c+290,"and_out_2", false,-1);
    tracep->declBit(c+291,"and_out_3", false,-1);
    tracep->declBit(c+288,"and_out_4", false,-1);
    tracep->declBit(c+292,"not_out_1", false,-1);
    tracep->declBit(c+293,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+294,"op1", false,-1);
    tracep->declBit(c+295,"op2", false,-1);
    tracep->declBit(c+281,"cin", false,-1);
    tracep->declBit(c+296,"g", false,-1);
    tracep->declBit(c+297,"p", false,-1);
    tracep->declBit(c+298,"s", false,-1);
    tracep->declBit(c+297,"or_out_1", false,-1);
    tracep->declBit(c+299,"or_out_2", false,-1);
    tracep->declBit(c+296,"and_out_1", false,-1);
    tracep->declBit(c+300,"and_out_2", false,-1);
    tracep->declBit(c+301,"and_out_3", false,-1);
    tracep->declBit(c+298,"and_out_4", false,-1);
    tracep->declBit(c+302,"not_out_1", false,-1);
    tracep->declBit(c+303,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+304,"op1", false,-1);
    tracep->declBit(c+305,"op2", false,-1);
    tracep->declBit(c+282,"cin", false,-1);
    tracep->declBit(c+306,"g", false,-1);
    tracep->declBit(c+307,"p", false,-1);
    tracep->declBit(c+308,"s", false,-1);
    tracep->declBit(c+307,"or_out_1", false,-1);
    tracep->declBit(c+309,"or_out_2", false,-1);
    tracep->declBit(c+306,"and_out_1", false,-1);
    tracep->declBit(c+310,"and_out_2", false,-1);
    tracep->declBit(c+311,"and_out_3", false,-1);
    tracep->declBit(c+308,"and_out_4", false,-1);
    tracep->declBit(c+312,"not_out_1", false,-1);
    tracep->declBit(c+313,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+314,"op1", false,-1);
    tracep->declBit(c+315,"op2", false,-1);
    tracep->declBit(c+283,"cin", false,-1);
    tracep->declBit(c+316,"g", false,-1);
    tracep->declBit(c+317,"p", false,-1);
    tracep->declBit(c+318,"s", false,-1);
    tracep->declBit(c+317,"or_out_1", false,-1);
    tracep->declBit(c+319,"or_out_2", false,-1);
    tracep->declBit(c+316,"and_out_1", false,-1);
    tracep->declBit(c+320,"and_out_2", false,-1);
    tracep->declBit(c+321,"and_out_3", false,-1);
    tracep->declBit(c+318,"and_out_4", false,-1);
    tracep->declBit(c+322,"not_out_1", false,-1);
    tracep->declBit(c+323,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA4 ");
    tracep->declBus(c+324,"op1", false,-1, 3,0);
    tracep->declBus(c+325,"op2", false,-1, 3,0);
    tracep->declBit(c+270,"cin", false,-1);
    tracep->declBus(c+326,"s", false,-1, 3,0);
    tracep->declBit(c+327,"cout", false,-1);
    tracep->declBit(c+328,"v", false,-1);
    tracep->declBus(c+329,"g", false,-1, 3,0);
    tracep->declBus(c+330,"p", false,-1, 3,0);
    tracep->declBus(c+331,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+329,"g", false,-1, 3,0);
    tracep->declBus(c+330,"p", false,-1, 3,0);
    tracep->declBit(c+270,"cin", false,-1);
    tracep->declBus(c+331,"cout", false,-1, 3,0);
    tracep->declBit(c+332,"and_out_1", false,-1);
    tracep->declBit(c+333,"and_out_2", false,-1);
    tracep->declBit(c+334,"and_out_3", false,-1);
    tracep->declBit(c+335,"and_out_4", false,-1);
    tracep->declBit(c+336,"and_out_5", false,-1);
    tracep->declBit(c+337,"and_out_6", false,-1);
    tracep->declBit(c+338,"or_out_1", false,-1);
    tracep->declBit(c+339,"or_out_2", false,-1);
    tracep->declBit(c+340,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+341,"op1", false,-1);
    tracep->declBit(c+342,"op2", false,-1);
    tracep->declBit(c+270,"cin", false,-1);
    tracep->declBit(c+343,"g", false,-1);
    tracep->declBit(c+344,"p", false,-1);
    tracep->declBit(c+345,"s", false,-1);
    tracep->declBit(c+344,"or_out_1", false,-1);
    tracep->declBit(c+346,"or_out_2", false,-1);
    tracep->declBit(c+343,"and_out_1", false,-1);
    tracep->declBit(c+347,"and_out_2", false,-1);
    tracep->declBit(c+348,"and_out_3", false,-1);
    tracep->declBit(c+345,"and_out_4", false,-1);
    tracep->declBit(c+349,"not_out_1", false,-1);
    tracep->declBit(c+350,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+351,"op1", false,-1);
    tracep->declBit(c+352,"op2", false,-1);
    tracep->declBit(c+338,"cin", false,-1);
    tracep->declBit(c+353,"g", false,-1);
    tracep->declBit(c+354,"p", false,-1);
    tracep->declBit(c+355,"s", false,-1);
    tracep->declBit(c+354,"or_out_1", false,-1);
    tracep->declBit(c+356,"or_out_2", false,-1);
    tracep->declBit(c+353,"and_out_1", false,-1);
    tracep->declBit(c+357,"and_out_2", false,-1);
    tracep->declBit(c+358,"and_out_3", false,-1);
    tracep->declBit(c+355,"and_out_4", false,-1);
    tracep->declBit(c+359,"not_out_1", false,-1);
    tracep->declBit(c+360,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+361,"op1", false,-1);
    tracep->declBit(c+362,"op2", false,-1);
    tracep->declBit(c+339,"cin", false,-1);
    tracep->declBit(c+363,"g", false,-1);
    tracep->declBit(c+364,"p", false,-1);
    tracep->declBit(c+365,"s", false,-1);
    tracep->declBit(c+364,"or_out_1", false,-1);
    tracep->declBit(c+366,"or_out_2", false,-1);
    tracep->declBit(c+363,"and_out_1", false,-1);
    tracep->declBit(c+367,"and_out_2", false,-1);
    tracep->declBit(c+368,"and_out_3", false,-1);
    tracep->declBit(c+365,"and_out_4", false,-1);
    tracep->declBit(c+369,"not_out_1", false,-1);
    tracep->declBit(c+370,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+371,"op1", false,-1);
    tracep->declBit(c+372,"op2", false,-1);
    tracep->declBit(c+340,"cin", false,-1);
    tracep->declBit(c+373,"g", false,-1);
    tracep->declBit(c+374,"p", false,-1);
    tracep->declBit(c+375,"s", false,-1);
    tracep->declBit(c+374,"or_out_1", false,-1);
    tracep->declBit(c+376,"or_out_2", false,-1);
    tracep->declBit(c+373,"and_out_1", false,-1);
    tracep->declBit(c+377,"and_out_2", false,-1);
    tracep->declBit(c+378,"and_out_3", false,-1);
    tracep->declBit(c+375,"and_out_4", false,-1);
    tracep->declBit(c+379,"not_out_1", false,-1);
    tracep->declBit(c+380,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA5 ");
    tracep->declBus(c+381,"op1", false,-1, 3,0);
    tracep->declBus(c+382,"op2", false,-1, 3,0);
    tracep->declBit(c+327,"cin", false,-1);
    tracep->declBus(c+383,"s", false,-1, 3,0);
    tracep->declBit(c+384,"cout", false,-1);
    tracep->declBit(c+385,"v", false,-1);
    tracep->declBus(c+386,"g", false,-1, 3,0);
    tracep->declBus(c+387,"p", false,-1, 3,0);
    tracep->declBus(c+388,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+386,"g", false,-1, 3,0);
    tracep->declBus(c+387,"p", false,-1, 3,0);
    tracep->declBit(c+327,"cin", false,-1);
    tracep->declBus(c+388,"cout", false,-1, 3,0);
    tracep->declBit(c+389,"and_out_1", false,-1);
    tracep->declBit(c+390,"and_out_2", false,-1);
    tracep->declBit(c+391,"and_out_3", false,-1);
    tracep->declBit(c+392,"and_out_4", false,-1);
    tracep->declBit(c+393,"and_out_5", false,-1);
    tracep->declBit(c+394,"and_out_6", false,-1);
    tracep->declBit(c+395,"or_out_1", false,-1);
    tracep->declBit(c+396,"or_out_2", false,-1);
    tracep->declBit(c+397,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+398,"op1", false,-1);
    tracep->declBit(c+399,"op2", false,-1);
    tracep->declBit(c+327,"cin", false,-1);
    tracep->declBit(c+400,"g", false,-1);
    tracep->declBit(c+401,"p", false,-1);
    tracep->declBit(c+402,"s", false,-1);
    tracep->declBit(c+401,"or_out_1", false,-1);
    tracep->declBit(c+403,"or_out_2", false,-1);
    tracep->declBit(c+400,"and_out_1", false,-1);
    tracep->declBit(c+404,"and_out_2", false,-1);
    tracep->declBit(c+405,"and_out_3", false,-1);
    tracep->declBit(c+402,"and_out_4", false,-1);
    tracep->declBit(c+406,"not_out_1", false,-1);
    tracep->declBit(c+407,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+408,"op1", false,-1);
    tracep->declBit(c+409,"op2", false,-1);
    tracep->declBit(c+395,"cin", false,-1);
    tracep->declBit(c+410,"g", false,-1);
    tracep->declBit(c+411,"p", false,-1);
    tracep->declBit(c+412,"s", false,-1);
    tracep->declBit(c+411,"or_out_1", false,-1);
    tracep->declBit(c+413,"or_out_2", false,-1);
    tracep->declBit(c+410,"and_out_1", false,-1);
    tracep->declBit(c+414,"and_out_2", false,-1);
    tracep->declBit(c+415,"and_out_3", false,-1);
    tracep->declBit(c+412,"and_out_4", false,-1);
    tracep->declBit(c+416,"not_out_1", false,-1);
    tracep->declBit(c+417,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+418,"op1", false,-1);
    tracep->declBit(c+419,"op2", false,-1);
    tracep->declBit(c+396,"cin", false,-1);
    tracep->declBit(c+420,"g", false,-1);
    tracep->declBit(c+421,"p", false,-1);
    tracep->declBit(c+422,"s", false,-1);
    tracep->declBit(c+421,"or_out_1", false,-1);
    tracep->declBit(c+423,"or_out_2", false,-1);
    tracep->declBit(c+420,"and_out_1", false,-1);
    tracep->declBit(c+424,"and_out_2", false,-1);
    tracep->declBit(c+425,"and_out_3", false,-1);
    tracep->declBit(c+422,"and_out_4", false,-1);
    tracep->declBit(c+426,"not_out_1", false,-1);
    tracep->declBit(c+427,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+428,"op1", false,-1);
    tracep->declBit(c+429,"op2", false,-1);
    tracep->declBit(c+397,"cin", false,-1);
    tracep->declBit(c+430,"g", false,-1);
    tracep->declBit(c+431,"p", false,-1);
    tracep->declBit(c+432,"s", false,-1);
    tracep->declBit(c+431,"or_out_1", false,-1);
    tracep->declBit(c+433,"or_out_2", false,-1);
    tracep->declBit(c+430,"and_out_1", false,-1);
    tracep->declBit(c+434,"and_out_2", false,-1);
    tracep->declBit(c+435,"and_out_3", false,-1);
    tracep->declBit(c+432,"and_out_4", false,-1);
    tracep->declBit(c+436,"not_out_1", false,-1);
    tracep->declBit(c+437,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA6 ");
    tracep->declBus(c+438,"op1", false,-1, 3,0);
    tracep->declBus(c+439,"op2", false,-1, 3,0);
    tracep->declBit(c+384,"cin", false,-1);
    tracep->declBus(c+440,"s", false,-1, 3,0);
    tracep->declBit(c+441,"cout", false,-1);
    tracep->declBit(c+442,"v", false,-1);
    tracep->declBus(c+443,"g", false,-1, 3,0);
    tracep->declBus(c+444,"p", false,-1, 3,0);
    tracep->declBus(c+445,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+443,"g", false,-1, 3,0);
    tracep->declBus(c+444,"p", false,-1, 3,0);
    tracep->declBit(c+384,"cin", false,-1);
    tracep->declBus(c+445,"cout", false,-1, 3,0);
    tracep->declBit(c+446,"and_out_1", false,-1);
    tracep->declBit(c+447,"and_out_2", false,-1);
    tracep->declBit(c+448,"and_out_3", false,-1);
    tracep->declBit(c+449,"and_out_4", false,-1);
    tracep->declBit(c+450,"and_out_5", false,-1);
    tracep->declBit(c+451,"and_out_6", false,-1);
    tracep->declBit(c+452,"or_out_1", false,-1);
    tracep->declBit(c+453,"or_out_2", false,-1);
    tracep->declBit(c+454,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+455,"op1", false,-1);
    tracep->declBit(c+456,"op2", false,-1);
    tracep->declBit(c+384,"cin", false,-1);
    tracep->declBit(c+457,"g", false,-1);
    tracep->declBit(c+458,"p", false,-1);
    tracep->declBit(c+459,"s", false,-1);
    tracep->declBit(c+458,"or_out_1", false,-1);
    tracep->declBit(c+460,"or_out_2", false,-1);
    tracep->declBit(c+457,"and_out_1", false,-1);
    tracep->declBit(c+461,"and_out_2", false,-1);
    tracep->declBit(c+462,"and_out_3", false,-1);
    tracep->declBit(c+459,"and_out_4", false,-1);
    tracep->declBit(c+463,"not_out_1", false,-1);
    tracep->declBit(c+464,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+465,"op1", false,-1);
    tracep->declBit(c+466,"op2", false,-1);
    tracep->declBit(c+452,"cin", false,-1);
    tracep->declBit(c+467,"g", false,-1);
    tracep->declBit(c+468,"p", false,-1);
    tracep->declBit(c+469,"s", false,-1);
    tracep->declBit(c+468,"or_out_1", false,-1);
    tracep->declBit(c+470,"or_out_2", false,-1);
    tracep->declBit(c+467,"and_out_1", false,-1);
    tracep->declBit(c+471,"and_out_2", false,-1);
    tracep->declBit(c+472,"and_out_3", false,-1);
    tracep->declBit(c+469,"and_out_4", false,-1);
    tracep->declBit(c+473,"not_out_1", false,-1);
    tracep->declBit(c+474,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+475,"op1", false,-1);
    tracep->declBit(c+476,"op2", false,-1);
    tracep->declBit(c+453,"cin", false,-1);
    tracep->declBit(c+477,"g", false,-1);
    tracep->declBit(c+478,"p", false,-1);
    tracep->declBit(c+479,"s", false,-1);
    tracep->declBit(c+478,"or_out_1", false,-1);
    tracep->declBit(c+480,"or_out_2", false,-1);
    tracep->declBit(c+477,"and_out_1", false,-1);
    tracep->declBit(c+481,"and_out_2", false,-1);
    tracep->declBit(c+482,"and_out_3", false,-1);
    tracep->declBit(c+479,"and_out_4", false,-1);
    tracep->declBit(c+483,"not_out_1", false,-1);
    tracep->declBit(c+484,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+485,"op1", false,-1);
    tracep->declBit(c+486,"op2", false,-1);
    tracep->declBit(c+454,"cin", false,-1);
    tracep->declBit(c+487,"g", false,-1);
    tracep->declBit(c+488,"p", false,-1);
    tracep->declBit(c+489,"s", false,-1);
    tracep->declBit(c+488,"or_out_1", false,-1);
    tracep->declBit(c+490,"or_out_2", false,-1);
    tracep->declBit(c+487,"and_out_1", false,-1);
    tracep->declBit(c+491,"and_out_2", false,-1);
    tracep->declBit(c+492,"and_out_3", false,-1);
    tracep->declBit(c+489,"and_out_4", false,-1);
    tracep->declBit(c+493,"not_out_1", false,-1);
    tracep->declBit(c+494,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA7 ");
    tracep->declBus(c+495,"op1", false,-1, 3,0);
    tracep->declBus(c+496,"op2", false,-1, 3,0);
    tracep->declBit(c+441,"cin", false,-1);
    tracep->declBus(c+497,"s", false,-1, 3,0);
    tracep->declBit(c+498,"cout", false,-1);
    tracep->declBit(c+499,"v", false,-1);
    tracep->declBus(c+500,"g", false,-1, 3,0);
    tracep->declBus(c+501,"p", false,-1, 3,0);
    tracep->declBus(c+502,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+500,"g", false,-1, 3,0);
    tracep->declBus(c+501,"p", false,-1, 3,0);
    tracep->declBit(c+441,"cin", false,-1);
    tracep->declBus(c+502,"cout", false,-1, 3,0);
    tracep->declBit(c+503,"and_out_1", false,-1);
    tracep->declBit(c+504,"and_out_2", false,-1);
    tracep->declBit(c+505,"and_out_3", false,-1);
    tracep->declBit(c+506,"and_out_4", false,-1);
    tracep->declBit(c+507,"and_out_5", false,-1);
    tracep->declBit(c+508,"and_out_6", false,-1);
    tracep->declBit(c+509,"or_out_1", false,-1);
    tracep->declBit(c+510,"or_out_2", false,-1);
    tracep->declBit(c+511,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+512,"op1", false,-1);
    tracep->declBit(c+513,"op2", false,-1);
    tracep->declBit(c+441,"cin", false,-1);
    tracep->declBit(c+514,"g", false,-1);
    tracep->declBit(c+515,"p", false,-1);
    tracep->declBit(c+516,"s", false,-1);
    tracep->declBit(c+515,"or_out_1", false,-1);
    tracep->declBit(c+517,"or_out_2", false,-1);
    tracep->declBit(c+514,"and_out_1", false,-1);
    tracep->declBit(c+518,"and_out_2", false,-1);
    tracep->declBit(c+519,"and_out_3", false,-1);
    tracep->declBit(c+516,"and_out_4", false,-1);
    tracep->declBit(c+520,"not_out_1", false,-1);
    tracep->declBit(c+521,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+522,"op1", false,-1);
    tracep->declBit(c+523,"op2", false,-1);
    tracep->declBit(c+509,"cin", false,-1);
    tracep->declBit(c+524,"g", false,-1);
    tracep->declBit(c+525,"p", false,-1);
    tracep->declBit(c+526,"s", false,-1);
    tracep->declBit(c+525,"or_out_1", false,-1);
    tracep->declBit(c+527,"or_out_2", false,-1);
    tracep->declBit(c+524,"and_out_1", false,-1);
    tracep->declBit(c+528,"and_out_2", false,-1);
    tracep->declBit(c+529,"and_out_3", false,-1);
    tracep->declBit(c+526,"and_out_4", false,-1);
    tracep->declBit(c+530,"not_out_1", false,-1);
    tracep->declBit(c+531,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+532,"op1", false,-1);
    tracep->declBit(c+533,"op2", false,-1);
    tracep->declBit(c+510,"cin", false,-1);
    tracep->declBit(c+534,"g", false,-1);
    tracep->declBit(c+535,"p", false,-1);
    tracep->declBit(c+536,"s", false,-1);
    tracep->declBit(c+535,"or_out_1", false,-1);
    tracep->declBit(c+537,"or_out_2", false,-1);
    tracep->declBit(c+534,"and_out_1", false,-1);
    tracep->declBit(c+538,"and_out_2", false,-1);
    tracep->declBit(c+539,"and_out_3", false,-1);
    tracep->declBit(c+536,"and_out_4", false,-1);
    tracep->declBit(c+540,"not_out_1", false,-1);
    tracep->declBit(c+541,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+542,"op1", false,-1);
    tracep->declBit(c+543,"op2", false,-1);
    tracep->declBit(c+511,"cin", false,-1);
    tracep->declBit(c+544,"g", false,-1);
    tracep->declBit(c+545,"p", false,-1);
    tracep->declBit(c+546,"s", false,-1);
    tracep->declBit(c+545,"or_out_1", false,-1);
    tracep->declBit(c+547,"or_out_2", false,-1);
    tracep->declBit(c+544,"and_out_1", false,-1);
    tracep->declBit(c+548,"and_out_2", false,-1);
    tracep->declBit(c+549,"and_out_3", false,-1);
    tracep->declBit(c+546,"and_out_4", false,-1);
    tracep->declBit(c+550,"not_out_1", false,-1);
    tracep->declBit(c+551,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLA8 ");
    tracep->declBus(c+552,"op1", false,-1, 3,0);
    tracep->declBus(c+553,"op2", false,-1, 3,0);
    tracep->declBit(c+498,"cin", false,-1);
    tracep->declBus(c+554,"s", false,-1, 3,0);
    tracep->declBit(c+152,"cout", false,-1);
    tracep->declBit(c+149,"v", false,-1);
    tracep->declBus(c+555,"g", false,-1, 3,0);
    tracep->declBus(c+556,"p", false,-1, 3,0);
    tracep->declBus(c+557,"gen_cout", false,-1, 3,0);
    tracep->pushNamePrefix("CLG1 ");
    tracep->declBus(c+555,"g", false,-1, 3,0);
    tracep->declBus(c+556,"p", false,-1, 3,0);
    tracep->declBit(c+498,"cin", false,-1);
    tracep->declBus(c+557,"cout", false,-1, 3,0);
    tracep->declBit(c+558,"and_out_1", false,-1);
    tracep->declBit(c+559,"and_out_2", false,-1);
    tracep->declBit(c+560,"and_out_3", false,-1);
    tracep->declBit(c+561,"and_out_4", false,-1);
    tracep->declBit(c+562,"and_out_5", false,-1);
    tracep->declBit(c+563,"and_out_6", false,-1);
    tracep->declBit(c+564,"or_out_1", false,-1);
    tracep->declBit(c+565,"or_out_2", false,-1);
    tracep->declBit(c+566,"or_out_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA0 ");
    tracep->declBit(c+567,"op1", false,-1);
    tracep->declBit(c+568,"op2", false,-1);
    tracep->declBit(c+498,"cin", false,-1);
    tracep->declBit(c+569,"g", false,-1);
    tracep->declBit(c+570,"p", false,-1);
    tracep->declBit(c+571,"s", false,-1);
    tracep->declBit(c+570,"or_out_1", false,-1);
    tracep->declBit(c+572,"or_out_2", false,-1);
    tracep->declBit(c+569,"and_out_1", false,-1);
    tracep->declBit(c+573,"and_out_2", false,-1);
    tracep->declBit(c+574,"and_out_3", false,-1);
    tracep->declBit(c+571,"and_out_4", false,-1);
    tracep->declBit(c+575,"not_out_1", false,-1);
    tracep->declBit(c+576,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA1 ");
    tracep->declBit(c+577,"op1", false,-1);
    tracep->declBit(c+578,"op2", false,-1);
    tracep->declBit(c+564,"cin", false,-1);
    tracep->declBit(c+579,"g", false,-1);
    tracep->declBit(c+580,"p", false,-1);
    tracep->declBit(c+581,"s", false,-1);
    tracep->declBit(c+580,"or_out_1", false,-1);
    tracep->declBit(c+582,"or_out_2", false,-1);
    tracep->declBit(c+579,"and_out_1", false,-1);
    tracep->declBit(c+583,"and_out_2", false,-1);
    tracep->declBit(c+584,"and_out_3", false,-1);
    tracep->declBit(c+581,"and_out_4", false,-1);
    tracep->declBit(c+585,"not_out_1", false,-1);
    tracep->declBit(c+586,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA2 ");
    tracep->declBit(c+587,"op1", false,-1);
    tracep->declBit(c+588,"op2", false,-1);
    tracep->declBit(c+565,"cin", false,-1);
    tracep->declBit(c+589,"g", false,-1);
    tracep->declBit(c+590,"p", false,-1);
    tracep->declBit(c+591,"s", false,-1);
    tracep->declBit(c+590,"or_out_1", false,-1);
    tracep->declBit(c+592,"or_out_2", false,-1);
    tracep->declBit(c+589,"and_out_1", false,-1);
    tracep->declBit(c+593,"and_out_2", false,-1);
    tracep->declBit(c+594,"and_out_3", false,-1);
    tracep->declBit(c+591,"and_out_4", false,-1);
    tracep->declBit(c+595,"not_out_1", false,-1);
    tracep->declBit(c+596,"not_out_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFA3 ");
    tracep->declBit(c+597,"op1", false,-1);
    tracep->declBit(c+598,"op2", false,-1);
    tracep->declBit(c+566,"cin", false,-1);
    tracep->declBit(c+599,"g", false,-1);
    tracep->declBit(c+600,"p", false,-1);
    tracep->declBit(c+601,"s", false,-1);
    tracep->declBit(c+600,"or_out_1", false,-1);
    tracep->declBit(c+602,"or_out_2", false,-1);
    tracep->declBit(c+599,"and_out_1", false,-1);
    tracep->declBit(c+603,"and_out_2", false,-1);
    tracep->declBit(c+604,"and_out_3", false,-1);
    tracep->declBit(c+601,"and_out_4", false,-1);
    tracep->declBit(c+605,"not_out_1", false,-1);
    tracep->declBit(c+606,"not_out_2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top_tb ");
    tracep->pushNamePrefix("T1 ");
    tracep->pushNamePrefix("A1 ");
    tracep->pushNamePrefix("A1 ");
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__A1__DOT__A1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ADD1 ");
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ADD2 ");
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__T1__DOT__ADD2__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_top_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                            [vlSelf->top_tb__DOT__rd_wb]),32);
    bufp->fullIData(oldp+2,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                            [vlSelf->top_tb__DOT__rs1_wb]),32);
    bufp->fullIData(oldp+3,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                            [vlSelf->top_tb__DOT__rs2_wb]),32);
    bufp->fullIData(oldp+4,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[31]),32);
    bufp->fullCData(oldp+36,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg),3);
    bufp->fullCData(oldp+37,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg),5);
    bufp->fullCData(oldp+38,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg),5);
    bufp->fullBit(oldp+39,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_r_type_ex_pipe_reg));
    bufp->fullBit(oldp+40,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_s_type_ex_pipe_reg));
    bufp->fullBit(oldp+41,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_u_type_ex_pipe_reg));
    bufp->fullBit(oldp+42,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_j_type_ex_pipe_reg));
    bufp->fullCData(oldp+43,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg),2);
    bufp->fullBit(oldp+44,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg));
    bufp->fullCData(oldp+45,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg),2);
    bufp->fullBit(oldp+46,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc4_sel_ex_pipe_reg));
    bufp->fullBit(oldp+47,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__cpr_en_ex_pipe_reg));
    bufp->fullBit(oldp+48,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wa_sel_ex_pipe_reg));
    bufp->fullIData(oldp+49,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg),32);
    bufp->fullIData(oldp+50,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg),32);
    bufp->fullIData(oldp+51,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg),32);
    bufp->fullIData(oldp+52,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg),32);
    bufp->fullIData(oldp+53,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg),32);
    bufp->fullSData(oldp+54,((0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)),10);
    bufp->fullBit(oldp+55,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__instr_retired_wb_pipe_reg));
    bufp->fullIData(oldp+56,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg),32);
    bufp->fullIData(oldp+57,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg),32);
    bufp->fullBit(oldp+58,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg));
    bufp->fullCData(oldp+59,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg),2);
    bufp->fullBit(oldp+60,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg));
    bufp->fullIData(oldp+61,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg),32);
    bufp->fullIData(oldp+62,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg),32);
    bufp->fullBit(oldp+63,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg));
    bufp->fullIData(oldp+64,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg),32);
    bufp->fullCData(oldp+65,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg),2);
    bufp->fullIData(oldp+66,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg),32);
    bufp->fullIData(oldp+67,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg),32);
    bufp->fullIData(oldp+68,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg),32);
    bufp->fullCData(oldp+69,((0xfU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg)),4);
    bufp->fullBit(oldp+70,((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg)));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 1U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 2U))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 3U))));
    bufp->fullCData(oldp+74,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 4U))),4);
    bufp->fullBit(oldp+75,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 4U))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 5U))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 6U))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 7U))));
    bufp->fullCData(oldp+79,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 8U))),4);
    bufp->fullBit(oldp+80,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 8U))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 9U))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xaU))));
    bufp->fullBit(oldp+83,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xbU))));
    bufp->fullCData(oldp+84,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0xcU))),4);
    bufp->fullBit(oldp+85,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xcU))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xdU))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xeU))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0xfU))));
    bufp->fullCData(oldp+89,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+90,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x10U))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x11U))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x12U))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x13U))));
    bufp->fullCData(oldp+94,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x14U))),4);
    bufp->fullBit(oldp+95,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x14U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x15U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x16U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x17U))));
    bufp->fullCData(oldp+99,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x18U))),4);
    bufp->fullBit(oldp+100,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x18U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x19U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x1bU))));
    bufp->fullCData(oldp+104,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+105,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+108,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                             >> 0x1fU)));
    bufp->fullBit(oldp+109,((1U & (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                    >> 0x1fU) | (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                   | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3))))));
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                   ^ (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                        & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                       >> 0x1fU) | 
                                      (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                        >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))))));
    bufp->fullCData(oldp+111,(((0x80U & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                          << 7U) ^ 
                                         (0x80U & (
                                                   ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                     & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                                    >> 0x18U) 
                                                   | (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                        | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                                         << 7U)))))) 
                               | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3)) 
                                   << 6U) | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                               ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3)) 
                                              << 5U) 
                                             | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                                  ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3)) 
                                                 << 4U) 
                                                | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                     ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3)) 
                                                    << 3U) 
                                                   | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                        ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3)) 
                                                       << 2U) 
                                                      | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                           ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                                            ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3)))))))))),8);
    bufp->fullCData(oldp+112,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | (1U & 
                                              ((~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)) 
                                               & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                  | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex))))))),4);
    bufp->fullCData(oldp+113,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                               | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)))))),4);
    bufp->fullBit(oldp+114,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                   | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex))));
    bufp->fullBit(oldp+115,((1U & ((~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)) 
                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)))));
    bufp->fullCData(oldp+116,(((8U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                       & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                      >> 0x1cU)) | 
                               (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4) 
                                 << 2U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+117,(((8U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                       | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                      >> 0x1cU)) | 
                               (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 << 2U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullBit(oldp+118,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                              & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+119,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                              | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+120,((1U & (~ ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                       & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+121,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg));
    bufp->fullCData(oldp+122,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg),7);
    bufp->fullBit(oldp+123,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg));
    bufp->fullCData(oldp+124,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg),2);
    bufp->fullBit(oldp+125,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg));
    bufp->fullCData(oldp+126,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg),6);
    bufp->fullBit(oldp+127,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg) 
                             & (3U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg)))));
    bufp->fullBit(oldp+128,((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))));
    bufp->fullCData(oldp+129,((7U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+130,((3U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                     >> 1U))),2);
    bufp->fullIData(oldp+131,((((0U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                | (1U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))
                                ? vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum
                                : (((2U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                    | ((4U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                       | (6U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))))
                                    ? vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res
                                    : (((8U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                        | ((0x10U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                           | ((0x18U 
                                               == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                              | (0x20U 
                                                 == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))))
                                        ? ((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                            ? ((0x10U 
                                                & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                    ^ vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)))
                                            : ((0x10U 
                                                & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                     | vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                                    : 
                                                   (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                    & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 
                                                   (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                    | vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)
                                                    : 0U)))
                                        : (((0x31U 
                                             == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                            | (0x11U 
                                               == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))
                                            ? (IData)(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res)
                                            : ((0x29U 
                                                == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                ? (IData)(vlSelf->top_tb__DOT__T1__DOT__n_ex_mem)
                                                : 0U)))))),32);
    bufp->fullIData(oldp+132,(((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                ? ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                    ? 0U : ((8U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                             ? 0U : 
                                            (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
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
                                        : 0U)))),32);
    bufp->fullCData(oldp+133,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | (1U & 
                                              ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))) 
                                               & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2)))))))),4);
    bufp->fullCData(oldp+134,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))))),4);
    bufp->fullBit(oldp+135,((1U & ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))) 
                                   & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+138,((1U & (~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+139,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg));
    bufp->fullCData(oldp+140,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg),5);
    bufp->fullBit(oldp+141,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg));
    bufp->fullCData(oldp+142,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg),5);
    bufp->fullIData(oldp+143,(vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret),32);
    bufp->fullIData(oldp+144,(vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem),32);
    bufp->fullIData(oldp+145,(vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem),32);
    bufp->fullIData(oldp+146,(vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem),32);
    bufp->fullBit(oldp+147,((1U & (~ (IData)((0U != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum))))));
    bufp->fullBit(oldp+148,(vlSelf->top_tb__DOT__T1__DOT__n_ex_mem));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag));
    bufp->fullIData(oldp+150,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum),32);
    bufp->fullBit(oldp+152,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4) 
                             | ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))));
    bufp->fullIData(oldp+153,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res),32);
    bufp->fullBit(oldp+154,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res));
    bufp->fullCData(oldp+155,((0x1fU & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)),5);
    bufp->fullIData(oldp+156,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits),32);
    bufp->fullCData(oldp+157,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                           << 5U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3)))))))),7);
    bufp->fullCData(oldp+158,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag) 
                                << 7U) | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                            ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3)) 
                                           << 6U) | 
                                          ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3)) 
                                            << 5U) 
                                           | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3)) 
                                               << 4U) 
                                              | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                   ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                      ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3)) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                         ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                                          ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3)))))))))),8);
    bufp->fullCData(oldp+159,((0xfU & vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem)),4);
    bufp->fullCData(oldp+160,((0xfU & vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu)),4);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3));
    bufp->fullBit(oldp+162,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3))));
    bufp->fullCData(oldp+163,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+164,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullBit(oldp+165,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+166,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+167,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+168,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+169,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+170,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+174,((1U & vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem)));
    bufp->fullBit(oldp+175,((1U & vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu)));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+180,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 1U))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 1U))));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+184,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+185,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+187,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+189,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+190,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 2U))));
    bufp->fullBit(oldp+191,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 2U))));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+194,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+195,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+197,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+199,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+200,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 3U))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 3U))));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+204,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+205,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+207,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+209,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+210,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 4U))),4);
    bufp->fullCData(oldp+211,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 4U))),4);
    bufp->fullCData(oldp+212,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+213,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3));
    bufp->fullBit(oldp+214,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3))));
    bufp->fullCData(oldp+215,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+216,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+217,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3))))),4);
    bufp->fullBit(oldp+218,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+219,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+220,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+221,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+222,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+223,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+227,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 4U))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 4U))));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+231,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+232,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+234,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+236,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 5U))));
    bufp->fullBit(oldp+238,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 5U))));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+241,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+242,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+243,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+244,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+246,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+247,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 6U))));
    bufp->fullBit(oldp+248,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 6U))));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+251,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+252,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+254,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+256,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 7U))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 7U))));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+261,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+262,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+264,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+266,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+267,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 8U))),4);
    bufp->fullCData(oldp+268,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 8U))),4);
    bufp->fullCData(oldp+269,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3));
    bufp->fullBit(oldp+271,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3))));
    bufp->fullCData(oldp+272,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+273,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+274,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3))))),4);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+276,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+277,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+278,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+279,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+280,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 8U))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 8U))));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+288,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+289,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+291,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+293,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+294,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 9U))));
    bufp->fullBit(oldp+295,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 9U))));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+298,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+299,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+300,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+301,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+302,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+303,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+304,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xaU))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xaU))));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+308,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+309,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+311,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+313,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+314,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xbU))));
    bufp->fullBit(oldp+315,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xbU))));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+318,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+319,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+321,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+322,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+323,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+324,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+325,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+326,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+327,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3));
    bufp->fullBit(oldp+328,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3))));
    bufp->fullCData(oldp+329,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+330,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+331,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3))))),4);
    bufp->fullBit(oldp+332,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+333,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+334,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+335,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+336,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+337,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+341,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xcU))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xcU))));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+344,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+345,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+346,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+348,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+350,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+351,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xdU))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xdU))));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+355,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+356,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+358,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+360,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+361,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xeU))));
    bufp->fullBit(oldp+362,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xeU))));
    bufp->fullBit(oldp+363,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+364,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+365,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+366,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+368,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+370,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+371,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0xfU))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0xfU))));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+375,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+376,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+378,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+380,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+381,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+382,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+383,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+384,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3));
    bufp->fullBit(oldp+385,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3))));
    bufp->fullCData(oldp+386,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+387,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+388,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3))))),4);
    bufp->fullBit(oldp+389,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+390,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+391,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+392,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+393,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+394,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+396,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+397,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+398,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x10U))));
    bufp->fullBit(oldp+399,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x10U))));
    bufp->fullBit(oldp+400,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+401,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+402,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+403,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+404,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+405,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+407,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+408,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x11U))));
    bufp->fullBit(oldp+409,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x11U))));
    bufp->fullBit(oldp+410,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+411,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+412,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+413,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+414,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+415,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+417,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+418,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x12U))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x12U))));
    bufp->fullBit(oldp+420,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+421,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+422,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+423,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+424,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+425,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+427,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+428,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x13U))));
    bufp->fullBit(oldp+429,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x13U))));
    bufp->fullBit(oldp+430,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+431,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+432,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+433,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+434,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+435,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+437,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+438,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+439,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+440,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+441,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3));
    bufp->fullBit(oldp+442,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3))));
    bufp->fullCData(oldp+443,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+444,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+445,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3))))),4);
    bufp->fullBit(oldp+446,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+447,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+448,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+449,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+450,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+451,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+452,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+454,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+455,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x14U))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x14U))));
    bufp->fullBit(oldp+457,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+458,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+459,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+460,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+462,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+464,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+465,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x15U))));
    bufp->fullBit(oldp+466,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x15U))));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+468,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+469,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+470,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+471,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+472,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+474,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+475,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x16U))));
    bufp->fullBit(oldp+476,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x16U))));
    bufp->fullBit(oldp+477,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+479,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+480,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+481,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+482,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+484,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+485,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x17U))));
    bufp->fullBit(oldp+486,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x17U))));
    bufp->fullBit(oldp+487,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+488,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+489,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+490,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+491,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+492,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+494,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+495,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+496,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+497,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+498,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3));
    bufp->fullBit(oldp+499,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3))));
    bufp->fullCData(oldp+500,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+501,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+502,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3))))),4);
    bufp->fullBit(oldp+503,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+504,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+505,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+506,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+507,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+508,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+509,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+512,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x18U))));
    bufp->fullBit(oldp+513,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x18U))));
    bufp->fullBit(oldp+514,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+515,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+516,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+517,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+519,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+521,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+522,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x19U))));
    bufp->fullBit(oldp+523,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x19U))));
    bufp->fullBit(oldp+524,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+525,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+526,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+527,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+529,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+530,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+531,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+532,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+533,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+534,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+535,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+536,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+537,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+539,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+541,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+542,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+543,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+544,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+545,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+546,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+547,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+548,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+549,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+550,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+551,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+552,((vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+553,((vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+554,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullCData(oldp+555,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+556,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+557,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3))))),4);
    bufp->fullBit(oldp+558,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+559,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+560,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+561,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+562,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+563,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+565,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+566,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+567,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+568,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+571,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+572,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+574,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+576,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+577,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+578,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+579,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+580,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+581,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+582,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+584,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+586,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+587,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+588,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+589,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+590,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+591,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+592,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+593,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+594,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+595,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+596,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+597,((vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                             >> 0x1fU)));
    bufp->fullBit(oldp+598,((vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                             >> 0x1fU)));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+600,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+601,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+602,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+603,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+604,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+606,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullIData(oldp+607,(vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg),32);
    bufp->fullCData(oldp+608,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                        >> 7U))),5);
    bufp->fullCData(oldp+609,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+610,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+611,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3))));
    bufp->fullIData(oldp+612,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg),32);
    bufp->fullCData(oldp+613,((7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+614,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+615,((0x7fU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)),7);
    bufp->fullSData(oldp+616,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+617,(((0xfe0U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+618,(((0x800U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+619,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+620,(((0x80000U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                  >> 0x15U)))))),20);
    bufp->fullSData(oldp+621,((0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),10);
    bufp->fullCData(oldp+622,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl),4);
    bufp->fullCData(oldp+623,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl),5);
    bufp->fullIData(oldp+624,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                - (IData)(0x2000U)) 
                               >> 2U)),32);
    bufp->fullBit(oldp+625,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                             ^ ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))));
    bufp->fullCData(oldp+626,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                           << 5U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3)))))))),7);
    bufp->fullCData(oldp+627,(((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 << 7U) ^ (0x80U & 
                                           ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x18U) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                               << 7U)))) 
                               | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3)) 
                                   << 6U) | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                               ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3)) 
                                              << 5U) 
                                             | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                                  ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3)) 
                                                 << 4U) 
                                                | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                     ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3)) 
                                                    << 3U) 
                                                   | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                        ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3)) 
                                                       << 2U) 
                                                      | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                           ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3)) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                                >> 2U) 
                                                               ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3))))))))))),8);
    bufp->fullCData(oldp+628,((0xfU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),4);
    bufp->fullCData(oldp+629,(((8U & (((~ (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                       & (IData)((0U 
                                                  != 
                                                  (0xcU 
                                                   & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                      << 3U)) | ((4U 
                                                  & ((~ 
                                                      (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 2U)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))),4);
    bufp->fullBit(oldp+630,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3));
    bufp->fullBit(oldp+631,((1U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                    >> 2U) ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3)))));
    bufp->fullCData(oldp+632,((4U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),4);
    bufp->fullCData(oldp+633,((4U | (0xbU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))),4);
    bufp->fullCData(oldp+634,((8U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                     << 1U))),4);
    bufp->fullBit(oldp+635,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 2U))));
    bufp->fullBit(oldp+636,((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)));
    bufp->fullBit(oldp+637,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 1U))));
    bufp->fullBit(oldp+638,((1U & (~ (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 2U)))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 3U))));
    bufp->fullBit(oldp+640,((1U & ((~ (IData)((0xcU 
                                               == (0xcU 
                                                   & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                   & (IData)((0U != 
                                              (0xcU 
                                               & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))))));
    bufp->fullBit(oldp+641,((IData)((0U != (0xcU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))));
    bufp->fullBit(oldp+642,((IData)((0xcU == (0xcU 
                                              & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))));
    bufp->fullBit(oldp+643,((1U & (~ (IData)((0xcU 
                                              == (0xcU 
                                                  & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))))));
    bufp->fullCData(oldp+644,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 4U))),4);
    bufp->fullCData(oldp+645,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 7U))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xffffff8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 4U))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 6U))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xffffffcU 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 4U))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 5U))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xffffffeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 4U))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 4U))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 4U)))))))),4);
    bufp->fullBit(oldp+646,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3));
    bufp->fullBit(oldp+647,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3))));
    bufp->fullCData(oldp+648,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3))))),4);
    bufp->fullBit(oldp+649,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+650,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 5U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+651,(((IData)((0x60U == (0x60U 
                                                & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+652,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+653,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+654,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+655,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 4U))));
    bufp->fullBit(oldp+656,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 4U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 4U))))));
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 4U)))));
    bufp->fullBit(oldp+658,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 4U))));
    bufp->fullBit(oldp+659,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 4U))))));
    bufp->fullBit(oldp+660,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 5U))));
    bufp->fullBit(oldp+661,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 5U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 5U))))));
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 5U)))));
    bufp->fullBit(oldp+663,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 5U))));
    bufp->fullBit(oldp+664,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 5U))))));
    bufp->fullBit(oldp+665,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 6U))));
    bufp->fullBit(oldp+666,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 6U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 6U))))));
    bufp->fullBit(oldp+667,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 6U)))));
    bufp->fullBit(oldp+668,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 6U))));
    bufp->fullBit(oldp+669,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 6U))))));
    bufp->fullBit(oldp+670,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 7U))));
    bufp->fullBit(oldp+671,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 7U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 7U))))));
    bufp->fullBit(oldp+672,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 7U)))));
    bufp->fullBit(oldp+673,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 7U))));
    bufp->fullBit(oldp+674,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 7U))))));
    bufp->fullCData(oldp+675,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 8U))),4);
    bufp->fullCData(oldp+676,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0xbU))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xfffff8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 8U))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0xaU))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xfffffcU 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 8U))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 9U))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xfffffeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 8U))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 8U))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 8U)))))))),4);
    bufp->fullBit(oldp+677,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3));
    bufp->fullBit(oldp+678,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3))));
    bufp->fullCData(oldp+679,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3))))),4);
    bufp->fullBit(oldp+680,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+681,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 9U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+682,(((IData)((0x600U == (0x600U 
                                                 & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+683,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+686,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 8U))));
    bufp->fullBit(oldp+687,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 8U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 8U))))));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 8U)))));
    bufp->fullBit(oldp+689,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 8U))));
    bufp->fullBit(oldp+690,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 8U))))));
    bufp->fullBit(oldp+691,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 9U))));
    bufp->fullBit(oldp+692,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 9U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 9U))))));
    bufp->fullBit(oldp+693,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 9U)))));
    bufp->fullBit(oldp+694,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 9U))));
    bufp->fullBit(oldp+695,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 9U))))));
    bufp->fullBit(oldp+696,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xaU))));
    bufp->fullBit(oldp+697,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xaU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xaU))))));
    bufp->fullBit(oldp+698,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+699,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xaU))));
    bufp->fullBit(oldp+700,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xaU))))));
    bufp->fullBit(oldp+701,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xbU))));
    bufp->fullBit(oldp+702,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xbU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xbU))))));
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+704,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xbU))));
    bufp->fullBit(oldp+705,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xbU))))));
    bufp->fullCData(oldp+706,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+707,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0xfU))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xffff8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0xcU))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0xeU))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xffffcU 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0xcU))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0xdU))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xffffeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0xcU))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0xcU))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0xcU)))))))),4);
    bufp->fullBit(oldp+708,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3));
    bufp->fullBit(oldp+709,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3))));
    bufp->fullCData(oldp+710,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3))))),4);
    bufp->fullBit(oldp+711,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+712,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0xdU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+713,(((IData)((0x6000U == (0x6000U 
                                                  & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+717,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xcU))));
    bufp->fullBit(oldp+718,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xcU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xcU))))));
    bufp->fullBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+720,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xcU))));
    bufp->fullBit(oldp+721,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xcU))))));
    bufp->fullBit(oldp+722,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xdU))));
    bufp->fullBit(oldp+723,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xdU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xdU))))));
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+725,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xdU))));
    bufp->fullBit(oldp+726,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xdU))))));
    bufp->fullBit(oldp+727,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xeU))));
    bufp->fullBit(oldp+728,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xeU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xeU))))));
    bufp->fullBit(oldp+729,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+730,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xeU))));
    bufp->fullBit(oldp+731,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xeU))))));
    bufp->fullBit(oldp+732,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xfU))));
    bufp->fullBit(oldp+733,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xfU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xfU))))));
    bufp->fullBit(oldp+734,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+735,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0xfU))));
    bufp->fullBit(oldp+736,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xfU))))));
    bufp->fullCData(oldp+737,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+738,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x13U))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xfff8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x10U))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x12U))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xfffcU 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x10U))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x11U))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xfffeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x10U))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x10U))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x10U)))))))),4);
    bufp->fullBit(oldp+739,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3));
    bufp->fullBit(oldp+740,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3))));
    bufp->fullCData(oldp+741,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3))))),4);
    bufp->fullBit(oldp+742,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+743,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0x11U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+744,(((IData)((0x60000U == (0x60000U 
                                                   & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+746,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+747,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+748,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x10U))));
    bufp->fullBit(oldp+749,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x10U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x10U))))));
    bufp->fullBit(oldp+750,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+751,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x10U))));
    bufp->fullBit(oldp+752,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x10U))))));
    bufp->fullBit(oldp+753,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x11U))));
    bufp->fullBit(oldp+754,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x11U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x11U))))));
    bufp->fullBit(oldp+755,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+756,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x11U))));
    bufp->fullBit(oldp+757,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x11U))))));
    bufp->fullBit(oldp+758,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x12U))));
    bufp->fullBit(oldp+759,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x12U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x12U))))));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+761,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x12U))));
    bufp->fullBit(oldp+762,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x12U))))));
    bufp->fullBit(oldp+763,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x13U))));
    bufp->fullBit(oldp+764,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x13U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x13U))))));
    bufp->fullBit(oldp+765,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+766,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x13U))));
    bufp->fullBit(oldp+767,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x13U))))));
    bufp->fullCData(oldp+768,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+769,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x17U))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xff8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x14U))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x16U))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xffcU & 
                                           (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x14U))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x15U))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xffeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x14U))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x14U))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x14U)))))))),4);
    bufp->fullBit(oldp+770,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3));
    bufp->fullBit(oldp+771,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3))));
    bufp->fullCData(oldp+772,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3))))),4);
    bufp->fullBit(oldp+773,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+774,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0x15U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+775,(((IData)((0x600000U == 
                                      (0x600000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+776,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+777,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+778,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+779,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x14U))));
    bufp->fullBit(oldp+780,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x14U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x14U))))));
    bufp->fullBit(oldp+781,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+782,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x14U))));
    bufp->fullBit(oldp+783,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x14U))))));
    bufp->fullBit(oldp+784,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x15U))));
    bufp->fullBit(oldp+785,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x15U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x15U))))));
    bufp->fullBit(oldp+786,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+787,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x15U))));
    bufp->fullBit(oldp+788,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x15U))))));
    bufp->fullBit(oldp+789,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x16U))));
    bufp->fullBit(oldp+790,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x16U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x16U))))));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+792,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x16U))));
    bufp->fullBit(oldp+793,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x16U))))));
    bufp->fullBit(oldp+794,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x17U))));
    bufp->fullBit(oldp+795,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x17U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x17U))))));
    bufp->fullBit(oldp+796,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+797,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x17U))));
    bufp->fullBit(oldp+798,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x17U))))));
    bufp->fullCData(oldp+799,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+800,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x1bU))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (0xf8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x18U))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1aU))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xfcU & 
                                           (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x18U))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x19U))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xfeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x18U))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x18U))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x18U)))))))),4);
    bufp->fullBit(oldp+801,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3));
    bufp->fullBit(oldp+802,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3))));
    bufp->fullCData(oldp+803,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3))))),4);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+805,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0x19U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+806,(((IData)((0x6000000U == 
                                      (0x6000000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+810,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x18U))));
    bufp->fullBit(oldp+811,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x18U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x18U))))));
    bufp->fullBit(oldp+812,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+813,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x18U))));
    bufp->fullBit(oldp+814,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x18U))))));
    bufp->fullBit(oldp+815,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x19U))));
    bufp->fullBit(oldp+816,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x19U))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x19U))))));
    bufp->fullBit(oldp+817,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+818,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x19U))));
    bufp->fullBit(oldp+819,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x19U))))));
    bufp->fullBit(oldp+820,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+821,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1aU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1aU))))));
    bufp->fullBit(oldp+822,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+823,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1aU))));
    bufp->fullBit(oldp+824,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1aU))))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+826,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1bU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1bU))))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+828,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1bU))));
    bufp->fullBit(oldp+829,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1bU))))));
    bufp->fullCData(oldp+830,((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+831,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x1fU))) 
                                       << 3U) & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                                  << 3U) 
                                                 | (8U 
                                                    & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x1cU))))) 
                               | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1eU))) 
                                          << 2U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (0xcU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                   >> 0x1cU))))) 
                                  | ((2U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x1dU))) 
                                             << 1U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                                << 1U) 
                                               | (0xeU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x1cU))))) 
                                     | (1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x1cU))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                                 | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x1cU)))))))),4);
    bufp->fullCData(oldp+832,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3))))),4);
    bufp->fullBit(oldp+833,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+834,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                              >> 0x1dU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+835,(((IData)((0x60000000U == 
                                      (0x60000000U 
                                       & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+839,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+840,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1cU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1cU))))));
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+842,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1cU))));
    bufp->fullBit(oldp+843,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1cU))))));
    bufp->fullBit(oldp+844,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+845,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1dU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1dU))))));
    bufp->fullBit(oldp+846,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+847,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1dU))));
    bufp->fullBit(oldp+848,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1dU))))));
    bufp->fullBit(oldp+849,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+850,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1eU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1eU))))));
    bufp->fullBit(oldp+851,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                   | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+852,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1eU))));
    bufp->fullBit(oldp+853,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1eU))))));
    bufp->fullBit(oldp+854,((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                             >> 0x1fU)));
    bufp->fullBit(oldp+855,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                       & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x1fU))) 
                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+856,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                             | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1fU))));
    bufp->fullBit(oldp+857,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                             & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1fU))));
    bufp->fullBit(oldp+858,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+859,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg));
    bufp->fullBit(oldp+860,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg));
    bufp->fullIData(oldp+861,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg),32);
    bufp->fullBit(oldp+862,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg));
    bufp->fullIData(oldp+863,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg),32);
    bufp->fullBit(oldp+864,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec));
    bufp->fullBit(oldp+865,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec));
    bufp->fullBit(oldp+866,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec));
    bufp->fullBit(oldp+867,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec));
    bufp->fullBit(oldp+868,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec));
    bufp->fullBit(oldp+869,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec));
    bufp->fullIData(oldp+870,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum),32);
    bufp->fullIData(oldp+871,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg),32);
    bufp->fullBit(oldp+872,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg));
    bufp->fullCData(oldp+873,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                     >> 0xfU))),2);
    bufp->fullBit(oldp+874,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                   >> 0xeU))));
    bufp->fullCData(oldp+875,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+876,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                     >> 0xaU))),2);
    bufp->fullBit(oldp+877,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                   >> 9U))));
    bufp->fullBit(oldp+878,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                   >> 8U))));
    bufp->fullBit(oldp+879,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                   >> 7U))));
    bufp->fullBit(oldp+880,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                   >> 6U))));
    bufp->fullCData(oldp+881,((0x3fU & vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls)),6);
    bufp->fullSData(oldp+882,(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss),12);
    bufp->fullIData(oldp+883,(vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss),20);
    bufp->fullIData(oldp+884,(vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm),32);
    bufp->fullIData(oldp+885,((((- (IData)((1U & (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                                  >> 0x13U)))) 
                                << 0x15U) | (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                             << 1U))),32);
    bufp->fullIData(oldp+886,(vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex),32);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum),32);
    bufp->fullIData(oldp+888,(((IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex)
                                ? 0U : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum)),32);
    bufp->fullBit(oldp+889,(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex));
    bufp->fullBit(oldp+890,(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex));
    bufp->fullIData(oldp+891,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls),17);
    bufp->fullCData(oldp+892,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                           << 5U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3)))))))),7);
    bufp->fullCData(oldp+893,((0xfU & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)),4);
    bufp->fullBit(oldp+894,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3));
    bufp->fullBit(oldp+895,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3))));
    bufp->fullCData(oldp+896,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+897,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                           << 1U)))),4);
    bufp->fullBit(oldp+898,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+899,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+900,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0)) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+901,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+902,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+903,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+904,((1U & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)));
    bufp->fullBit(oldp+905,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+906,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 1U))));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+908,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+909,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+910,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+911,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+912,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+913,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+914,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+915,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 2U))));
    bufp->fullBit(oldp+916,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+917,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+918,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+919,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+920,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+921,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+922,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+923,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+924,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 3U))));
    bufp->fullBit(oldp+925,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+926,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+927,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+928,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+930,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+931,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+932,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+933,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 4U))),4);
    bufp->fullCData(oldp+934,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+935,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3));
    bufp->fullBit(oldp+936,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3))));
    bufp->fullCData(oldp+937,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+938,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+939,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3))))),4);
    bufp->fullBit(oldp+940,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+941,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+942,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+943,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+944,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+945,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+946,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+947,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+948,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+949,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 4U))));
    bufp->fullBit(oldp+950,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+951,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+952,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+953,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+954,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+955,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+956,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+957,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+958,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 5U))));
    bufp->fullBit(oldp+959,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+960,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+961,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+962,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+963,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+964,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+965,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+966,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+967,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 6U))));
    bufp->fullBit(oldp+968,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+969,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+970,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+971,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+972,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+973,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+974,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+975,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+976,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 7U))));
    bufp->fullBit(oldp+977,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+978,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+979,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+980,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+981,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+982,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+983,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+984,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+985,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 8U))),4);
    bufp->fullCData(oldp+986,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                            & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                               | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                           << 2U) | 
                                          ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                            << 1U) 
                                           | ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+987,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3));
    bufp->fullBit(oldp+988,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                             ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3))));
    bufp->fullCData(oldp+989,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+990,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber5) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+991,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3))))),4);
    bufp->fullBit(oldp+992,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+993,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+994,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+995,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+996,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+997,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                             & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+998,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+999,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1000,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1001,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 8U))));
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1004,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1005,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1007,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1008,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1009,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1010,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 9U))));
    bufp->fullBit(oldp+1011,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1012,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1013,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1014,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1015,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1016,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1017,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1018,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1019,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1022,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1023,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1024,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1025,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1026,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1027,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1028,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1029,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+1031,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1032,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1034,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1035,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+1036,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+1037,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+1038,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                 << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                            << 2U) 
                                           | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                               << 1U) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+1039,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3));
    bufp->fullBit(oldp+1040,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                              ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3))));
    bufp->fullCData(oldp+1041,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+1042,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber5) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+1043,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3))))),4);
    bufp->fullBit(oldp+1044,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+1045,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1046,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1047,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+1048,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1049,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1050,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+1051,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1052,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1053,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1054,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1055,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1056,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1057,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1058,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1059,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1060,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1061,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1062,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1063,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1064,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1065,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1066,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1067,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1068,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1069,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1070,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1071,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1072,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1073,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1074,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1075,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1076,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1077,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1078,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1079,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1080,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1081,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+1083,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1084,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1086,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1087,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+1088,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+1089,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                        >> 0x10U))),4);
    bufp->fullCData(oldp+1090,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                 << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                            << 2U) 
                                           | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                               << 1U) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+1091,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3));
    bufp->fullBit(oldp+1092,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                              ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3))));
    bufp->fullCData(oldp+1093,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+1094,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber5) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+1095,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3))))),4);
    bufp->fullBit(oldp+1096,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+1097,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1098,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1099,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+1100,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1101,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1102,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1104,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1105,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1106,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1107,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1108,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1109,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1111,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1112,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1113,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1114,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1115,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1116,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1117,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1118,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1119,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1120,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1121,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1122,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1123,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1124,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1126,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1127,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1128,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1129,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1130,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1131,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1132,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+1134,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+1135,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1136,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1138,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1139,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+1140,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+1141,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1142,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                 << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                            << 2U) 
                                           | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                               << 1U) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+1143,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3));
    bufp->fullBit(oldp+1144,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                              ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3))));
    bufp->fullCData(oldp+1145,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+1146,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber5) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+1147,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3))))),4);
    bufp->fullBit(oldp+1148,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+1149,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1150,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1151,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+1152,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1153,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1154,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+1155,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1156,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1157,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1158,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1160,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1161,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1162,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1163,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1164,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1165,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1166,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1167,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1168,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1169,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1170,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1171,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1172,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1173,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1174,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1175,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1176,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1177,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1178,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1179,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1180,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1181,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1182,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1183,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1184,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1185,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+1186,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+1187,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1188,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1189,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1190,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1191,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+1192,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+1193,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                        >> 0x18U))),4);
    bufp->fullCData(oldp+1194,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                 << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                            << 2U) 
                                           | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                               << 1U) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullBit(oldp+1195,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3));
    bufp->fullBit(oldp+1196,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                              ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3))));
    bufp->fullCData(oldp+1197,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
    bufp->fullCData(oldp+1198,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber5) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA0____pinNumber5))))),4);
    bufp->fullCData(oldp+1199,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3))))),4);
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+1201,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1202,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1203,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+1204,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1205,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1206,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+1207,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1208,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1209,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1210,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1211,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1212,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1213,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1214,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1215,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1216,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1217,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1218,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1219,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1220,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1221,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1222,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1223,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1224,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1225,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1226,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1227,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1228,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1229,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1230,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1231,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1232,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1233,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1234,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1235,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1236,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1237,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4));
    bufp->fullBit(oldp+1238,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber5));
    bufp->fullBit(oldp+1239,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1240,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1241,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1242,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1243,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4)))));
    bufp->fullBit(oldp+1244,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullCData(oldp+1245,((vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                >> 0x1cU)),4);
    bufp->fullCData(oldp+1246,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                      & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                 << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                             & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                            << 2U) 
                                           | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                               << 1U) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))))),4);
    bufp->fullCData(oldp+1247,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3))))),4);
    bufp->fullBit(oldp+1248,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
    bufp->fullBit(oldp+1249,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1250,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1251,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
    bufp->fullBit(oldp+1252,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
    bufp->fullBit(oldp+1253,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
    bufp->fullBit(oldp+1254,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1));
    bufp->fullBit(oldp+1255,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
    bufp->fullBit(oldp+1256,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
    bufp->fullBit(oldp+1257,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1258,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
    bufp->fullBit(oldp+1259,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA0____pinNumber5));
    bufp->fullBit(oldp+1260,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2)))));
    bufp->fullBit(oldp+1261,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1262,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2));
    bufp->fullBit(oldp+1263,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
    bufp->fullBit(oldp+1264,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
    bufp->fullBit(oldp+1265,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))));
    bufp->fullBit(oldp+1266,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1267,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
    bufp->fullBit(oldp+1268,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
    bufp->fullBit(oldp+1269,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2)))));
    bufp->fullBit(oldp+1270,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1271,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2));
    bufp->fullBit(oldp+1272,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
    bufp->fullBit(oldp+1273,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
    bufp->fullBit(oldp+1274,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))))));
    bufp->fullBit(oldp+1275,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1276,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4));
    bufp->fullBit(oldp+1277,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
    bufp->fullBit(oldp+1278,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2)))));
    bufp->fullBit(oldp+1279,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1280,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2));
    bufp->fullBit(oldp+1281,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
    bufp->fullBit(oldp+1282,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4)))));
    bufp->fullBit(oldp+1283,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))))));
    bufp->fullBit(oldp+1284,((vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1285,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                  & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                              & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2)))));
    bufp->fullBit(oldp+1286,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                              | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1287,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2));
    bufp->fullBit(oldp+1288,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                              & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
    bufp->fullBit(oldp+1289,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                       & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))))));
    bufp->fullIData(oldp+1290,(vlSelf->top_tb__DOT__T1__DOT__next_pred_pc_fetch_iss),32);
    bufp->fullBit(oldp+1291,(vlSelf->top_tb__DOT__T1__DOT__brn_pred_fetch_iss));
    bufp->fullBit(oldp+1292,(vlSelf->top_tb__DOT__T1__DOT__flush_ex));
    bufp->fullBit(oldp+1293,(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex));
    bufp->fullBit(oldp+1294,(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem));
    bufp->fullBit(oldp+1295,(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex));
    bufp->fullCData(oldp+1296,(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits),2);
    bufp->fullBit(oldp+1297,(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr));
    bufp->fullBit(oldp+1298,(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr));
    bufp->fullBit(oldp+1299,(vlSelf->master_clk));
    bufp->fullBit(oldp+1300,(vlSelf->top_tb__DOT__reset_tb));
    bufp->fullIData(oldp+1301,(vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem
                               [(0x7ffU & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            - (IData)(0x2000U)) 
                                           >> 2U))]),32);
    bufp->fullIData(oldp+1302,((((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
                                 & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg)) 
                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex)))
                                 ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg
                                 : (((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex)) 
                                     & ((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg)) 
                                        & (IData)(vlSelf->top_tb__DOT__T1__DOT__brn_pred_fetch_iss)))
                                     ? vlSelf->top_tb__DOT__T1__DOT__next_pred_pc_fetch_iss
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
                                                 ? 
                                                ((IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex)
                                                  ? 0U
                                                  : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum)
                                                 : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum)))))),32);
    bufp->fullIData(oldp+1303,((((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
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
                                         : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum)))),32);
    bufp->fullBit(oldp+1304,(((~ (IData)(vlSelf->top_tb__DOT__reset_tb)) 
                              & ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec) 
                                 | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec) 
                                    | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec) 
                                       | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec) 
                                          | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec) 
                                             | (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec)))))))));
    bufp->fullBit(oldp+1305,(((IData)(vlSelf->top_tb__DOT__T1__DOT__flush_ex) 
                              | (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex))));
    bufp->fullBit(oldp+1306,(((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
                              & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex))));
    bufp->fullIData(oldp+1307,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p1),32);
    bufp->fullIData(oldp+1308,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p2),32);
    bufp->fullCData(oldp+1309,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg),5);
    bufp->fullIData(oldp+1310,(((IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)
                                 ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg)
                                     ? vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb
                                     : vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg)
                                 : (((~ (IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)) 
                                     & ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                        & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                                           == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))))
                                     ? vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret
                                     : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg))),32);
    bufp->fullCData(oldp+1311,(((IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)
                                 ? 2U : (((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                          & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                                             == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg)))
                                          ? 1U : 0U))),2);
    bufp->fullCData(oldp+1312,(((IData)(vlSelf->__VdfgTmp_hbfa43bc6__0)
                                 ? 2U : (((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                          & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg) 
                                             == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg)))
                                          ? 1U : 0U))),2);
    bufp->fullBit(oldp+1313,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
                              & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex))));
    bufp->fullIData(oldp+1314,(((IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex)
                                 ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg
                                 : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg)),32);
    bufp->fullIData(oldp+1315,(vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb),32);
    bufp->fullBit(oldp+1316,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg));
    bufp->fullCData(oldp+1317,(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                               [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)]),2);
    bufp->fullIData(oldp+1318,(vlSelf->top_tb__DOT__pc_iss),32);
    bufp->fullIData(oldp+1319,(vlSelf->top_tb__DOT__instr_iss),32);
    bufp->fullIData(oldp+1320,(vlSelf->top_tb__DOT__pc_ex),32);
    bufp->fullIData(oldp+1321,(vlSelf->top_tb__DOT__instr_ex),32);
    bufp->fullBit(oldp+1322,(vlSelf->top_tb__DOT__is_r_type_ex));
    bufp->fullBit(oldp+1323,(vlSelf->top_tb__DOT__is_i_type_ex));
    bufp->fullBit(oldp+1324,(vlSelf->top_tb__DOT__is_s_type_ex));
    bufp->fullBit(oldp+1325,(vlSelf->top_tb__DOT__is_b_type_ex));
    bufp->fullBit(oldp+1326,(vlSelf->top_tb__DOT__is_u_type_ex));
    bufp->fullBit(oldp+1327,(vlSelf->top_tb__DOT__is_j_type_ex));
    bufp->fullCData(oldp+1328,(vlSelf->top_tb__DOT__rd_ex),5);
    bufp->fullCData(oldp+1329,(vlSelf->top_tb__DOT__rs1_ex),5);
    bufp->fullCData(oldp+1330,(vlSelf->top_tb__DOT__rs2_ex),5);
    bufp->fullIData(oldp+1331,(vlSelf->top_tb__DOT__rd_val_ex),32);
    bufp->fullIData(oldp+1332,(vlSelf->top_tb__DOT__rs1_val_ex),32);
    bufp->fullIData(oldp+1333,(vlSelf->top_tb__DOT__rs2_val_ex),32);
    bufp->fullIData(oldp+1334,(vlSelf->top_tb__DOT__pc_mem),32);
    bufp->fullIData(oldp+1335,(vlSelf->top_tb__DOT__instr_mem),32);
    bufp->fullBit(oldp+1336,(vlSelf->top_tb__DOT__is_r_type_mem));
    bufp->fullBit(oldp+1337,(vlSelf->top_tb__DOT__is_i_type_mem));
    bufp->fullBit(oldp+1338,(vlSelf->top_tb__DOT__is_s_type_mem));
    bufp->fullBit(oldp+1339,(vlSelf->top_tb__DOT__is_b_type_mem));
    bufp->fullBit(oldp+1340,(vlSelf->top_tb__DOT__is_u_type_mem));
    bufp->fullBit(oldp+1341,(vlSelf->top_tb__DOT__is_j_type_mem));
    bufp->fullCData(oldp+1342,(vlSelf->top_tb__DOT__rd_mem),5);
    bufp->fullCData(oldp+1343,(vlSelf->top_tb__DOT__rs1_mem),5);
    bufp->fullCData(oldp+1344,(vlSelf->top_tb__DOT__rs2_mem),5);
    bufp->fullIData(oldp+1345,(vlSelf->top_tb__DOT__rd_val_mem),32);
    bufp->fullIData(oldp+1346,(vlSelf->top_tb__DOT__rs1_val_mem),32);
    bufp->fullIData(oldp+1347,(vlSelf->top_tb__DOT__rs2_val_mem),32);
    bufp->fullIData(oldp+1348,(vlSelf->top_tb__DOT__pc_wb),32);
    bufp->fullIData(oldp+1349,(vlSelf->top_tb__DOT__instr_wb),32);
    bufp->fullBit(oldp+1350,(vlSelf->top_tb__DOT__is_r_type_wb));
    bufp->fullBit(oldp+1351,(vlSelf->top_tb__DOT__is_i_type_wb));
    bufp->fullBit(oldp+1352,(vlSelf->top_tb__DOT__is_s_type_wb));
    bufp->fullBit(oldp+1353,(vlSelf->top_tb__DOT__is_b_type_wb));
    bufp->fullBit(oldp+1354,(vlSelf->top_tb__DOT__is_u_type_wb));
    bufp->fullBit(oldp+1355,(vlSelf->top_tb__DOT__is_j_type_wb));
    bufp->fullCData(oldp+1356,(vlSelf->top_tb__DOT__rd_wb),5);
    bufp->fullCData(oldp+1357,(vlSelf->top_tb__DOT__rs1_wb),5);
    bufp->fullCData(oldp+1358,(vlSelf->top_tb__DOT__rs2_wb),5);
    bufp->fullIData(oldp+1359,(vlSelf->top_tb__DOT__instr_count),32);
    bufp->fullIData(oldp+1360,(0x2000U),32);
    bufp->fullIData(oldp+1361,(0x1fffU),32);
    bufp->fullBit(oldp+1362,(0U));
    bufp->fullBit(oldp+1363,(vlSelf->top_tb__DOT__T1__DOT__wa_sel_iss_ex));
    bufp->fullIData(oldp+1364,(0x400U),32);
    bufp->fullCData(oldp+1365,(0xfU),4);
    bufp->fullIData(oldp+1366,(0U),32);
    bufp->fullIData(oldp+1367,(0xffffffffU),32);
    bufp->fullBit(oldp+1368,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__clr));
    bufp->fullIData(oldp+1369,(vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_instr_imem_ram_i),32);
    bufp->fullBit(oldp+1370,(vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__wr_en_imem_ram_i));
    bufp->fullIData(oldp+1371,(4U),32);
    bufp->fullCData(oldp+1372,(4U),4);
    bufp->fullBit(oldp+1373,(0U));
    bufp->fullBit(oldp+1374,(1U));
    bufp->fullBit(oldp+1375,(1U));
    bufp->fullCData(oldp+1376,(0U),4);
}
