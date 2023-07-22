/***************************************************************/
/*                                                             */
/* hex_gen_shared.c                                            */
/* Defines globally used functions                             */
/*                                                             */
/*                                                             */
/***************************************************************/

#include "hex_gen_shared.h"

int PC     [IMEM_SIZE];     /* Program counter arr - index using PC */
int instr  [IMEM_SIZE];      /* Stores hex value of the instruction  */
int ls_addr[IMEM_SIZE];      /* Stores the addresses used by load/store instr */
int br_addr[IMEM_SIZE];      /* Stores the addresses used by branch instrs    */

int err_count;
int instr_gen; 

/* Function to initialise Hex-Gen Tool  */
/* All the global variables should be   */
/* set to their initial value here      */
void init_hex_gen () {
    int i;
    // PC and instr array should be initialised to 0
    for (i = 0; i < IMEM_SIZE; i++) {
        PC[i]       = 0x0;
        instr[i]    = 0x0;
        ls_addr[i]  = 0x0;
        br_addr[i]  = 0x0;
    }
    // Set instr_gen to 0
    instr_gen = 0;
    // Set err_count to 0
    err_count = 0;
}
