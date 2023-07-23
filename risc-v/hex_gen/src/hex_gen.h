/***************************************************************/
/*                                                             */
/* hex_gen.h                                                   */
/* Creates a file with the hexadecimal opcodes                 */
/* of the requested instruction mix                            */
/*                                                             */
/***************************************************************/

#ifndef HEX_GEN_H
#define HEX_GEN_H

#include "hex_gen_shared.h"

/* Declare all the external functions here */
extern int shift_const (int);
extern void load_instr_opcode (uint32_t);
extern void run (int);
extern int check_ls_addr (int, int);
extern void init_memory ();

/* Declare all the internally used functions here */
void update_cpu (int, int);
int  check_brn_addr (int, int);
int  decode_brn_result (int, int, int);
int  check_ls_addr (int, int);
int  check_j_addr (int, int, int);
void print_assembled_r_instr (int, int, int, int);
void print_assembled_i_instr (int, int, int, int);
void print_assembled_s_instr (int, int, int, int);
void print_assembled_j_instr (int, int, int);
void gen_end_seq ();
void print_to_file (FILE*, FILE*);

extern int prev_pc;
FILE* pc_hex_val;
FILE* instr_hex_val;

const int funct_val_r_type[10] = {
    MATCH_SLL,     MATCH_SRL,       MATCH_SRA,
    MATCH_ADD,     MATCH_SUB,       MATCH_AND,
    MATCH_OR,      MATCH_XOR,       MATCH_SLT,
    MATCH_SLTU
};

const int mask_val_r_type[10] = {
    MASK_SLL,     MASK_SRL,       MASK_SRA,
    MASK_ADD,     MASK_SUB,       MASK_AND,
    MASK_OR,      MASK_XOR,       MASK_SLT,
    MASK_SLTU
};


const char* funct_str_r_type[10] = {
    "SLL",     "SRL",       "SRA",
    "ADD",     "SUB",       "AND",
    "OR",      "XOR",       "SLT",
    "SLTU"
};
const int opcode_val_i_type[8] = {
    MATCH_ADDI,       MATCH_SLTI,       MATCH_SLTIU,
    MATCH_ANDI,       MATCH_ORI,        MATCH_XORI,
    MATCH_JALR,       /*LB,         LH,*/
    MATCH_LW         /*LBU,        LHU*/
};
const int mask_val_i_type[8] = {
    MASK_ADDI,       MASK_SLTI,       MASK_SLTIU,
    MASK_ANDI,       MASK_ORI,        MASK_XORI,
    MASK_JALR,       /*LB,         LH,*/
    MASK_LW         /*LBU,        LHU*/
};
const char* opcode_str_i_type[8] = {
    "ADDI",       "SLTI",       "SLTIU",
    "ANDI",       "ORI",        "XORI",
    "JALR",      /*"LB",         "LH",*/
    "LW"         /*"LBU",        "LHU"*/
};
const int opcode_val_s_type[1] = {
    /*SB,         SH,*/         MATCH_SW
};
const int mask_val_s_type[1] = {
    /*SB,         SH,*/         MASK_SW
};
const char* opcode_str_s_type[1] = {
    /*"SB",         "SH",*/         "SW"
};
const int opcode_val_b_type[6] = {
    MATCH_BEQ,        MATCH_BNE,        MATCH_BLT,
    MATCH_BLTU,       MATCH_BGE,         MATCH_BGEU
};
const int mask_val_b_type[6] = {
    MASK_BEQ,        MASK_BNE,        MASK_BLT,
    MASK_BLTU,       MASK_BGE,         MASK_BGEU
};
const char* opcode_str_b_type[6] = {
    "BEQ",        "BNE",        "BLT",
    "BLTU",       "BGE",        "BGEU"
};
const int opcode_val_u_type[2] = {
    MATCH_LUI ,        MATCH_AUIPC
};
const int mask_val_u_type[2] = {
    MASK_LUI ,        MASK_AUIPC
};
const char* opcode_str_u_type[2] = {
    "LUI" ,        "AUIPC"
};
const int opcode_val_j_type[1] = {
    MATCH_JAL
};
const int mask_val_j_type[1] = {
    MASK_JAL
};
const char* opcode_str_j_type[1] = {
    "JAL"
};
/* Currently the RTL only supports */
/* registers in the following format */
const char* register_str[] = {	
    "X0",       "X1",       "X2",  
    "X3",       "X4",       "X5",  
    "X6",       "X7",       "X8",  
    "X9",       "X10",      "X11",  
    "X12",      "X13",      "X14",  
    "X15",      "X16",      "X17",  
    "X18",      "X19",      "X20",  
    "X21",      "X22",      "X23", 
    "X24",      "X25",      "X26",  
    "X27",      "X28",      "X29", 
    "X30",      "X31",             
};

#endif
