module tb_cpu_wrapper(
input master_clk,
input reset_tb
);

top T1 (
.clk(master_clk),
.reset(reset_tb)
);


endmodule