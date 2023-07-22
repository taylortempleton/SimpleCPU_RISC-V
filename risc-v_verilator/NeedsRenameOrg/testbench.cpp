#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>

#include <Vtop_tb.h>
#include <Vtop_tb_adder.h>

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Vtop_tb *dut = new Vtop_tb;

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut -> trace(m_trace, 5);
    m_trace -> open ("waveform.vcd");

    while (sim_time < MAX_SIM_TIME){
        dut->master_clk ^= 1;
        dut->eval();
        m_trace -> dump(sim_time);
        sim_time++;
    }

    m_trace -> close();
    delete dut;
    exit(EXIT_SUCCESS);

}