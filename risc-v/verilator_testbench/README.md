Instructions to run the Verilator/C++ testbench, useful for investigatng waveforms and block-to-block interactions is below.

![](https://github.com/taylortempleton/SimpleCPU_RISC-V/blob/master/risc-v/docs/gtkwaveform.png)


1) Set directory to Verilator_Testbench
2) Check RTL to cpp conversion. Creates folder 'obj_dir' where converted sources written:
$	make verilate
3) (Create cpp tb and include relevant libraries)
4) Re run Verilator with --exe testbench.cpp.  Will create build instructions for make. (Verilated RTL and cpp tb are effectively C++ application that computer can run.) To build the simulation executable, we need to RErun Verilator again to regenerate the .mk files to include the C++ testbench.  Regenerates .mk, not much else new.
$	make verilate
5)$ make build
6) Actually run sim, specifying test to be used
$ make sim
	./obj_dir/Vtop_tb \
		"+test=taylortest"
7) View waveforms in gtkwave
8) $ make waves
