1) Set directory

$	cd	Documents/GitHub/SimpleCPU_Rahul/risc-v_verilator/NeedsRenameOrg

2) Check RTL to cpp conversion. Creates folder 'obj_dir' where converted sources written:

$	make verilate

3) (Create cpp tb and include relevant libraries)

4) Re run Verilator with --exe testbench.cpp.  Will create build instructions for make. (Verilated RTL and cpp tb are effectively C++ application that computer can run.) To build the simulation executable, we need to RErun Verilator again to regenerate the .mk files to include the C++ testbench.  Regenerates .mk, not much else new.

$	make verilate

5)$ make build

6)$ make sim
	./obj_dir/Vtop_tb \
		"+test=taylortest"

7)$ make waves

*** Current Status / Current Error ***
*6/27
Success! Crude program running
* hexgen currently required i and j instructions set to 0, to avoid looping check_j_addr function
* have to rename hex files to have proper format
