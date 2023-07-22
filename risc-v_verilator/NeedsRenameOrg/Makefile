
# step 1: Verilate: convert rtl .sv into .cpp
.PHONY: verilate 
verilate: .stamp.verilate 

.stamp.verilate:
	@echo
	@echo "### Verilating ###"
	@echo 
	verilator \
	-Wall -trace --timing -Wno-UNUSEDSIGNAL -Wno-BLKSEQ -Wno-SYNCASYNCNET -Wno-CASEOVERLAP -Wno-CASEINCOMPLETE -Wno-UNDRIVEN -Wno-UNUSEDPARAM -Wno-LITENDIAN -Wno-IMPLICITSTATIC -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-VARHIDDEN -Wno-IMPLICIT -Wno-EOFNEWLINE -Wno-PINCONNECTEMPTY -top-module top_tb --cc \
	top_tb.sv \
	top.v \
	adder.v \
	alu.v \
	carry_lookahead_adder.v \
	carry_lookahead_gen.v \
	comparator.v \
	control.v \
	data_mem.v \
	decode.v \
	ex_pipe_reg.v \
	fetch_pipe_reg.v \
	hazard_unit.v \
	instr_mem.v \
	iss_pipe_reg.v \
	logical.v \
	mem_pipe_reg.v \
	one_level_bpred.v \
	reduced_full_adder.v \
	regfile.v \
	riscv_alu_defines.v \
	riscv_instr_defines.v \
	shifter.v \
	sign_extnd_12bit.v \
	sign_extnd_20bit.v \
	two_bit_sat_counter.v \
	wb_pipe_reg.v \
	-exe testbench.cpp 


.PHONY: build
build: .stamp.build 

.stamp.build:
	@echo
	@echo "### Building Executable ###"
	@echo 
	make -C obj_dir -f Vtop_tb.mk Vtop_tb


.PHONY: sim
sim: .stamp.sim 

.stamp.sim:
	@echo 
	@echo "### Simulating ###"
	@echo 
	./obj_dir/Vtop_tb \
		"+test=taylortest"


.PHONY: waves
waves: .stamp.waves

.stamp.waves:
	@echo
	@echo "### Makin' Waves ###"
	@echo 
	gtkwave waveform.vcd -a gtkwave_setup.gtkw 


.PHONY: clean
clean:
	rm -rf .stamp.*;
	rm -rf ./obj_dir
	rm -rf waveform.vcd