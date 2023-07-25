Instructions to run the Verilator/C++ testbench, useful for investigatng waveforms and block-to-block interactions is below.



1. Generate a set of instructions for the CPU to run
	* cd to hex_gen directory
	* Run make to create an executable.
	  * $ make
	* Run hex_gen executable within input to specify how many instructions you want. To generate 2 i-type instructions, 3 j-type instructions and 5 r-type instructions run:
	  * $ ./hex_gen -i 2 -j 3 -r 5
	* Copy the 2 output hex files into the verilator_testbench directory: test_instr.hex and test_pc.hex.

2. Run Verilator
	* cd to the verilator_testbench directory
	* Run verilate
  	  * $ make verilate
	* Run build
	  * $ make build
	* In Makefile, make sure the +test flag matches the .hex file names.  It will by default, but will need to be updated to match the hex files if a custom name was chosen.  Under .stamp.sim:
	+test=***UPDATE IF A CUSTOM TEST NAME WAS USED*** \
	* Run simulation.
	  * $ make sim
	* View waves. Will automatically open gtkwave and show waveforms.
	  * $ make waves
	
Example gtkwave output:
![](https://github.com/taylortempleton/SimpleCPU_RISC-V/blob/master/risc-v/docs/gtkwaveform.png)

