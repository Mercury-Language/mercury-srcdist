/*
** Automatically generated from `x86_64_out.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__ll_backend__x86_64_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.x86_64_out.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.x86_64_out.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.x86_64_out.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.x86_64_out.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ll_backend.x86_64_out.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.x86_64_out.c"
#line 48 "ll_backend.x86_64_out.c"
#include "ll_backend.x86_64_out.mh"

#line 51 "ll_backend.x86_64_out.c"
#line 52 "ll_backend.x86_64_out.c"
#ifndef LL_BACKEND__X86_64_OUT_DECL_GUARD
#define LL_BACKEND__X86_64_OUT_DECL_GUARD

#line 56 "ll_backend.x86_64_out.c"
#line 57 "ll_backend.x86_64_out.c"

#endif
#line 60 "ll_backend.x86_64_out.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_1[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_2[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_3[];

struct mercury_type_3 {
	MR_String f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];
MR_decl_label1(ll_backend__x86_64_out__check_operand_not_immediate_2_0, 2)
MR_decl_label1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0, 2)
MR_decl_label2(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0, 2,4)
MR_decl_label1(ll_backend__x86_64_out__check_operand_register_2_0, 2)
MR_decl_label8(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0, 12,8,9,5,6,4,17,16)
MR_decl_label1(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0, 2)
MR_decl_label2(ll_backend__x86_64_out__check_pseudo_section_flags_2_0, 4,2)
MR_decl_label2(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0, 3,21)
MR_decl_label1(ll_backend__x86_64_out__check_pseudo_section_type_2_0, 3)
MR_decl_label1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0, 3)
MR_decl_label8(ll_backend__x86_64_out__check_rc_first_operand_2_0, 14,51,4,6,52,8,5,12)
MR_decl_label6(ll_backend__x86_64_out__check_section_flags_and_type_3_0, 2,4,5,3,9,11)
MR_decl_label2(ll_backend__x86_64_out__check_unsigned_int_size_3_0, 2,3)
MR_decl_label8(ll_backend__x86_64_out__operand_to_string_2_0, 41,107,8,5,6,17,109,26)
MR_decl_label8(ll_backend__x86_64_out__operand_to_string_2_0, 24,28,29,30,19,36,35,34)
MR_decl_label2(ll_backend__x86_64_out__operand_to_string_2_0, 48,16)
MR_decl_label8(ll_backend__x86_64_out__output_bit_test_instr_6_0, 54,5,6,9,11,14,15,16)
MR_decl_label5(ll_backend__x86_64_out__output_bit_test_instr_6_0, 17,18,19,13,10)
MR_decl_label8(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0, 4,6,9,10,11,12,8,5)
MR_decl_label1(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0, 2)
MR_decl_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0, 2,4,7,11,14,15,16,17)
MR_decl_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0, 18,19,20,12,23,24,25,26)
MR_decl_label2(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0, 27,28)
MR_decl_label8(ll_backend__x86_64_out__output_instr_with_condition_7_0, 41,6,7,8,9,10,11,13)
MR_decl_label3(ll_backend__x86_64_out__output_instr_with_condition_7_0, 17,18,15)
MR_decl_label4(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0, 2,3,4,5)
MR_decl_label4(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0, 2,3,4,5)
MR_decl_label8(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0, 2,3,4,5,19,7,8,6)
MR_decl_label6(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0, 11,14,13,16,17,10)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 471,3,6,474,9,770,13,16)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 17,21,22,23,24,25,26,27)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 19,30,15,32,771,35,38,39)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 37,42,44,46,48,50,772,53)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 56,57,55,60,62,64,66,68)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 70,72,74,77,773,81,84,87)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 88,89,90,91,86,94,83,96)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 774,99,102,101,105,107,109,111)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 113,115,775,118,119,123,124,125)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 120,128,131,776,134,135,136,138)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 140,143,142,146,147,148,529,150)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 152,153,156,158,777,161,162,165)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 778,168,171,174,175,176,177,178)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 173,181,170,183,185,187,189,191)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 193,195,197,200,202,204,206,209)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 211,779,214,215,218,780,221,224)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 227,228,229,230,231,232,226,235)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 223,237,239,828,243,246,245,249)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 781,252,255,258,259,260,261,262)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 263,264,257,267,254,269,782,272)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 275,278,279,280,281,282,277,285)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 274,287,784,290,293,296,297,298)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 299,300,295,303,292,305,307,785)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 311,313,315,783,318,321,324,325)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 326,327,328,323,331,320,333,786)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 336,339,342,345,346,347,348,349)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 350,351,352,344,355,341,357,338)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 359,787,362,365,368,369,370,371)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 372,367,375,364,377,788,380,383)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 386,389,390,391,392,393,394,395)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 396,388,399,385,401,382,403,405)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 407,409,789,413,416,419,420,421)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 422,423,418,426,415,428,430,790)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 433,436,439,440,441,442,443,438)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 446,435,448,791,451,454,457,458)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0, 459,460,461,462,456,453,466,468)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_instr_4_0, 3,5,6,8,9,10,11,12)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_instr_4_0, 7,24,26,27,28,19,21,22)
MR_decl_label1(ll_backend__x86_64_out__output_x86_64_instr_4_0, 53)
MR_decl_label5(ll_backend__x86_64_out__output_x86_64_instruction_4_0, 3,4,2,7,9)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 336,5,7,339,3,9,11,13)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 420,16,17,18,19,21,22,421)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 26,28,423,32,422,36,37,38)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 41,43,45,47,49,51,53,55)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 57,424,60,61,62,425,66,67)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 68,71,73,75,426,78,427,82)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 85,87,428,90,91,92,429,96)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 430,100,431,104,107,109,434,112)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 113,114,433,118,435,122,436,126)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 437,130,438,134,439,138,440,142)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 143,144,441,148,443,152,444,156)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 157,158,442,162,445,166,167,170)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 446,173,447,177,178,448,182,185)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 187,189,191,193,195,197,449,200)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 450,204,207,451,210,452,214,215)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 218,453,221,222,454,225,226,455)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 230,456,234,235,342,237,238,242)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 243,244,245,246,247,239,249,236)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 253,254,457,258,259,260,263,265)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 458,268,269,270,273,275,277,279)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 459,282,460,286,461,290,291,292)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 462,296,463,300,352,302,464,306)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 309,466,312,467,316,319,321,323)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 432,326,465,330,331,332,333,334)
MR_decl_label7(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0, 27,4,7,8,19,10,29)
MR_decl_label8(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0, 21,4,5,6,7,16,9,23)
MR_decl_label3(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0, 11,3,5)
MR_decl_label6(ll_backend__x86_64_out__rel_offset_to_string_2_0, 20,11,12,3,5,4)
MR_def_extern_entry(ll_backend__x86_64_out__output_x86_64_instruction_4_0)
MR_decl_static(fn__ll_backend__x86_64_out__this_file_0_0)
MR_decl_static(ll_backend__x86_64_out__rel_offset_to_string_2_0)
MR_def_extern_entry(ll_backend__x86_64_out__operand_to_string_2_0)
MR_decl_static(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0)
MR_decl_static(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0)
MR_decl_static(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0)
MR_decl_static(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0)
MR_decl_static(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0)
MR_decl_static(ll_backend__x86_64_out__check_pseudo_section_flags_2_0)
MR_decl_static(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0)
MR_decl_static(ll_backend__x86_64_out__check_pseudo_section_type_2_0)
MR_decl_static(ll_backend__x86_64_out__check_section_flags_and_type_3_0)
MR_decl_static(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0)
MR_decl_static(ll_backend__x86_64_out__check_pseudo_type_desc_2_0)
MR_decl_static(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0)
MR_decl_static(ll_backend__x86_64_out__check_operand_not_immediate_2_0)
MR_decl_static(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0)
MR_decl_static(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0)
MR_decl_static(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0)
MR_decl_static(ll_backend__x86_64_out__output_bit_test_instr_6_0)
MR_decl_static(ll_backend__x86_64_out__check_operand_register_2_0)
MR_decl_static(ll_backend__x86_64_out__output_instr_with_condition_7_0)
MR_decl_static(ll_backend__x86_64_out__check_unsigned_int_size_3_0)
MR_decl_static(ll_backend__x86_64_out__check_rc_first_operand_2_0)
MR_decl_static(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0)
MR_decl_static(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0)
MR_decl_static(ll_backend__x86_64_out__output_x86_64_inst_4_0)
MR_decl_static(ll_backend__x86_64_out__output_x86_64_instr_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
1,
17453
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__x86_64_out__output_x86_64_instruction_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__x86_64_out__output_x86_64_instruction_4_0_1,
MR_COMMON(0,0),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[16] =
{
{
MR_string_const("%rax", 4)
},
{
MR_string_const("%rbx", 4)
},
{
MR_string_const("%rcx", 4)
},
{
MR_string_const("%rdx", 4)
},
{
MR_string_const("%rbp", 4)
},
{
MR_string_const("%rsi", 4)
},
{
MR_string_const("%rdi", 4)
},
{
MR_string_const("%rsp", 4)
},
{
MR_string_const("%r8", 3)
},
{
MR_string_const("%r9", 3)
},
{
MR_string_const("%r10", 4)
},
{
MR_string_const("%r11", 4)
},
{
MR_string_const("%r12", 4)
},
{
MR_string_const("%r13", 4)
},
{
MR_string_const("%r14", 4)
},
{
MR_string_const("%r15", 4)
},
};

static const struct mercury_type_2 mercury_vector_common_2_1[16] =
{
{
MR_string_const("%rax", 4)
},
{
MR_string_const("%rbx", 4)
},
{
MR_string_const("%rcx", 4)
},
{
MR_string_const("%rdx", 4)
},
{
MR_string_const("%rbp", 4)
},
{
MR_string_const("%rsi", 4)
},
{
MR_string_const("%rdi", 4)
},
{
MR_string_const("%rsp", 4)
},
{
MR_string_const("%r8", 3)
},
{
MR_string_const("%r9", 3)
},
{
MR_string_const("%r10", 4)
},
{
MR_string_const("%r11", 4)
},
{
MR_string_const("%r12", 4)
},
{
MR_string_const("%r13", 4)
},
{
MR_string_const("%r14", 4)
},
{
MR_string_const("%r15", 4)
},
};

static const struct mercury_type_2 mercury_vector_common_2_2[5] =
{
{
MR_string_const("a", 1)
},
{
MR_string_const("w", 1)
},
{
MR_string_const("x", 1)
},
{
MR_string_const("m", 1)
},
{
MR_string_const("s", 1)
},
};

static const struct mercury_type_2 mercury_vector_common_2_3[5] =
{
{
MR_string_const("a", 1)
},
{
MR_string_const("w", 1)
},
{
MR_string_const("x", 1)
},
{
MR_string_const("m", 1)
},
{
MR_string_const("s", 1)
},
};

static const struct mercury_type_3 mercury_vector_common_3_0[30] =
{
{
MR_string_const("o", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("no", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("b", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("c", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("nae", 3),
MR_string_const("\t", 1)
},
{
MR_string_const("nb", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("nc", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("ae", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("z", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("e", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("nz", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("ne", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("be", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("na", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("nbe", 3),
MR_string_const("\t", 1)
},
{
MR_string_const("a", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("s", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("ns", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("p", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("pe", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("np", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("po", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("l", 1),
MR_string_const("\t", 1)
},
{
MR_string_const("nge", 3),
MR_string_const("\t", 1)
},
{
MR_string_const("nl", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("ge", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("le", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("ng", 2),
MR_string_const("\t", 1)
},
{
MR_string_const("nle", 3),
MR_string_const("\t", 1)
},
{
MR_string_const("g", 1),
MR_string_const("\t", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__x86_64_out__output_x86_64_instruction_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.x86_64_out",
"ll_backend.x86_64_out",
"output_x86_64_instr",
4,
0
},
"ll_backend.x86_64_out",
"x86_64_out.m",
508,
"d1;c5;"
};

MR_decl_entry(fn__string__length_1_0);
MR_declare_entry(mercury__do_call_class_method_3);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module0)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_instruction_4_0);
	MR_init_label5(ll_backend__x86_64_out__output_x86_64_instruction_4_0,3,4,2,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__x86_64_out__output_x86_64_instruction_4_0_i3);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instruction_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\t# ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i4);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i2);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i7);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__x86_64_out__output_x86_64_instruction_4_0_i9);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module1)
	MR_init_entry1(fn__ll_backend__x86_64_out__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__x86_64_out__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module2)
	MR_init_entry1(ll_backend__x86_64_out__rel_offset_to_string_2_0);
	MR_init_label6(ll_backend__x86_64_out__rel_offset_to_string_2_0,20,11,12,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__rel_offset_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr3);
	MR_r2 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i11);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_tempr2;
	if (MR_INT_LT(MR_tempr2,-128)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i20);
	}
	if (MR_INT_GT(MR_tempr2,127)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i20);
	}
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
	}
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("rel_offset_to_string: ro8(int8): unexpected: check_signed_int_size failed", 73);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,-2147483648)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i12);
	}
	if (MR_INT_GT(MR_tempr1,2147483647)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i12);
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
	}
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("rel_offset_to_string: ro32(int32): unexpected check_signed_int_size failed", 74);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,-32768)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i4);
	}
	if (MR_INT_GT(MR_tempr1,32767)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i4);
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
	}
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("rel_offset_to_string: ro16(int16): unexpected check_signed_int_size failed", 74);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module3)
	MR_init_entry1(ll_backend__x86_64_out__operand_to_string_2_0);
	MR_init_label8(ll_backend__x86_64_out__operand_to_string_2_0,41,107,8,5,6,17,109,26)
	MR_init_label8(ll_backend__x86_64_out__operand_to_string_2_0,24,28,29,30,19,36,35,34)
	MR_init_label2(ll_backend__x86_64_out__operand_to_string_2_0,48,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_out__operand_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__x86_64_out__operand_to_string_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__operand_to_string_2_0_i107) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__operand_to_string_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__operand_to_string_2_0_i48));
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_1, (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i5);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i8);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i6);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i6);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i6);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i109);
	}
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, (MR_Integer) MR_tempr1);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i24);
	}
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i26);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i28);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i29);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i30);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i34);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	if (MR_INT_LT(MR_tempr2,-2147483648)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i35);
	}
	if (MR_INT_GT(MR_tempr2,2147483647)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i35);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i36);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("(%rip)", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("instr_ptr_type: rip_constant: unexpected check_signed_int_size failed", 69);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const("(%rip)", 6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i16);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__rel_offset_to_string_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__string_writer__put_int_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module4)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	MR_init_label8(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,2,3,4,5,19,7,8,6)
	MR_init_label6(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,11,14,13,16,17,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i2);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i3);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i4);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i5);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i7);
	}
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i6);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i8);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i19);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i11);
	}
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i10);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Word) MR_string_const(",,", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i14);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i17);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i16);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0_i17);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__string_writer__put_float_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module5)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0);
	MR_init_label7(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,27,4,7,8,19,10,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i29);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(stream__string_writer__put_float_4_0,
		ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i4);
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i29);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i7);
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(stream__string_writer__put_float_4_0,
		ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i8);
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i10);
	}
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i27);
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__pseudo_op_float_args_while_4_0_i19);
MR_def_label(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module6)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	MR_init_label4(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_float_args_5_0_i2);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_float_args_5_0_i3);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_float_args_5_0_i4);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,
		ll_backend__x86_64_out__output_pseudo_op_float_args_5_0_i5);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__word_wrap_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module7)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0);
	MR_init_label8(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,21,4,5,6,7,16,9,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i23);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i4);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i5);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i6);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i7);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i9);
	}
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i21);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__pseudo_op_str_args_while_4_0_i16);
MR_def_label(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module8)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	MR_init_label4(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_str_args_5_0_i2);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_pseudo_op_str_args_5_0_i3);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_pseudo_op_str_args_5_0_i4);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,
		ll_backend__x86_64_out__output_pseudo_op_str_args_5_0_i5);
MR_def_label(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module9)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_flags_2_0);
	MR_init_label2(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_pseudo_section_flags_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_flags_2_0_i2);
	}
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	break; } /* end while */
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module10)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0);
	MR_init_label2(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,3,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_2, (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("m", 1)) != 0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localtailcall(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module11)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_type_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_pseudo_section_type_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_pseudo_section_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_type_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("\100nobits", 7);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\100progbits", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module12)
	MR_init_entry1(ll_backend__x86_64_out__check_section_flags_and_type_3_0);
	MR_init_label6(ll_backend__x86_64_out__check_section_flags_and_type_3_0,2,4,5,3,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_section_flags_and_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,
		ll_backend__x86_64_out__check_section_flags_and_type_3_0_i2);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_section_flags_and_type_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,
		ll_backend__x86_64_out__check_section_flags_and_type_3_0_i9);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_section_flags_and_type_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,
		ll_backend__x86_64_out__check_section_flags_and_type_3_0_i9);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("check_section_flags_and_type: unexpected: flag \'m\' has to have \'type\' arguments", 79);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__x86_64_out__check_section_flags_and_type_3_0_i3);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,
		ll_backend__x86_64_out__check_section_flags_and_type_3_0_i9);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_section_flags_and_type_3_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__x86_64_out__check_section_flags_and_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module13)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0);
	MR_init_label3(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,11,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_3, (MR_Integer) MR_tempr1);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i5);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module14)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_pseudo_type_desc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_type_desc_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("\100function", 9);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_pseudo_type_desc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\100object", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__put_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module15)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0);
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,336,5,7,339,3,9,11,13)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,420,16,17,18,19,21,22,421)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,26,28,423,32,422,36,37,38)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,41,43,45,47,49,51,53,55)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,57,424,60,61,62,425,66,67)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,68,71,73,75,426,78,427,82)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,85,87,428,90,91,92,429,96)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,430,100,431,104,107,109,434,112)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,113,114,433,118,435,122,436,126)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,437,130,438,134,439,138,440,142)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,143,144,441,148,443,152,444,156)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,157,158,442,162,445,166,167,170)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,446,173,447,177,178,448,182,185)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,187,189,191,193,195,197,449,200)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,450,204,207,451,210,452,214,215)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,218,453,221,222,454,225,226,455)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,230,456,234,235,342,237,238,242)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,243,244,245,246,247,239,249,236)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,253,254,457,258,259,260,263,265)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,458,268,269,270,273,275,277,279)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,459,282,460,286,461,290,291,292)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,462,296,463,300,352,302,464,306)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,309,466,312,467,316,319,321,323)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,432,326,465,330,331,332,333,334)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i336) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i339));
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i45) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i323) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i71) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i73) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i75) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i109) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i185) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i189) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i191) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i195) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i197));
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".align", 6);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	MR_r6 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".ascii", 6);
	MR_r4 = MR_ctfield(2, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i420) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i421) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i422) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i423) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i43) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i424) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i425) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i426) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i427) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i85) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i87) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i428) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i429) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i430) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i431) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i107) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i432) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i433) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i434) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i435) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i436) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i437) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i438) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i439) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i440) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i441) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i442) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i443) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i444) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i445) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i170) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i446) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i447) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i448) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i187) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i193) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i449) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i450) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i207) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i451) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i452) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i218) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i453) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i454) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i455) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i456) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i457) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i263) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i265) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i458) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i273) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i275) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i277) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i279) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i459) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i460) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i461) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i462) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i463) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i464) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i465) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i309) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i466) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i467) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i319) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i321));
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.abort\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".asciiz", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".balign", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".byte", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i16);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.comm\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i17);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i18);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i19);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i21);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i22);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i352);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.data\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i26);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i28);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i352);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i32);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.def\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i36);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i37);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i38);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.desc\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.dim\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".double", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.eject\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.elseif\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.end\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.endef\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.endfunc\n", 10);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.endif\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.endm\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i60);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i61);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i62);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.equ\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i66);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i67);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i68);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.equiv\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.err\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.exitm\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.extern\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i78);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.fail\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i82);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.file\t\"", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".repeat", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".float", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i90);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i91);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i92);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.func\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i96);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.global\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i100);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.globl\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i104);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.hidden\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".hword", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.ident\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i112);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i113);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i114);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifc\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i118);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifdef\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i122);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifeq\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i126);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifge\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i130);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifgt\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i134);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifle\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i138);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.iflt\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i142);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i143);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i144);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnc\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i148);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifndef\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i152);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifne\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i156);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i157);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i158);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnes\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i162);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnotdef\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i166);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i167);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.include\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".int", 4);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i173);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.internal\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tlcomm\t", 7);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i177);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i178);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i222);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.line\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i182);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i222);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.list\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".long", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.macro\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.nolist\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".p2align", 8);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.popsection\n", 13);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.previous\n", 11);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i200);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.print\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i204);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.protected\t", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".psize", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i210);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.purgem\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.pushsection\t", 14);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i214);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i215);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i222);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("\t.quad\t", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.rept\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i221);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i222);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i225);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i226);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.sbttl\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i230);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.scl\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.section\t", 10);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i234);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i235);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i237);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i236);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_section_flags_and_type_3_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i238);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i239);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i239);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i242);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i243);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\"", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i244);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i245);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_type_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i246);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i247);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i342);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i249);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_pseudo_op: section: check_section_flags_and_type unexpected", 73);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i236);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i253);
	}
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i254);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i352);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i258);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i259);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i260);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.set\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".short", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".single", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i268);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i269);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i270);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.size\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".skip", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".sleb128\t", 9);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".space", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".string", 7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i282);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.struct\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i286);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.subsection\t", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i290);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i291);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i292);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.symver\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i296);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.tag\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,463)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\ttext\t", 6);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i300);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i302);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i352);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i306);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.title\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".uleb128", 8);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i312);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.val\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,467)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i316);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.version\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".weak", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".word", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\t.else\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i326);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.if\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_type_desc_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i330);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i331);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i333);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.type\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module16)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_not_immediate_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_not_immediate_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_operand_not_immediate_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_not_immediate_2_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_operand_not_immediate_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module17)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	MR_init_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,2,4,7,11,14,15,16,17)
	MR_init_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,18,19,20,12,23,24,25,26)
	MR_init_label2(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,27,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i2);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i28);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_not_imm_dest: unexpected: invalid operands - two memory references are not allowed", 95);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i11);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i12);
	}
	MR_r2 = (MR_Word) MR_string_const(", %r13\t", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i14);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tmov\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i15);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i16);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("# move immediate to temp reg\n", 29);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i17);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i18);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i19);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i20);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(", %r13\t", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i28);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i23);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i24);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i25);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i26);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i27);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i28);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module18)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	MR_init_label8(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,4,6,9,10,11,12,8,5)
	MR_init_label1(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i4);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i6);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i5);
	}
	if (MR_INT_LT(MR_r2,-128)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i8);
	}
	if (MR_INT_GT(MR_r2,127)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i9);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i10);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i11);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0_i12);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_8bit_rel_offset: unexpected: check_signed_int_size failed", 70);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_8bit_rel_offset: unexpected: string.to_int failed", 62);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_8bit_rel_offset: unexpected: invalid operand - operand is not a relative offset", 92);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module19)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module20)
	MR_init_entry1(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	MR_init_label8(ll_backend__x86_64_out__output_bit_test_instr_6_0,54,5,6,9,11,14,15,16)
	MR_init_label5(ll_backend__x86_64_out__output_bit_test_instr_6_0,17,18,19,13,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_bit_test_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i54);
	}
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_bit_test_instr: bt: unexpected: invalid first operand - immediate value is not allowed", 93);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i5);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_bit_test_instr: bt: unexpected: invalid second operand - memory reference is not allowed", 95);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i9);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i11);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i10);
	}
	if (MR_INT_LT(MR_r2,-128)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i13);
	}
	if (MR_INT_GT(MR_r2,127)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i14);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i15);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_bit_test_instr_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_bit_test_instr_6_0_i16);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i17);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i18);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_bit_test_instr_6_0_i19);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_bit_test_instr_6_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_bit_test_instr: bt: unexpected: invalid second operand", 61);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_bit_test_instr: unexpected: string.to_int failed", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module21)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_register_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_register_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_operand_register_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_register_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_operand_register_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module22)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	MR_init_label8(ll_backend__x86_64_out__output_instr_with_condition_7_0,41,6,7,8,9,10,11,13)
	MR_init_label3(ll_backend__x86_64_out__output_instr_with_condition_7_0,17,18,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_instr_with_condition_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_with_condition: unexpected:invalid first operand - immediate value is not allowed", 94);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, ((MR_Integer) MR_r6 * (MR_Integer) 2));
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i6);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i7);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i8);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i9);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i10);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i11);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i15);
	}
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i17);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i18);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_instr_with_condition: invalid second operand", 51);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module23)
	MR_init_entry1(ll_backend__x86_64_out__check_unsigned_int_size_3_0);
	MR_init_label2(ll_backend__x86_64_out__check_unsigned_int_size_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_unsigned_int_size_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		ll_backend__x86_64_out__check_unsigned_int_size_3_0_i2);
MR_def_label(ll_backend__x86_64_out__check_unsigned_int_size_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_unsigned_int_size_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_unsigned_int_size_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__x86_64_out__check_unsigned_int_size_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module24)
	MR_init_entry1(ll_backend__x86_64_out__check_rc_first_operand_2_0);
	MR_init_label8(ll_backend__x86_64_out__check_rc_first_operand_2_0,14,51,4,6,52,8,5,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_rc_first_operand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__x86_64_out__check_rc_first_operand_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__check_rc_first_operand_2_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__check_rc_first_operand_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__check_rc_first_operand_2_0_i12));
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__check_rc_first_operand_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__x86_64_out__check_rc_first_operand_2_0_i6);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i5);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i8);
	}
	if (MR_INT_GT(MR_r2,255)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("check_rc_first_operand: unexpected: string.to_int", 49);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("check_rc_first_operand: unexpected: invalid operand", 51);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module25)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0);
	MR_init_label2(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module26)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0);
	MR_init_label8(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,12,8,9,5,6,4,17,16)
	MR_init_label1(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i5);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i8);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i12);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i9);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i6);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i17);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i16);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i2);
	}
	if (MR_INT_GT(MR_r2,-1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("x86_64_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("check_operand_unsigned_imm_or_reg: unexpected: string.to_int failed", 67);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_regs__get_scratch_reg_0_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module27)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_inst_4_0);
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,471,3,6,474,9,770,13,16)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,17,21,22,23,24,25,26,27)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,19,30,15,32,771,35,38,39)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,37,42,44,46,48,50,772,53)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,56,57,55,60,62,64,66,68)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,70,72,74,77,773,81,84,87)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,88,89,90,91,86,94,83,96)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,774,99,102,101,105,107,109,111)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,113,115,775,118,119,123,124,125)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,120,128,131,776,134,135,136,138)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,140,143,142,146,147,148,529,150)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,152,153,156,158,777,161,162,165)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,778,168,171,174,175,176,177,178)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,173,181,170,183,185,187,189,191)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,193,195,197,200,202,204,206,209)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,211,779,214,215,218,780,221,224)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,227,228,229,230,231,232,226,235)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,223,237,239,828,243,246,245,249)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,781,252,255,258,259,260,261,262)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,263,264,257,267,254,269,782,272)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,275,278,279,280,281,282,277,285)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,274,287,784,290,293,296,297,298)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,299,300,295,303,292,305,307,785)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,311,313,315,783,318,321,324,325)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,326,327,328,323,331,320,333,786)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,336,339,342,345,346,347,348,349)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,350,351,352,344,355,341,357,338)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,359,787,362,365,368,369,370,371)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,372,367,375,364,377,788,380,383)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,386,389,390,391,392,393,394,395)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,396,388,399,385,401,382,403,405)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,407,409,789,413,416,419,420,421)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,422,423,418,426,415,428,430,790)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,433,436,439,440,441,442,443,438)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,446,435,448,791,451,454,457,458)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_inst_4_0,459,460,461,462,456,453,466,468)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i471) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i474));
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,471)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i111) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i109) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i107) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i185) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i204) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i211) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i218) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i405) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i407));
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("adc", 3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("add", 3);
	MR_r4 = MR_ctfield(2, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i770) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i771) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i46) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i772) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i74) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i77) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i773) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i774) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i113) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i115) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i775) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i131) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i776) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i156) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i158) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i165) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i777) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i778) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i187) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i189) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i191) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i193) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i195) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i197) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i200) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i202) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i430) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i206) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i209) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i779) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i780) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i239) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i781) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i782) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i783) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i784) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i307) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i785) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i786) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i787) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i788) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i409) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i789) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i790) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i791) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_inst_4_0_i468));
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("and", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,770)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i13);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i16);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i17);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i19);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("bsf", 3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i22);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bsr", 3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i22);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i23);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i24);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i25);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i26);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i27);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i30);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: bs: unexpected: second operand is not a register", 69);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i32);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: bsf: unexpected: first operand is an immediate value", 73);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,771)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i35);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i38);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i39);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tbswap\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i42);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: bswap: unexpected: operand is not a register", 65);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bt", 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("btc", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("btr", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bts", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,772)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i53);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i55);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i56);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i57);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcall\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i60);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: call: unexpected: invalid target operand", 61);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcbw\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcdq\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcdqe\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tclc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcld\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcmc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("cmov", 4);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r6 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("cmp", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,773)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i81);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i83);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i84);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i86);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i87);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i88);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i89);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i90);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i91);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcmp\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i94);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: xmpxchg: unexpected: invalid second operand", 64);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i96);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: xmpxchg: unexpected: invalid first operand", 63);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,774)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i99);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i101);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i102);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcmpxchg8b", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i105);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: cmpxchg8b: unexpected:invalid operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcqo\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcwd\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tcwde\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("dec", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("div", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,775)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i118);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i119);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i120);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i120);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\tenter\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i123);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i124);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i125);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i529);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i128);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: enter: unexpected: check_unsigned_int_size failed", 70);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("idiv", 4);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,776)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i134);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\timul\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i135);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i136);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i138);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\t\t", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i140);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i142);
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__get_scratch_reg_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i143);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i146);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i146);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i147);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i148);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i150);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\t", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i152);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i153);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("inc", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("j", 1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,777)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i161);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i162);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tjmp\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("jrcxz", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,778)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i168);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i170);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i171);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i173);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i174);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i175);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i176);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i177);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i178);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tlea\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i181);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_inst: lea: unexpected: invalid second operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i183);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_inst: lea: unexpected: invalid first operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tleave\t", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loop", 4);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loope", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopne", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopnz", 6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopz", 5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("mov", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("mul", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("neg", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("nop", 3);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("or", 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("pop", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tpopfq\t", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,779)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\tpush\t", 6);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i214);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i215);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tpushfq\t", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,780)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_rc_first_operand_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i221);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i223);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i226);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i227);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i228);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\trc\t", 4);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i229);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i230);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i231);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i232);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i235);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: rc: unexpected invalid second operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i237);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: rc: unexpected invalid first operand", 57);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i828);
	}
	MR_r3 = (MR_Word) MR_string_const("\tret\t\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,828)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r5, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i243);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i245);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\tret\t", 5);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i246);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i529);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i249);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: ret: unexpected:check_unsigned_int_size failed", 67);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,781)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i252);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i254);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i255);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i257);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i258);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i259);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i260);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tro", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i261);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i262);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i263);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i264);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i267);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: ro: unexpected: invalid second operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i269);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: ro: unexpected invalid first operand", 57);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,782)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i272);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i274);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i275);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i277);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i278);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i279);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i280);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i281);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i282);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tsal\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i285);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: sal: unexpected: invalid second operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i287);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: sal: unexpected:invalid first operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,784)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i290);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i292);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i293);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i295);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i296);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i297);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i298);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i299);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i300);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tsar\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i303);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: sar: unexpected:invalid second operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i305);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: sar: unexpected: invalid first operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("sbb", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,785)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i311);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i313);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("set", 3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_with_condition_7_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i315);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: set: unexpected invalid first operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,783)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i318);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i320);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i321);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i323);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i324);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i325);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i326);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i327);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i328);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshl\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i331);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shl: unexpected: invalid second operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i333);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shl: unexpected: invalid first operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,786)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i336);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i338);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i339);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i341);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i342);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i344);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i345);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i346);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i347);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i348);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshld\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i349);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i350);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i351);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i352);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i355);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shld: unexpected:invalid third operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i357);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shld: unexpected: invalid second operand", 61);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i359);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shld: unexpected invalid first operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,787)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i362);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i364);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i365);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i367);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i368);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i369);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i370);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i371);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i372);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshr\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i375);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shr: unexpected invalid second operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i377);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shr: unexpected invalid first operand", 58);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,788)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i380);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i382);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i383);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i385);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i386);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i388);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i389);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,389)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i390);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i391);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i392);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshrd\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i393);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i394);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,394)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i395);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i396);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i399);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shrd: unexpected invalid third operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i401);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shrd: unexpected invalid second operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i403);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: shrd: unexpected: invalid first operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tstc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("\tstd\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("sub", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,789)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i413);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i415);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i416);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i418);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i419);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i420);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i421);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i422);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i423);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\ttest\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i426);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: test: unexpected invalid second operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: test: unexpected invalid first operand", 59);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("not", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,790)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i433);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i435);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i436);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i438);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i439);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i440);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i441);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i442);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i443);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\txadd\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i446);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: unexpected\n                xadd second operand is an immediate value", 89);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i448);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: unexpected\n            xadd first operand is not a register", 80);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,791)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i451);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i453);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i454);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i456);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i457);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i458);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i459);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i460);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i461);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\txchg\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i462);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i466);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_out__this_file_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i466);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_x86_64_instr: xchg: unexpected invalid second operand", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("xor", 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__split_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module28)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_instr_4_0);
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_instr_4_0,3,5,6,8,9,10,11,12)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_instr_4_0,7,24,26,27,28,19,21,22)
	MR_init_label1(ll_backend__x86_64_out__output_x86_64_instr_4_0,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_instr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i21));
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i5);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\t# ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i6);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i8);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,68)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__split_4_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i9);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i10);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i11);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i12);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr1),
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0_i21));
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i28);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i26);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i27);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i28);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__x86_64_out__output_x86_64_inst_4_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i22);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__x86_64_out_maybe_bunch_0(void)
{
	ll_backend__x86_64_out_module0();
	ll_backend__x86_64_out_module1();
	ll_backend__x86_64_out_module2();
	ll_backend__x86_64_out_module3();
	ll_backend__x86_64_out_module4();
	ll_backend__x86_64_out_module5();
	ll_backend__x86_64_out_module6();
	ll_backend__x86_64_out_module7();
	ll_backend__x86_64_out_module8();
	ll_backend__x86_64_out_module9();
	ll_backend__x86_64_out_module10();
	ll_backend__x86_64_out_module11();
	ll_backend__x86_64_out_module12();
	ll_backend__x86_64_out_module13();
	ll_backend__x86_64_out_module14();
	ll_backend__x86_64_out_module15();
	ll_backend__x86_64_out_module16();
	ll_backend__x86_64_out_module17();
	ll_backend__x86_64_out_module18();
	ll_backend__x86_64_out_module19();
	ll_backend__x86_64_out_module20();
	ll_backend__x86_64_out_module21();
	ll_backend__x86_64_out_module22();
	ll_backend__x86_64_out_module23();
	ll_backend__x86_64_out_module24();
	ll_backend__x86_64_out_module25();
	ll_backend__x86_64_out_module26();
	ll_backend__x86_64_out_module27();
	ll_backend__x86_64_out_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__x86_64_out__init(void);
void mercury__ll_backend__x86_64_out__init_type_tables(void);
void mercury__ll_backend__x86_64_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__x86_64_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__x86_64_out__init_complexity_procs(void);
#endif

void mercury__ll_backend__x86_64_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__x86_64_out_maybe_bunch_0();
	mercury__ll_backend__x86_64_out__init_debugger();
}

void mercury__ll_backend__x86_64_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__x86_64_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__x86_64_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__x86_64_out);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__x86_64_out__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
