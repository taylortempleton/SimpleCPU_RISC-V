// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_ADDER_H_
#define VERILATED_VTOP_TB_ADDER_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtop_tb__Syms;

class Vtop_tb_adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(carry,0,0);
        VL_OUT8(v_flag,0,0);
        CData/*0:0*/ __Vcellinp__CLA2____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA3____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA4____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA5____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA6____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA7____pinNumber3;
        CData/*0:0*/ __Vcellinp__CLA8____pinNumber3;
        CData/*0:0*/ CLA1__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA1__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA1__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA1__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA1__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA1__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA1__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA1__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA1__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA1__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA1__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA1__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA1__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA1__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA1__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA1__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA1__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA2__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA2__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA2__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA2__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA2__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA2__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA2__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA2__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA2__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA2__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA2__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA2__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA2__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA2__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA2__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA2__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA2__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA3__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA3__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA3__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA3__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA3__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA3__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA3__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA3__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA3__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA3__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA3__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA3__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA3__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA3__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA3__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA3__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA3__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA4__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA4__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA4__DOT____Vcellout__RFA3____pinNumber5;
    };
    struct {
        CData/*0:0*/ CLA4__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA4__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA4__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA4__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA4__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA4__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA4__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA4__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA4__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA4__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA4__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA4__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA4__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA4__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA5__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA5__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA5__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA5__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA5__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA5__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA5__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA5__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA5__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA5__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA5__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA5__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA5__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA5__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA5__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA5__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA5__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA6__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA6__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA6__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA6__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA6__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA6__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA6__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA6__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA6__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA6__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA6__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA6__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA6__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA6__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA6__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA6__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA6__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA7__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA7__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA7__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA7__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA7__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA7__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA7__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA7__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA7__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA7__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA7__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA7__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA7__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA7__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA7__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA7__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
    };
    struct {
        CData/*0:0*/ CLA7__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        CData/*0:0*/ CLA8__DOT____Vcellout__RFA0____pinNumber5;
        CData/*0:0*/ CLA8__DOT____Vcellout__RFA2____pinNumber4;
        CData/*0:0*/ CLA8__DOT____Vcellout__RFA3____pinNumber5;
        CData/*0:0*/ CLA8__DOT____Vcellout__RFA3____pinNumber4;
        CData/*0:0*/ __PVT__CLA8__DOT__RFA0__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA8__DOT__RFA1__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA8__DOT__RFA2__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA8__DOT__RFA3__DOT__and_out_2;
        CData/*0:0*/ __PVT__CLA8__DOT__CLG1__DOT__and_out_1;
        CData/*0:0*/ __PVT__CLA8__DOT__CLG1__DOT__or_out_1;
        CData/*0:0*/ __PVT__CLA8__DOT__CLG1__DOT__or_out_2;
        CData/*0:0*/ __PVT__CLA8__DOT__CLG1__DOT__or_out_3;
        CData/*0:0*/ CLA8__DOT__CLG1__DOT____VdfgTmp_haf936f75__0;
        CData/*0:0*/ CLA8__DOT__CLG1__DOT____VdfgTmp_haf9f3ee0__0;
        CData/*0:0*/ CLA8__DOT__CLG1__DOT____VdfgTmp_h3b0bad69__0;
        CData/*0:0*/ CLA8__DOT__CLG1__DOT____VdfgTmp_h3bc9dc5e__0;
        CData/*0:0*/ CLA8__DOT__CLG1__DOT____VdfgTmp_h76aa7215__0;
        VL_IN(op1,31,0);
        VL_IN(op2,31,0);
        VL_OUT(sum,31,0);
    };

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_adder(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_adder();
    VL_UNCOPYABLE(Vtop_tb_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
