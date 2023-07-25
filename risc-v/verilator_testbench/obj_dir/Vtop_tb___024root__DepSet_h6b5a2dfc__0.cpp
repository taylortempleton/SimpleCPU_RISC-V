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

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i;
    __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i;
    __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i;
    __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i = 0;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__0;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__1;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__2;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__3;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__4;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__5;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__6;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__7;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__8;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__9;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__10;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__11;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__12;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__13;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__14;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__15;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__16;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__17;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__18;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__19;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__20;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__21;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__22;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__23;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__24;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__25;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__26;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__27;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__28;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__29;
    VlWide<5>/*159:0*/ __Vtemp_h6d63c421__30;
    // Body
    VL_READMEM_N(true, 32, 2048, 0, std::string{"taylortest.hex"}
                 ,  &(vlSelf->top_tb__DOT__init_imem__Vstatic__instr_hex)
                 , 0U, ~0ULL);
    VL_READMEM_N(true, 32, 2048, 0, std::string{"taylortest_pc.hex"}
                 ,  &(vlSelf->top_tb__DOT__init_imem__Vstatic__pc_val)
                 , 0U, ~0ULL);
    __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i = 0U;
    while ((0U != vlSelf->top_tb__DOT__init_imem__Vstatic__instr_hex
            [(0x7ffU & __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i)])) {
        vlSelf->top_tb__DOT__T1__DOT__I_MEM1__DOT__imem[(0x7ffU 
                                                         & ((vlSelf->top_tb__DOT__init_imem__Vstatic__pc_val
                                                             [
                                                             (0x7ffU 
                                                              & __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i)] 
                                                             - (IData)(0x2000U)) 
                                                            >> 2U))] 
            = vlSelf->top_tb__DOT__init_imem__Vstatic__instr_hex
            [(0x7ffU & __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i)];
        __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_top_tb__DOT__init_imem__0__unnamedblk4__DOT__i);
    }
    __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i = 0U;
    while ((0x40000U > __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i)) {
        vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__dmem[(0x1fffU 
                                                         & __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i)] = 0xefefefefU;
        __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_top_tb__DOT__init_dmem__1__unnamedblk3__DOT__i);
    }
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0U] = 0U;
    __Vtemp_h6d63c421__0[0U] = 0x72656773U;
    __Vtemp_h6d63c421__0[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__0[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__0[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__0[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[1U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__0))
            ? 0x21U : 0U);
    __Vtemp_h6d63c421__1[0U] = 0x72656773U;
    __Vtemp_h6d63c421__1[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__1[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__1[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__1[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[2U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__1))
            ? 0x42U : 0U);
    __Vtemp_h6d63c421__2[0U] = 0x72656773U;
    __Vtemp_h6d63c421__2[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__2[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__2[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__2[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[3U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__2))
            ? 0x60U : 0U);
    __Vtemp_h6d63c421__3[0U] = 0x72656773U;
    __Vtemp_h6d63c421__3[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__3[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__3[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__3[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[4U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__3))
            ? 0x81U : 0U);
    __Vtemp_h6d63c421__4[0U] = 0x72656773U;
    __Vtemp_h6d63c421__4[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__4[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__4[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__4[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[5U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__4))
            ? 0xa2U : 0U);
    __Vtemp_h6d63c421__5[0U] = 0x72656773U;
    __Vtemp_h6d63c421__5[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__5[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__5[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__5[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[6U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__5))
            ? 0xc0U : 0U);
    __Vtemp_h6d63c421__6[0U] = 0x72656773U;
    __Vtemp_h6d63c421__6[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__6[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__6[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__6[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[7U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__6))
            ? 0xe1U : 0U);
    __Vtemp_h6d63c421__7[0U] = 0x72656773U;
    __Vtemp_h6d63c421__7[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__7[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__7[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__7[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[8U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__7))
            ? 0x102U : 0U);
    __Vtemp_h6d63c421__8[0U] = 0x72656773U;
    __Vtemp_h6d63c421__8[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__8[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__8[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__8[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[9U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__8))
            ? 0x120U : 0U);
    __Vtemp_h6d63c421__9[0U] = 0x72656773U;
    __Vtemp_h6d63c421__9[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__9[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__9[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__9[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xaU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__9))
            ? 0x141U : 0U);
    __Vtemp_h6d63c421__10[0U] = 0x72656773U;
    __Vtemp_h6d63c421__10[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__10[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__10[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__10[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xbU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__10))
            ? 0x162U : 0U);
    __Vtemp_h6d63c421__11[0U] = 0x72656773U;
    __Vtemp_h6d63c421__11[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__11[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__11[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__11[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xcU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__11))
            ? 0x180U : 0U);
    __Vtemp_h6d63c421__12[0U] = 0x72656773U;
    __Vtemp_h6d63c421__12[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__12[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__12[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__12[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xdU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__12))
            ? 0x1a1U : 0U);
    __Vtemp_h6d63c421__13[0U] = 0x72656773U;
    __Vtemp_h6d63c421__13[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__13[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__13[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__13[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xeU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__13))
            ? 0x1c2U : 0U);
    __Vtemp_h6d63c421__14[0U] = 0x72656773U;
    __Vtemp_h6d63c421__14[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__14[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__14[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__14[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0xfU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__14))
            ? 0x1e0U : 0U);
    __Vtemp_h6d63c421__15[0U] = 0x72656773U;
    __Vtemp_h6d63c421__15[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__15[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__15[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__15[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x10U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__15))
            ? 0x201U : 0U);
    __Vtemp_h6d63c421__16[0U] = 0x72656773U;
    __Vtemp_h6d63c421__16[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__16[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__16[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__16[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x11U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__16))
            ? 0x222U : 0U);
    __Vtemp_h6d63c421__17[0U] = 0x72656773U;
    __Vtemp_h6d63c421__17[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__17[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__17[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__17[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x12U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__17))
            ? 0x240U : 0U);
    __Vtemp_h6d63c421__18[0U] = 0x72656773U;
    __Vtemp_h6d63c421__18[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__18[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__18[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__18[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x13U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__18))
            ? 0x261U : 0U);
    __Vtemp_h6d63c421__19[0U] = 0x72656773U;
    __Vtemp_h6d63c421__19[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__19[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__19[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__19[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x14U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__19))
            ? 0x282U : 0U);
    __Vtemp_h6d63c421__20[0U] = 0x72656773U;
    __Vtemp_h6d63c421__20[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__20[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__20[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__20[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x15U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__20))
            ? 0x2a0U : 0U);
    __Vtemp_h6d63c421__21[0U] = 0x72656773U;
    __Vtemp_h6d63c421__21[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__21[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__21[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__21[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x16U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__21))
            ? 0x2c1U : 0U);
    __Vtemp_h6d63c421__22[0U] = 0x72656773U;
    __Vtemp_h6d63c421__22[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__22[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__22[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__22[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x17U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__22))
            ? 0x2e2U : 0U);
    __Vtemp_h6d63c421__23[0U] = 0x72656773U;
    __Vtemp_h6d63c421__23[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__23[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__23[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__23[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x18U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__23))
            ? 0x300U : 0U);
    __Vtemp_h6d63c421__24[0U] = 0x72656773U;
    __Vtemp_h6d63c421__24[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__24[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__24[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__24[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x19U] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__24))
            ? 0x321U : 0U);
    __Vtemp_h6d63c421__25[0U] = 0x72656773U;
    __Vtemp_h6d63c421__25[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__25[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__25[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__25[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1aU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__25))
            ? 0x342U : 0U);
    __Vtemp_h6d63c421__26[0U] = 0x72656773U;
    __Vtemp_h6d63c421__26[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__26[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__26[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__26[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1bU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__26))
            ? 0x360U : 0U);
    __Vtemp_h6d63c421__27[0U] = 0x72656773U;
    __Vtemp_h6d63c421__27[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__27[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__27[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__27[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1cU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__27))
            ? 0x381U : 0U);
    __Vtemp_h6d63c421__28[0U] = 0x72656773U;
    __Vtemp_h6d63c421__28[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__28[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__28[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__28[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1dU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__28))
            ? 0x3a2U : 0U);
    __Vtemp_h6d63c421__29[0U] = 0x72656773U;
    __Vtemp_h6d63c421__29[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__29[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__29[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__29[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1eU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__29))
            ? 0x3c0U : 0U);
    __Vtemp_h6d63c421__30[0U] = 0x72656773U;
    __Vtemp_h6d63c421__30[1U] = 0x7263685fU;
    __Vtemp_h6d63c421__30[2U] = 0x61645f61U;
    __Vtemp_h6d63c421__30[3U] = 0x72656c6fU;
    __Vtemp_h6d63c421__30[4U] = 0x70U;
    vlSelf->top_tb__DOT__T1__DOT__R1__DOT__reg_file[0x1fU] 
        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(5, __Vtemp_h6d63c421__30))
            ? 0x3e1U : 0U);
    __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i)) {
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__bpred[(0x3ffU 
                                                         & __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i)] = 0U;
        vlSelf->top_tb__DOT__T1__DOT__BPRED__DOT__btb[(0x3ffU 
                                                       & __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i)] = 0U;
        __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top_tb__DOT__boot_code__2__unnamedblk2__DOT__i);
    }
    VL_WRITEF("CPU initialised\n\n");
    vlSelf->top_tb__DOT__reset_tb = 1U;
    co_await vlSelf->__VtrigSched_h3e8c3e9a__0.trigger(
                                                       "@(posedge master_clk)", 
                                                       "../riscv-pipeline/testbench/top_tb.sv", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3e8c3e9a__0.trigger(
                                                       "@(posedge master_clk)", 
                                                       "../riscv-pipeline/testbench/top_tb.sv", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3e8c3e9a__0.trigger(
                                                       "@(posedge master_clk)", 
                                                       "../riscv-pipeline/testbench/top_tb.sv", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3e8c3e9a__0.trigger(
                                                       "@(posedge master_clk)", 
                                                       "../riscv-pipeline/testbench/top_tb.sv", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3e8c3e9a__0.trigger(
                                                       "@(posedge master_clk)", 
                                                       "../riscv-pipeline/testbench/top_tb.sv", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_tb__DOT__reset_tb = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data 
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
                    ? vlSelf->top_tb__DOT__T1__DOT__D_MEM1__DOT__read_data
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
                    VL_FATAL_MT("../riscv-pipeline/testbench/top_tb.sv", 3, "", "Active region did not converge.");
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
                VL_FATAL_MT("../riscv-pipeline/testbench/top_tb.sv", 3, "", "NBA region did not converge.");
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
