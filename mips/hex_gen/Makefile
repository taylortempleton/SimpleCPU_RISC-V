INC_DIR = ../shared
CFLAGS = -Wall -I $(INC_DIR)
DEPS = mips_instr_defines.h

all: src/*.c
	gcc $(CFLAGS) -g -O2 $^ -o hex_gen libhex.so -D GEN_USER_TEST

hex: src/*.c
	gcc $(CFLAGS) -g -O2 $^ -o hex_gen libhex.so -Wl,--verbose

.PHONY: clean
clean:
	rm -rf hex_gen pc_values_hex instr_hex

all_verbose: src/*.c
	gcc $(CFLAGS) -g -O2 $^ -o hex_gen -L/lib/libhex.so -D GEN_USER_TEST -Wl,--verbose

all_orig: src/*.c
	gcc $(CFLAGS) -g -O2 $^ -o hex_gen -l /lib/libhex.so -D GEN_USER_TEST