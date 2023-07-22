// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+0,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                               [vlSelf->top_tb__DOT__rd_wb]),32);
        bufp->chgIData(oldp+1,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                               [vlSelf->top_tb__DOT__rs1_wb]),32);
        bufp->chgIData(oldp+2,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file
                               [vlSelf->top_tb__DOT__rs2_wb]),32);
        bufp->chgIData(oldp+3,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+35,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__funct3_ex_pipe_reg),3);
        bufp->chgCData(oldp+36,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg),5);
        bufp->chgCData(oldp+37,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg),5);
        bufp->chgBit(oldp+38,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_r_type_ex_pipe_reg));
        bufp->chgBit(oldp+39,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_s_type_ex_pipe_reg));
        bufp->chgBit(oldp+40,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_u_type_ex_pipe_reg));
        bufp->chgBit(oldp+41,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_j_type_ex_pipe_reg));
        bufp->chgCData(oldp+42,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc_sel_ex_pipe_reg),2);
        bufp->chgBit(oldp+43,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op1sel_ex_pipe_reg));
        bufp->chgCData(oldp+44,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op2sel_ex_pipe_reg),2);
        bufp->chgBit(oldp+45,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__pc4_sel_ex_pipe_reg));
        bufp->chgBit(oldp+46,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__cpr_en_ex_pipe_reg));
        bufp->chgBit(oldp+47,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wa_sel_ex_pipe_reg));
        bufp->chgIData(oldp+48,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg),32);
        bufp->chgIData(oldp+49,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_pred_pc_ex_pipe_reg),32);
        bufp->chgIData(oldp+50,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__sext_imm_ex_pipe_reg),32);
        bufp->chgIData(oldp+51,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg),32);
        bufp->chgIData(oldp+52,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p2_ex_pipe_reg),32);
        bufp->chgSData(oldp+53,((0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+54,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__instr_retired_wb_pipe_reg));
        bufp->chgIData(oldp+55,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg),32);
        bufp->chgIData(oldp+56,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pred_pc_iss_pipe_reg),32);
        bufp->chgBit(oldp+57,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__valid_mem_pipe_reg));
        bufp->chgCData(oldp+58,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__wb_sel_mem_pipe_reg),2);
        bufp->chgBit(oldp+59,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__mem_wr_mem_pipe_reg));
        bufp->chgIData(oldp+60,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg),32);
        bufp->chgIData(oldp+61,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__next_seq_pc_mem_pipe_reg),32);
        bufp->chgBit(oldp+62,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg));
        bufp->chgIData(oldp+63,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__r_data_p2_mem_pipe_reg),32);
        bufp->chgCData(oldp+64,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__wb_sel_wb_pipe_reg),2);
        bufp->chgIData(oldp+65,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__alu_res_wb_pipe_reg),32);
        bufp->chgIData(oldp+66,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__read_data_wb_pipe_reg),32);
        bufp->chgIData(oldp+67,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__next_seq_pc_wb_pipe_reg),32);
        bufp->chgCData(oldp+68,((0xfU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg)),4);
        bufp->chgBit(oldp+69,((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg)));
        bufp->chgBit(oldp+70,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 2U))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 3U))));
        bufp->chgCData(oldp+73,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 4U))),4);
        bufp->chgBit(oldp+74,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 4U))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 5U))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 6U))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 7U))));
        bufp->chgCData(oldp+78,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 8U))),4);
        bufp->chgBit(oldp+79,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 8U))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 9U))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xaU))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xbU))));
        bufp->chgCData(oldp+83,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 0xcU))),4);
        bufp->chgBit(oldp+84,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xcU))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xdU))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xeU))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0xfU))));
        bufp->chgCData(oldp+88,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+89,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x10U))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x11U))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x12U))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x13U))));
        bufp->chgCData(oldp+93,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 0x14U))),4);
        bufp->chgBit(oldp+94,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x14U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x15U))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x16U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x17U))));
        bufp->chgCData(oldp+98,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         >> 0x18U))),4);
        bufp->chgBit(oldp+99,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                     >> 0x18U))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x19U))));
        bufp->chgBit(oldp+101,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+103,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+104,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+107,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                >> 0x1fU)));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+108,((1U & (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                        & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                       >> 0x1fU) | 
                                      (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                        >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3))))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                      ^ (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                           & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                          >> 0x1fU) 
                                         | (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                              | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                             >> 0x1fU) 
                                            & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))))));
        bufp->chgCData(oldp+110,(((0x80U & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                             << 7U) 
                                            ^ (0x80U 
                                               & (((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
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
        bufp->chgCData(oldp+111,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)) 
                                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                         | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex))))))),4);
        bufp->chgCData(oldp+112,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (1U 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                                      | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)))))),4);
        bufp->chgBit(oldp+113,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                      | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex))));
        bufp->chgBit(oldp+114,((1U & ((~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)) 
                                      & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                         | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)))));
        bufp->chgCData(oldp+115,(((8U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                          & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                         >> 0x1cU)) 
                                  | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4) 
                                      << 2U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+116,(((8U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                          | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                         >> 0x1cU)) 
                                  | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                      << 2U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgBit(oldp+117,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                 & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+118,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                 | vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+119,((1U & (~ ((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__curr_pc_iss_pipe_reg 
                                          & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex) 
                                         >> 0x1fU)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+120,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__valid_ex_pipe_reg));
        bufp->chgCData(oldp+121,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg),7);
        bufp->chgBit(oldp+122,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg));
        bufp->chgCData(oldp+123,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__wb_sel_ex_pipe_reg),2);
        bufp->chgBit(oldp+124,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__mem_wr_ex_pipe_reg));
        bufp->chgCData(oldp+125,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg),6);
        bufp->chgBit(oldp+126,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_i_type_ex_pipe_reg) 
                                & (3U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__op_ex_pipe_reg)))));
        bufp->chgBit(oldp+127,((1U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))));
        bufp->chgCData(oldp+128,((7U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+129,((3U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                        >> 1U))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+130,((((0U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                   | (1U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))
                                   ? vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum
                                   : (((2U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                       | ((4U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                          | (6U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))))
                                       ? vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res
                                       : (((8U == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                           | ((0x10U 
                                               == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                              | ((0x18U 
                                                  == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)) 
                                                 | (0x20U 
                                                    == (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                    ^ vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                     | vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                                    : 
                                                   (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                                    & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem))
                                                   : 
                                                  ((8U 
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
        bufp->chgIData(oldp+131,(((0x20U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                   ? ((0x10U & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                       ? 0U : ((8U 
                                                & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg))
                                                ? 0U
                                                : (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
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
        bufp->chgCData(oldp+132,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))) 
                                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                                         | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2)))))))),4);
        bufp->chgCData(oldp+133,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg)))))),4);
        bufp->chgBit(oldp+134,((1U & ((~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))) 
                                      & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                         | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+137,((1U & (~ ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__alu_fun_ex_pipe_reg) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+138,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rf_en_mem_pipe_reg));
        bufp->chgCData(oldp+139,(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__rd_mem_pipe_reg),5);
        bufp->chgBit(oldp+140,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rf_en_wb_pipe_reg));
        bufp->chgCData(oldp+141,(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg),5);
        bufp->chgIData(oldp+142,(vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+143,(vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem),32);
        bufp->chgIData(oldp+144,(vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem),32);
        bufp->chgIData(oldp+145,(vlSelf->top_tb__DOT__T1__DOT__r_data_p2_ex_mem),32);
        bufp->chgBit(oldp+146,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum))))));
        bufp->chgBit(oldp+147,(vlSelf->top_tb__DOT__T1__DOT__n_ex_mem));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag));
        bufp->chgIData(oldp+149,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.sum),32);
        bufp->chgBit(oldp+151,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4) 
                                | ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5) 
                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))));
        bufp->chgIData(oldp+152,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__shift_res),32);
        bufp->chgBit(oldp+153,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__C1__DOT__comp_res));
        bufp->chgCData(oldp+154,((0x1fU & vlSelf->top_tb__DOT__T1__DOT__r_data_p2_alu_ex_mem)),5);
        bufp->chgIData(oldp+155,(vlSelf->top_tb__DOT__T1__DOT__A1__DOT__S1__DOT__sign_bits),32);
        bufp->chgCData(oldp+156,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                   << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                              << 5U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                                 << 4U) 
                                                | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3)))))))),7);
        bufp->chgCData(oldp+157,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.v_flag) 
                                   << 7U) | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                               ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3)) 
                                              << 6U) 
                                             | ((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
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
        bufp->chgCData(oldp+158,((0xfU & vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem)),4);
        bufp->chgCData(oldp+159,((0xfU & vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu)),4);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3));
        bufp->chgBit(oldp+161,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3))));
        bufp->chgCData(oldp+162,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+163,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+165,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+167,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+168,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+169,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+173,((1U & vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem)));
        bufp->chgBit(oldp+174,((1U & vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu)));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+178,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+179,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 1U))));
        bufp->chgBit(oldp+180,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 1U))));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+183,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+184,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+186,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+188,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+189,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 2U))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 2U))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+193,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+194,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+196,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+197,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+198,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+199,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 3U))));
        bufp->chgBit(oldp+200,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 3U))));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+203,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+204,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+206,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+207,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA1__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+208,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+209,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 4U))),4);
        bufp->chgCData(oldp+210,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 4U))),4);
        bufp->chgCData(oldp+211,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+212,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3));
        bufp->chgBit(oldp+213,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3))));
        bufp->chgCData(oldp+214,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+215,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+216,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3))))),4);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+218,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+219,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+220,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+221,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+222,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+226,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 4U))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 4U))));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+230,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+231,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+233,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+235,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA2____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 5U))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 5U))));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+240,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+243,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+244,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+245,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+246,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 6U))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 6U))));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+250,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+251,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+253,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+255,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 7U))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 7U))));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+260,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+261,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+263,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+264,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA2__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+265,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+266,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 8U))),4);
        bufp->chgCData(oldp+267,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 8U))),4);
        bufp->chgCData(oldp+268,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3));
        bufp->chgBit(oldp+270,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3))));
        bufp->chgCData(oldp+271,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+272,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+273,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3))))),4);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+275,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+276,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+277,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+278,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+279,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+283,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 8U))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 8U))));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+287,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+288,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+290,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+291,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+292,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA3____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 9U))));
        bufp->chgBit(oldp+294,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 9U))));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+297,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+298,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+300,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+301,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+302,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+303,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xaU))));
        bufp->chgBit(oldp+304,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xaU))));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+307,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+308,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+310,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+311,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+312,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+313,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xbU))));
        bufp->chgBit(oldp+314,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xbU))));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+317,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+318,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+320,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+321,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA3__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+322,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+323,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+324,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+325,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3));
        bufp->chgBit(oldp+327,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3))));
        bufp->chgCData(oldp+328,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+329,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+330,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3))))),4);
        bufp->chgBit(oldp+331,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+332,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+333,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+334,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+335,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+336,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+340,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xcU))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xcU))));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+344,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+345,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+347,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+348,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+349,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA4____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xdU))));
        bufp->chgBit(oldp+351,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xdU))));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+354,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+355,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+357,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+358,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+359,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+360,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xeU))));
        bufp->chgBit(oldp+361,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xeU))));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+364,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+365,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+367,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+368,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+369,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0xfU))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0xfU))));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+374,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+375,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+377,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+378,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA4__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+379,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+380,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+381,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+382,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3));
        bufp->chgBit(oldp+384,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3))));
        bufp->chgCData(oldp+385,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+386,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+387,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3))))),4);
        bufp->chgBit(oldp+388,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+389,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+390,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+391,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+392,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+393,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+397,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x10U))));
        bufp->chgBit(oldp+398,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x10U))));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+401,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+402,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+404,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+405,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+406,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA5____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x11U))));
        bufp->chgBit(oldp+408,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x11U))));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+411,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+412,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+414,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+415,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+416,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x12U))));
        bufp->chgBit(oldp+418,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x12U))));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+421,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+422,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+424,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+425,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+426,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+427,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x13U))));
        bufp->chgBit(oldp+428,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x13U))));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+431,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+432,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+434,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA5__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+436,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+437,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+438,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+439,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+440,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3));
        bufp->chgBit(oldp+441,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3))));
        bufp->chgCData(oldp+442,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+443,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+444,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3))))),4);
        bufp->chgBit(oldp+445,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+446,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+447,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+448,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+449,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+450,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+454,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x14U))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x14U))));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+458,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+459,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+461,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+462,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+463,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA6____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x15U))));
        bufp->chgBit(oldp+465,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x15U))));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+468,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+469,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+471,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+472,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+473,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+474,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x16U))));
        bufp->chgBit(oldp+475,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x16U))));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+478,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+479,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+480,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+481,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+482,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+483,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+484,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x17U))));
        bufp->chgBit(oldp+485,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x17U))));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+487,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+488,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+489,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+491,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+492,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA6__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+493,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+494,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+495,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+496,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+497,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3));
        bufp->chgBit(oldp+498,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3))));
        bufp->chgCData(oldp+499,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+500,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+501,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3))))),4);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+503,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+504,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+505,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+506,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+507,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+511,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x18U))));
        bufp->chgBit(oldp+512,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x18U))));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+515,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+516,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+518,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+519,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+520,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA7____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+521,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x19U))));
        bufp->chgBit(oldp+522,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x19U))));
        bufp->chgBit(oldp+523,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+524,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+525,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+526,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+528,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+529,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+530,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+531,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+532,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+535,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+536,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+538,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+539,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+540,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+541,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+542,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+545,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+546,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+548,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+549,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA7__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+550,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+551,((vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+552,((vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+553,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgCData(oldp+554,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+555,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+556,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3))))),4);
        bufp->chgBit(oldp+557,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+558,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+559,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+560,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+561,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+562,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+566,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+567,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+570,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+571,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+573,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+574,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+575,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__Vcellinp__CLA8____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+576,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+577,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+579,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+580,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+581,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+583,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+584,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+585,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+586,((1U & (vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+587,((1U & (vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+590,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+591,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+593,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+594,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+595,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+596,((vlSelf->top_tb__DOT__T1__DOT__r_data_p1_alu_ex_mem 
                                >> 0x1fU)));
        bufp->chgBit(oldp+597,((vlSelf->top_tb__DOT__T1__DOT__A1__DOT__opr_b_negated_alu 
                                >> 0x1fU)));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+600,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+601,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+603,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+604,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.CLA8__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+605,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__A1__DOT__A1.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+606,(vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg),32);
        bufp->chgCData(oldp+607,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                           >> 7U))),5);
        bufp->chgCData(oldp+608,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+609,((0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+610,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3))));
        bufp->chgIData(oldp+611,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg),32);
        bufp->chgCData(oldp+612,((7U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+613,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+614,((0x7fU & vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg)),7);
        bufp->chgSData(oldp+615,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+616,(((0xfe0U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+617,(((0x800U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+618,((vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+619,(((0x80000U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__instr_iss_pipe_reg 
                                            >> 0x15U)))))),20);
        bufp->chgSData(oldp+620,((0x3ffU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),10);
        bufp->chgCData(oldp+621,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_funct_ctl),4);
        bufp->chgCData(oldp+622,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__instr_opc_ctl),5);
        bufp->chgIData(oldp+623,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   - (IData)(0x2000U)) 
                                  >> 2U)),32);
        bufp->chgBit(oldp+624,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                ^ ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                    >> 0x1fU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3)))));
        bufp->chgCData(oldp+625,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                   << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                              << 5U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                                 << 4U) 
                                                | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3)))))))),7);
        bufp->chgCData(oldp+626,(((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                    << 7U) ^ (0x80U 
                                              & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
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
        bufp->chgCData(oldp+627,((0xfU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),4);
        bufp->chgCData(oldp+628,(((8U & (((~ (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                          & (IData)(
                                                    (0U 
                                                     != 
                                                     (0xcU 
                                                      & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                         << 3U)) | 
                                  ((4U & ((~ (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 2U)) 
                                          << 2U)) | 
                                   (3U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))),4);
        bufp->chgBit(oldp+629,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3));
        bufp->chgBit(oldp+630,((1U & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                       >> 2U) ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3)))));
        bufp->chgCData(oldp+631,((4U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)),4);
        bufp->chgCData(oldp+632,((4U | (0xbU & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))),4);
        bufp->chgCData(oldp+633,((8U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                        << 1U))),4);
        bufp->chgBit(oldp+634,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 2U))));
        bufp->chgBit(oldp+635,((1U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)));
        bufp->chgBit(oldp+636,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 1U))));
        bufp->chgBit(oldp+637,((1U & (~ (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 2U)))));
        bufp->chgBit(oldp+638,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 3U))));
        bufp->chgBit(oldp+639,((1U & ((~ (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))) 
                                      & (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))))));
        bufp->chgBit(oldp+640,((IData)((0U != (0xcU 
                                               & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))));
        bufp->chgBit(oldp+641,((IData)((0xcU == (0xcU 
                                                 & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))));
        bufp->chgBit(oldp+642,((1U & (~ (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg)))))));
        bufp->chgCData(oldp+643,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 4U))),4);
        bufp->chgCData(oldp+644,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 7U))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xffffff8U 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 4U))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 6U))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xffffffcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 4U))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 5U))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xffffffeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 4U))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 4U))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 4U)))))))),4);
        bufp->chgBit(oldp+645,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3));
        bufp->chgBit(oldp+646,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3))));
        bufp->chgCData(oldp+647,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3))))),4);
        bufp->chgBit(oldp+648,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+649,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 5U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+650,(((IData)((0x60U == (0x60U 
                                                   & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+654,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 4U))));
        bufp->chgBit(oldp+655,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 4U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 4U))))));
        bufp->chgBit(oldp+656,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 4U)))));
        bufp->chgBit(oldp+657,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 4U))));
        bufp->chgBit(oldp+658,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA2____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 4U))))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 5U))));
        bufp->chgBit(oldp+660,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 5U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 5U))))));
        bufp->chgBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 5U)))));
        bufp->chgBit(oldp+662,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 5U))));
        bufp->chgBit(oldp+663,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 5U))))));
        bufp->chgBit(oldp+664,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 6U))));
        bufp->chgBit(oldp+665,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 6U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 6U))))));
        bufp->chgBit(oldp+666,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 6U)))));
        bufp->chgBit(oldp+667,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 6U))));
        bufp->chgBit(oldp+668,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 6U))))));
        bufp->chgBit(oldp+669,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 7U))));
        bufp->chgBit(oldp+670,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 7U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 7U))))));
        bufp->chgBit(oldp+671,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 7U)))));
        bufp->chgBit(oldp+672,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 7U))));
        bufp->chgBit(oldp+673,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 7U))))));
        bufp->chgCData(oldp+674,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 8U))),4);
        bufp->chgCData(oldp+675,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0xbU))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xfffff8U 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 8U))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0xaU))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xfffffcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 8U))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 9U))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xfffffeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 8U))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 8U))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 8U)))))))),4);
        bufp->chgBit(oldp+676,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3));
        bufp->chgBit(oldp+677,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3))));
        bufp->chgCData(oldp+678,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3))))),4);
        bufp->chgBit(oldp+679,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+680,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 9U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+681,(((IData)((0x600U == 
                                         (0x600U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+684,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+685,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 8U))));
        bufp->chgBit(oldp+686,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 8U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 8U))))));
        bufp->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 8U)))));
        bufp->chgBit(oldp+688,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 8U))));
        bufp->chgBit(oldp+689,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA3____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 8U))))));
        bufp->chgBit(oldp+690,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 9U))));
        bufp->chgBit(oldp+691,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 9U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 9U))))));
        bufp->chgBit(oldp+692,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 9U)))));
        bufp->chgBit(oldp+693,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 9U))));
        bufp->chgBit(oldp+694,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 9U))))));
        bufp->chgBit(oldp+695,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xaU))));
        bufp->chgBit(oldp+696,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xaU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+697,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+698,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xaU))));
        bufp->chgBit(oldp+699,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+700,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xbU))));
        bufp->chgBit(oldp+701,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xbU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+702,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+703,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xbU))));
        bufp->chgBit(oldp+704,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xbU))))));
        bufp->chgCData(oldp+705,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+706,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0xfU))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xffff8U 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0xcU))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0xeU))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xffffcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0xcU))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0xdU))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xffffeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0xcU))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0xcU))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0xcU)))))))),4);
        bufp->chgBit(oldp+707,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3));
        bufp->chgBit(oldp+708,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3))));
        bufp->chgCData(oldp+709,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3))))),4);
        bufp->chgBit(oldp+710,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+711,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0xdU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+712,(((IData)((0x6000U == 
                                         (0x6000U & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+716,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xcU))));
        bufp->chgBit(oldp+717,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xcU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+718,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+719,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xcU))));
        bufp->chgBit(oldp+720,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA4____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+721,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xdU))));
        bufp->chgBit(oldp+722,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xdU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+723,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+724,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xdU))));
        bufp->chgBit(oldp+725,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+726,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xeU))));
        bufp->chgBit(oldp+727,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xeU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+728,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+729,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xeU))));
        bufp->chgBit(oldp+730,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+731,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0xfU))));
        bufp->chgBit(oldp+732,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0xfU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+733,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+734,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0xfU))));
        bufp->chgBit(oldp+735,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0xfU))))));
        bufp->chgCData(oldp+736,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+737,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x13U))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xfff8U 
                                           & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                              >> 0x10U))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x12U))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xfffcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x10U))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x11U))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xfffeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0x10U))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x10U))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x10U)))))))),4);
        bufp->chgBit(oldp+738,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3));
        bufp->chgBit(oldp+739,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3))));
        bufp->chgCData(oldp+740,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3))))),4);
        bufp->chgBit(oldp+741,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+742,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x11U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+743,(((IData)((0x60000U == 
                                         (0x60000U 
                                          & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+747,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x10U))));
        bufp->chgBit(oldp+748,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x10U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+749,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+750,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x10U))));
        bufp->chgBit(oldp+751,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA5____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+752,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x11U))));
        bufp->chgBit(oldp+753,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x11U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+754,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+755,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x11U))));
        bufp->chgBit(oldp+756,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+757,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x12U))));
        bufp->chgBit(oldp+758,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x12U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+759,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+760,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x12U))));
        bufp->chgBit(oldp+761,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+762,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x13U))));
        bufp->chgBit(oldp+763,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x13U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+764,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+765,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x13U))));
        bufp->chgBit(oldp+766,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x13U))))));
        bufp->chgCData(oldp+767,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+768,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x17U))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xff8U & 
                                           (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x14U))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x16U))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xffcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x14U))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x15U))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xffeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0x14U))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x14U))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x14U)))))))),4);
        bufp->chgBit(oldp+769,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3));
        bufp->chgBit(oldp+770,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3))));
        bufp->chgCData(oldp+771,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3))))),4);
        bufp->chgBit(oldp+772,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+773,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x15U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+774,(((IData)((0x600000U 
                                         == (0x600000U 
                                             & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+775,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+778,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x14U))));
        bufp->chgBit(oldp+779,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x14U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+780,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+781,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x14U))));
        bufp->chgBit(oldp+782,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA6____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+783,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x15U))));
        bufp->chgBit(oldp+784,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x15U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+785,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+786,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x15U))));
        bufp->chgBit(oldp+787,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+788,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x16U))));
        bufp->chgBit(oldp+789,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x16U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+790,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+791,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x16U))));
        bufp->chgBit(oldp+792,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+793,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x17U))));
        bufp->chgBit(oldp+794,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x17U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+795,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+796,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x17U))));
        bufp->chgBit(oldp+797,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x17U))))));
        bufp->chgCData(oldp+798,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+799,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1bU))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (0xf8U & 
                                           (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x18U))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x1aU))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xfcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x18U))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x19U))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xfeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0x18U))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x18U)))))))),4);
        bufp->chgBit(oldp+800,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3));
        bufp->chgBit(oldp+801,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3))));
        bufp->chgCData(oldp+802,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3))))),4);
        bufp->chgBit(oldp+803,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+804,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x19U) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+805,(((IData)((0x6000000U 
                                         == (0x6000000U 
                                             & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+809,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x18U))));
        bufp->chgBit(oldp+810,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x18U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+811,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+812,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x18U))));
        bufp->chgBit(oldp+813,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA7____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x19U))));
        bufp->chgBit(oldp+815,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x19U))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+816,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+817,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x19U))));
        bufp->chgBit(oldp+818,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+820,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1aU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+821,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+822,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1aU))));
        bufp->chgBit(oldp+823,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+825,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1bU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+826,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+827,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1bU))));
        bufp->chgBit(oldp+828,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1bU))))));
        bufp->chgCData(oldp+829,((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+830,(((8U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                              & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1fU))) 
                                          << 3U) & 
                                         (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                           << 3U) | 
                                          (8U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                 >> 0x1cU))))) 
                                  | ((4U & (((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                 & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                    >> 0x1eU))) 
                                             << 2U) 
                                            & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                                << 2U) 
                                               | (0xcU 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x1cU))))) 
                                     | ((2U & (((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                                  & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                     >> 0x1dU))) 
                                                << 1U) 
                                               & (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                                   << 1U) 
                                                  | (0xeU 
                                                     & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                        >> 0x1cU))))) 
                                        | (1U & ((~ 
                                                  ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                                   & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                                    | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                                       >> 0x1cU)))))))),4);
        bufp->chgCData(oldp+831,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3))))),4);
        bufp->chgBit(oldp+832,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+833,(((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                 >> 0x1dU) & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+834,(((IData)((0x60000000U 
                                         == (0x60000000U 
                                             & vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg))) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+839,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1cU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+840,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1cU))));
        bufp->chgBit(oldp+842,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__Vcellinp__CLA8____pinNumber3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+844,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1dU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+845,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+846,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+847,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__and_out_1) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+848,((1U & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+849,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1eU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+850,((1U & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                      | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+851,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+852,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+853,((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                >> 0x1fU)));
        bufp->chgBit(oldp+854,((1U & ((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                          & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                             >> 0x1fU))) 
                                      & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                         | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+855,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                | (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+856,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+857,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                         & (vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                            >> 0x1fU))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+858,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg));
        bufp->chgBit(oldp+859,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg));
        bufp->chgIData(oldp+860,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg),32);
        bufp->chgBit(oldp+861,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__brn_pred_ex_pipe_reg));
        bufp->chgIData(oldp+862,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+863,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec));
        bufp->chgBit(oldp+864,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec));
        bufp->chgBit(oldp+865,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec));
        bufp->chgBit(oldp+866,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec));
        bufp->chgBit(oldp+867,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec));
        bufp->chgBit(oldp+868,(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec));
        bufp->chgIData(oldp+869,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum),32);
        bufp->chgIData(oldp+870,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__next_pc_iss_pipe_reg),32);
        bufp->chgBit(oldp+871,(vlSelf->top_tb__DOT__T1__DOT__FETCH_ISS_REG__DOT__brn_pred_iss_pipe_reg));
        bufp->chgCData(oldp+872,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                        >> 0xfU))),2);
        bufp->chgBit(oldp+873,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                      >> 0xeU))));
        bufp->chgCData(oldp+874,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+875,((3U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+876,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                      >> 9U))));
        bufp->chgBit(oldp+877,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                      >> 8U))));
        bufp->chgBit(oldp+878,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                      >> 7U))));
        bufp->chgBit(oldp+879,((1U & (vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls 
                                      >> 6U))));
        bufp->chgCData(oldp+880,((0x3fU & vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls)),6);
        bufp->chgSData(oldp+881,(vlSelf->top_tb__DOT__T1__DOT__instr_imm_12bit_iss),12);
        bufp->chgIData(oldp+882,(vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss),20);
        bufp->chgIData(oldp+883,(vlSelf->top_tb__DOT__T1__DOT__SIGN_EXTND_12BIT__DOT__sign_extnd_instr_imm),32);
        bufp->chgIData(oldp+884,((((- (IData)((1U & 
                                               (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                                >> 0x13U)))) 
                                   << 0x15U) | (vlSelf->top_tb__DOT__T1__DOT__instr_imm_20bit_iss 
                                                << 1U))),32);
        bufp->chgIData(oldp+885,(vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum),32);
        bufp->chgIData(oldp+887,(((IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex)
                                   ? 0U : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum)),32);
        bufp->chgBit(oldp+888,(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex));
        bufp->chgBit(oldp+889,(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex));
        bufp->chgIData(oldp+890,(vlSelf->top_tb__DOT__T1__DOT__C1__DOT__controls),17);
        bufp->chgCData(oldp+891,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                   << 6U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                              << 5U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                                 << 4U) 
                                                | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3)))))))),7);
        bufp->chgCData(oldp+892,((0xfU & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)),4);
        bufp->chgBit(oldp+893,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3));
        bufp->chgBit(oldp+894,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3))));
        bufp->chgCData(oldp+895,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+896,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                                << 1U)))),4);
        bufp->chgBit(oldp+897,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+898,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+899,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0)) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+903,((1U & vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex)));
        bufp->chgBit(oldp+904,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+905,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 1U))));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+908,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+909,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+911,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+912,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+913,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+914,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 2U))));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+917,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+918,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+919,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+920,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+921,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+922,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+923,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 3U))));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+925,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+926,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+927,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+929,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+930,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA1__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+931,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA1__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+932,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                          >> 4U))),4);
        bufp->chgCData(oldp+933,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+934,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3));
        bufp->chgBit(oldp+935,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3))));
        bufp->chgCData(oldp+936,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+937,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+938,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3))))),4);
        bufp->chgBit(oldp+939,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+940,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+941,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+942,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+943,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+944,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+946,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+947,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+948,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 4U))));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+951,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+952,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+954,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+955,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+956,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA2____pinNumber3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+957,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 5U))));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+960,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+961,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+963,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+964,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+965,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_1) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+966,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 6U))));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+969,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+970,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+972,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+973,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+974,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_2) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+975,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                      >> 7U))));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+978,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))) 
                                & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                   | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+979,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+981,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+982,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA2__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+983,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA2__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+984,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                          >> 8U))),4);
        bufp->chgCData(oldp+985,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                        & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                    & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                       | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                   << 3U) | ((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                   & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                               & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                                  | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                              << 2U) 
                                             | ((((~ 
                                                   ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                    & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                                  & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                     | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                                 << 1U) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                                   & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                                      | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))))),4);
        bufp->chgBit(oldp+986,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3));
        bufp->chgBit(oldp+987,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3))));
        bufp->chgCData(oldp+988,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+989,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber5) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+990,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                   << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3))))),4);
        bufp->chgBit(oldp+991,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+992,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+993,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+994,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+995,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+996,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+997,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1000,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 8U))));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1003,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1004,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1006,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1007,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1008,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA3____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1009,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 9U))));
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1012,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1013,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1015,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1016,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1017,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1018,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1021,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1022,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1024,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1025,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1026,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1027,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+1030,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1031,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1033,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1034,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA3__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+1035,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA3__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+1036,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1037,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                     & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                        | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                    << 3U) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
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
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3));
        bufp->chgBit(oldp+1039,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3))));
        bufp->chgCData(oldp+1040,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+1041,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber5) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+1042,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3))))),4);
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+1044,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1045,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1046,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+1047,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1048,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1052,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1055,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1056,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1058,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1059,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1060,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA4____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1061,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1064,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1065,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1067,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1068,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1069,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1070,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1073,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1074,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1076,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1077,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1078,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1079,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+1082,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1083,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1085,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1086,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA4__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+1087,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA4__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+1088,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1089,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                     & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                        | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                    << 3U) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
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
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3));
        bufp->chgBit(oldp+1091,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3))));
        bufp->chgCData(oldp+1092,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+1093,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber5) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+1094,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3))))),4);
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+1096,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1097,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1098,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+1099,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1100,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+1103,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1104,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1107,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1108,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1110,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1111,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1112,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA5____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1113,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1116,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1117,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1119,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1120,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1121,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1122,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1125,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1126,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1128,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1129,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1130,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1131,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+1134,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1135,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1137,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1138,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA5__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+1139,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA5__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+1140,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1141,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                     & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                        | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                    << 3U) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
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
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3));
        bufp->chgBit(oldp+1143,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3))));
        bufp->chgCData(oldp+1144,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+1145,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber5) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+1146,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3))))),4);
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+1148,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1149,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1150,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+1151,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1152,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1156,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1159,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1160,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1162,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1163,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1164,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA6____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1165,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1166,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1168,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1169,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1171,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1172,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1173,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1174,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1175,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1177,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1178,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1180,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1181,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1182,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1183,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+1186,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1187,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1189,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1190,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA6__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+1191,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA6__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+1192,((0xfU & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1193,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                     & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                        | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                    << 3U) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
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
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3));
        bufp->chgBit(oldp+1195,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 ^ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3))));
        bufp->chgCData(oldp+1196,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))))),4);
        bufp->chgCData(oldp+1197,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber5) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA0____pinNumber5))))),4);
        bufp->chgCData(oldp+1198,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3))))),4);
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+1200,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1201,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1202,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+1203,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1204,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1208,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1211,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1212,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1214,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1215,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1216,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA7____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1217,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1219,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1220,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1221,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1223,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1224,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1225,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1226,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1227,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1228,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1229,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1230,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1232,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1233,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1234,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1235,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4));
        bufp->chgBit(oldp+1237,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber5));
        bufp->chgBit(oldp+1238,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1239,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1241,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1242,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA7__DOT____Vcellout__RFA3____pinNumber4)))));
        bufp->chgBit(oldp+1243,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA7__DOT__RFA3__DOT__and_out_2))))));
        bufp->chgCData(oldp+1244,((vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1245,(((((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                         & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                     & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                        | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                    << 3U) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
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
        bufp->chgCData(oldp+1246,((((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                    << 3U) | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3))))),4);
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1));
        bufp->chgBit(oldp+1248,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1249,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1250,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0))));
        bufp->chgBit(oldp+1251,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0))));
        bufp->chgBit(oldp+1252,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__and_out_1))));
        bufp->chgBit(oldp+1253,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1));
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2));
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3));
        bufp->chgBit(oldp+1256,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA0____pinNumber5));
        bufp->chgBit(oldp+1259,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2)))));
        bufp->chgBit(oldp+1260,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2));
        bufp->chgBit(oldp+1262,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))));
        bufp->chgBit(oldp+1263,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0)))));
        bufp->chgBit(oldp+1264,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__Vcellinp__CLA8____pinNumber3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA0__DOT__and_out_2))))));
        bufp->chgBit(oldp+1265,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0));
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0));
        bufp->chgBit(oldp+1268,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2)))));
        bufp->chgBit(oldp+1269,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2));
        bufp->chgBit(oldp+1271,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))));
        bufp->chgBit(oldp+1272,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0)))));
        bufp->chgBit(oldp+1273,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_1) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA1__DOT__and_out_2))))));
        bufp->chgBit(oldp+1274,((1U & (vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0));
        bufp->chgBit(oldp+1277,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2)))));
        bufp->chgBit(oldp+1278,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2));
        bufp->chgBit(oldp+1280,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))));
        bufp->chgBit(oldp+1281,((1U & (~ (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.CLA8__DOT____Vcellout__RFA2____pinNumber4)))));
        bufp->chgBit(oldp+1282,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_2) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA2__DOT__and_out_2))))));
        bufp->chgBit(oldp+1283,((vlSelf->top_tb__DOT__T1__DOT__sign_extnd_imm_iss_ex 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1284,(((~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                     & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))) 
                                 & ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                    | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2)))));
        bufp->chgBit(oldp+1285,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 | (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2));
        bufp->chgBit(oldp+1287,(((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))));
        bufp->chgBit(oldp+1288,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__CLG1__DOT__or_out_3) 
                                          & (IData)(vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.__PVT__CLA8__DOT__RFA3__DOT__and_out_2))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgIData(oldp+1289,(vlSelf->top_tb__DOT__T1__DOT__next_pred_pc_fetch_iss),32);
        bufp->chgBit(oldp+1290,(vlSelf->top_tb__DOT__T1__DOT__brn_pred_fetch_iss));
        bufp->chgBit(oldp+1291,(vlSelf->top_tb__DOT__T1__DOT__flush_ex));
        bufp->chgBit(oldp+1292,(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex));
        bufp->chgBit(oldp+1293,(vlSelf->top_tb__DOT__T1__DOT__brn_corr_pred_ex_mem));
        bufp->chgBit(oldp+1294,(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex));
        bufp->chgCData(oldp+1295,(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__nxt_brn_pred_bits),2);
        bufp->chgBit(oldp+1296,(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__FETCH_ISS_REG__clr));
        bufp->chgBit(oldp+1297,(vlSelf->top_tb__DOT__T1__DOT____Vcellinp__ISS_EX_REG__clr));
    }
    bufp->chgBit(oldp+1298,(vlSelf->master_clk));
    bufp->chgBit(oldp+1299,(vlSelf->top_tb__DOT__reset_tb));
    bufp->chgIData(oldp+1300,(vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem
                              [(0x7ffU & ((vlSelf->top_tb__DOT__T1__DOT__FETCH_REG__DOT__next_pc_pc_reg 
                                           - (IData)(0x2000U)) 
                                          >> 2U))]),32);
    bufp->chgIData(oldp+1301,((((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
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
                                                ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__jalr_iss_ex)
                                                    ? 0U
                                                    : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD2.sum)
                                                : vlSymsp->TOP__top_tb__DOT__T1__DOT__ADD1.sum)))))),32);
    bufp->chgIData(oldp+1302,((((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
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
    bufp->chgBit(oldp+1303,(((~ (IData)(vlSelf->top_tb__DOT__reset_tb)) 
                             & ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_r_type_dec) 
                                | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_i_type_dec) 
                                   | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_s_type_dec) 
                                      | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_b_type_dec) 
                                         | ((IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_j_type_dec) 
                                            | (IData)(vlSelf->top_tb__DOT__T1__DOT__D1__DOT__is_u_type_dec)))))))));
    bufp->chgBit(oldp+1304,(((IData)(vlSelf->top_tb__DOT__T1__DOT__flush_ex) 
                             | (IData)(vlSelf->top_tb__DOT__T1__DOT__jump_iss_ex))));
    bufp->chgBit(oldp+1305,(((~ (IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__jump_ex_pipe_reg)) 
                             & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex))));
    bufp->chgIData(oldp+1306,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p1),32);
    bufp->chgIData(oldp+1307,(vlSelf->top_tb__DOT__T1__DOT__R1__DOT__r_data_p2),32);
    bufp->chgCData(oldp+1308,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rd_ex_pipe_reg),5);
    bufp->chgIData(oldp+1309,(((IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)
                                ? ((IData)(vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__is_lw_mem_pipe_reg)
                                    ? vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb
                                    : vlSelf->top_tb__DOT__T1__DOT__EX_MEM_REG__DOT__alu_res_mem_pipe_reg)
                                : (((~ (IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)) 
                                    & ((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                       & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                                          == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg))))
                                    ? vlSelf->top_tb__DOT__T1__DOT__wr_data_rf_wb_ret
                                    : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__r_data_p1_ex_pipe_reg))),32);
    bufp->chgCData(oldp+1310,(((IData)(vlSelf->__VdfgTmp_h2bd2e9c4__0)
                                ? 2U : (((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                         & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs1_ex_pipe_reg) 
                                            == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg)))
                                         ? 1U : 0U))),2);
    bufp->chgCData(oldp+1311,(((IData)(vlSelf->__VdfgTmp_hbfa43bc6__0)
                                ? 2U : (((IData)(vlSelf->top_tb__DOT__T1__DOT__hazard__DOT____VdfgTmp_he1fe869f__0) 
                                         & ((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rs2_ex_pipe_reg) 
                                            == (IData)(vlSelf->top_tb__DOT__T1__DOT__MEM_WB_REG__DOT__rd_wb_pipe_reg)))
                                         ? 1U : 0U))),2);
    bufp->chgBit(oldp+1312,(((IData)(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__is_b_type_ex_pipe_reg) 
                             & (IData)(vlSelf->top_tb__DOT__T1__DOT__flush_incorr_pred_ex))));
    bufp->chgIData(oldp+1313,(((IData)(vlSelf->top_tb__DOT__T1__DOT__branch_taken_ex)
                                ? vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_brn_pc_ex_pipe_reg
                                : vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__next_seq_pc_ex_pipe_reg)),32);
    bufp->chgIData(oldp+1314,(vlSelf->top_tb__DOT__T1__DOT__read_data_dmem_ram_mem_wb),32);
    bufp->chgBit(oldp+1315,(vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__rf_en_ex_pipe_reg));
    bufp->chgCData(oldp+1316,(vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred
                              [(0x3ffU & vlSelf->top_tb__DOT__T1__DOT__ISS_EX_REG__DOT__curr_pc_ex_pipe_reg)]),2);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
}
