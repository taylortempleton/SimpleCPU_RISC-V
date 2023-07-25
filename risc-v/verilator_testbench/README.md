Instructions to run the Verilator/C++ testbench, useful for investigatng waveforms and block-to-block interactions is below.

![](https://github.com/taylortempleton/SimpleCPU_RISC-V/blob/master/risc-v/docs/gtkwaveform.png)

1. Generate a set of instructions
	cd hex_gen directory
	Run make
		$ make
	Run hex_gen executable. To generate 2 i-type instructions, 3 j-type instructions and 5 r-type instructions run:
		$ ./hex_gen -i 2 -j 3 -r 5
	Copy the 2 output hex files into the verilator_testbench directory: test_instr.hex and test_pc.hex.

2. cd to verilator_testbench directory
	Run verilate
		$ make verilate
	Run build
		$ make build
	In Makefile, update test name to match hex files if running specially named test:
		+test=test \
	Run simulation.
		$ make sim
	View waves. Will automatically open gtkwave and show waveforms.
		$ make waves
	

