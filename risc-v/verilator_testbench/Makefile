.PHONY: verilate
verilate: .stamp.verilate

.stamp.verilate: 
	@echo
	@echo "### Verilating ###"
	@echo
	verilator \
	-Wall -trace --timing \
	-Wno-UNUSEDSIGNAL -Wno-BLKSEQ -Wno-SYNCASYNCNET -Wno-CASEOVERLAP \
	-Wno-CASEINCOMPLETE -Wno-UNDRIVEN -Wno-UNUSEDPARAM -Wno-LITENDIAN -Wno-IMPLICITSTATIC \
	-Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-VARHIDDEN -Wno-IMPLICIT -Wno-EOFNEWLINE -Wno-PINCONNECTEMPTY \
	-top-module top_tb --cc \
	../riscv-pipeline/verilog/riscv_alu_defines.v \
	../riscv-pipeline/verilog/riscv_instr_defines.v \
	../riscv-pipeline/verilog/*.v \
	../riscv-pipeline/testbench/top_tb.sv \
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
	+test=taylortest \


.PHONY: waves
waves: .stamp.waves

.stamp.waves:
	@echo
	@echo "### Generate Waveforms ###"
	@echo
	gtkwave waveform.vcd -a gtkwave_setup.gtkw 


.PHONY: clean
clean:
	rm -rf .stamp.*;
	rm -rf ./obj_dir 
	rm -rf waveform.vcd 
