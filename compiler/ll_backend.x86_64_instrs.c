/*
** Automatically generated from `x86_64_instrs.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__ll_backend__x86_64_instrs__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.x86_64_instrs.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.x86_64_instrs.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.x86_64_instrs.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.x86_64_instrs.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.x86_64_instrs.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.x86_64_instrs.c"
#line 49 "ll_backend.x86_64_instrs.c"
#include "ll_backend.x86_64_instrs.mh"

#line 52 "ll_backend.x86_64_instrs.c"
#line 53 "ll_backend.x86_64_instrs.c"
#ifndef LL_BACKEND__X86_64_INSTRS_DECL_GUARD
#define LL_BACKEND__X86_64_INSTRS_DECL_GUARD

#line 57 "ll_backend.x86_64_instrs.c"
#line 58 "ll_backend.x86_64_instrs.c"

#endif
#line 61 "ll_backend.x86_64_instrs.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_flags_reg_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_label_name_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_offset_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rmrol_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint32_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_module_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0,
	mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0;
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__base_address_0_0, 12,5,1)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0, 4)
MR_decl_label4(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0, 15,5,22,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0, 16,5,1)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int16_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int32_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int8_0_0, 4)
MR_decl_label7(__Unify___ll_backend__x86_64_instrs__operand_0_0, 15,5,11,24,9,26,1)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 6,8,12,236,16,20,22,26,30,34)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 38,40,43,54,56,61,63,65,67,71)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 75,77,79,81,83,88,90,92,94,96)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 98,100,102,104,106,108,110,112,114,118)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 120,122,125,131,133,139,141,143,147,149)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 151,155,157,159,161,164,166,170,172,176)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 180,182,186,190,194,198,200,202,204,206)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 210,212,216,218,220,224,228,229,231,237)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 1)
MR_decl_label4(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0, 15,5,22,1)
MR_decl_label6(__Unify___ll_backend__x86_64_instrs__rmrol_0_0, 11,7,13,5,21,1)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint16_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint32_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint8_0_0, 4)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 5,7,11,13,297,17,19,23,25,27)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 29,33,35,39,41,45,47,51,53,57)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 67,69,71,73,75,79,81,85,92,96)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 100,102,106,110,112,114,118,122,124,126)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 130,134,136,141,145,149,153,157,161,163)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 167,171,176,178,182,187,192,194,196,198)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 202,204,206,208,210,214,216,220,222,226)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 228,230,232,236,238,240,244,246,250,252)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 254,259,260,262,266,268,272,276,278,282)
MR_decl_label5(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 284,288,290,298,1)
MR_decl_label6(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0, 5,15,7,11,21,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0, 4,6,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0, 16,5,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0, 4,9,1)
MR_decl_label6(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0, 4,6,8,10,14,1)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 93,4,5,96,3,6,7,8,9,10)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 11,12,13,14,15,16,17,18,19,20)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 21,22,23,24,25,26,27,28,29,30)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 51,52,53,54,55,56,57,58,59,60)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 61,62,63,64,65,66,67,68,69,70)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 71,72,73,74,75,76,77,78,79,80)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 81,82,83,84,85,86,87,88,89,90)
MR_decl_label2(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 91,92)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 70,3,4,73,5,6,7,8,9,10)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 11,12,13,14,15,16,17,18,19,20)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 21,22,23,24,25,26,27,28,29,30)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 51,52,53,54,55,56,57,58,59,60)
MR_decl_label9(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 61,62,63,64,65,66,67,68,69)
MR_decl_label7(__Compare___ll_backend__x86_64_instrs__base_address_0_0, 3,2,7,5,10,12,45)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0, 3,2)
MR_decl_label7(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0, 3,2,36,21,5,48,10)
MR_decl_label5(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0, 3,2,7,5,10)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int16_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int32_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int8_0_0, 3,2)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0, 3,44,49,55,5,7,99,31,35,73)
MR_decl_label3(__Compare___ll_backend__x86_64_instrs__operand_0_0, 18,82,21)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 4,5,6,7,11,14,18,24,391,27)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 30,33,37,43,46,49,53,59,62,65)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 68,74,84,87,92,95,103,106,109,112)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 116,122,125,128,133,136,139,142,146,149)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 154,157,160,163,166,169,172,175,180,183)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 186,189,194,197,200,203,206,209,214,218)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 223,226,230,238,241,244,247,252,255,258)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 263,266,269,272,275,278,283,287,294,297)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 302,305,308,311,316,319,324,327,330,335)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 338,341,344,347,352,355,358,361,364,367)
MR_decl_label8(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 370,373,376,377,380,383,8,396)
MR_decl_label7(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0, 3,2,36,21,5,48,10)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__rmrol_0_0, 3,27,16,19,38,43,40,5,11,7)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint16_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint32_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint8_0_0, 3,2)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 4,5,6,7,10,13,18,21,379,26)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 29,34,37,41,47,50,53,58,61,66)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 69,74,77,82,91,94,98,104,107,112)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 115,120,126,129,132,135,140,143,146,150)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 156,159,162,167,170,173,176,182,185,188)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 191,194,197,200,205,208,212,215,220,224)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 228,231,235,241,244,247,251,257,260,265)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 268,273,276,281,284,289,292,297,300,304)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 310,313,318,321,325,332,333,336,341,344)
MR_decl_label9(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 349,352,355,360,363,368,371,8,384)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0, 3,5,38,43,16,19,21,27,30,31)
MR_decl_label4(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0, 3,2,5,22)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label1(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0, 77)
MR_def_extern_entry(fn__ll_backend__x86_64_instrs__init_x86_64_module_1_0)
MR_def_extern_entry(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0)
MR_def_extern_entry(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0)
MR_def_extern_entry(fn__ll_backend__x86_64_instrs__num_x86_64_regs_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__base_address_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__base_address_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__condition_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__condition_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__direction_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__direction_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__int16_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__int16_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__int32_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__int32_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__int8_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__int8_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__label_name_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__label_name_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__offset_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__offset_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__operand_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__operand_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0)
MR_def_extern_entry(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__pseudo_section_flag_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__pseudo_section_flag_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__rmrol_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__rmrol_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__uint16_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__uint16_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__uint32_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__uint32_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__uint8_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__uint8_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0)
MR_def_extern_entry(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_instrs__x86_64_reg_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_instrs__x86_64_reg_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0),
MR_string_const("", 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__x86_64_instrs, pseudo_section_flag)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_procedure)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_base_address_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_base_address_0_0[] = {
	"base_offset",
	"base_reg"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_0 = {
	"base_reg",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_base_address_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_base_address_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_base_address_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_base_address_0_1[] = {
	"base_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_1 = {
	"base_expr",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_base_address_0_1,
	mercury_data_ll_backend__x86_64_instrs__field_names_base_address_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_base_address_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_base_address_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_base_address_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_base_address_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_base_address_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_base_address_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_base_address_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_base_address_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__base_address_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__base_address_0_0)),
	"ll_backend.x86_64_instrs",
	"base_address",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_base_address_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_base_address_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_base_address_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_0 = {
	"o",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_1 = {
	"no",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_2 = {
	"b",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_3 = {
	"c",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_4 = {
	"nae",
	4
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_5 = {
	"nb",
	5
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_6 = {
	"nc",
	6
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_7 = {
	"ae",
	7
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_8 = {
	"z",
	8
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_9 = {
	"e",
	9
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_10 = {
	"nz",
	10
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_11 = {
	"ne",
	11
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_12 = {
	"be",
	12
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_13 = {
	"na",
	13
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_14 = {
	"nbe",
	14
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_15 = {
	"a",
	15
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_16 = {
	"s",
	16
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_17 = {
	"ns",
	17
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_18 = {
	"p",
	18
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_19 = {
	"pe",
	19
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_20 = {
	"np",
	20
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_21 = {
	"po",
	21
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_22 = {
	"l",
	22
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_23 = {
	"nge",
	23
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_24 = {
	"nl",
	24
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_25 = {
	"ge",
	25
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_26 = {
	"le",
	26
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_27 = {
	"ng",
	27
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_28 = {
	"nle",
	28
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_29 = {
	"g",
	29
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_condition_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_2,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_4,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_5,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_6,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_7,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_8,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_9,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_10,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_11,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_12,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_13,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_14,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_15,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_16,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_17,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_18,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_19,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_20,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_21,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_22,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_23,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_24,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_25,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_26,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_27,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_28,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_29
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_condition_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_15,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_7,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_2,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_12,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_9,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_29,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_25,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_22,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_26,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_13,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_4,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_5,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_14,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_6,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_11,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_27,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_23,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_24,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_28,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_20,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_17,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_10,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_18,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_19,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_21,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_16,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_condition_0_8
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_condition_0[] = {
	24,
	20,
	2,
	4,
	11,
	12,
	14,
	1,
	29,
	5,
	23,
	15,
	3,
	10,
	13,
	0,
	28,
	22,
	25,
	26,
	21,
	27,
	8,
	17,
	18,
	7,
	9,
	16,
	19,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__condition_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__condition_0_0)),
	"ll_backend.x86_64_instrs",
	"condition",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_condition_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_condition_0 },
	30,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_condition_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_0 = {
	"f",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_1 = {
	"r",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_direction_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_direction_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_direction_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_direction_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__direction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__direction_0_0)),
	"ll_backend.x86_64_instrs",
	"direction",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_direction_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_direction_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_direction_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_flags_reg_0 = {
	"rflags",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_flags_reg_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_flags_reg_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0)),
	"ll_backend.x86_64_instrs",
	"flags_reg",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_flags_reg_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_flags_reg_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_flags_reg_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_0 = {
	"imm8",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_1 = {
	"imm16",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_2 = {
	"imm32",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_imm_operand_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_imm_operand_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_imm_operand_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_imm_operand_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_imm_operand_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_imm_operand_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0)),
	"ll_backend.x86_64_instrs",
	"imm_operand",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_imm_operand_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_imm_operand_0 },
	3,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_imm_operand_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_instr_ptr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_instr_ptr_0_0[] = {
	"rip_byte_offset"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_0 = {
	"rip_constant",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_instr_ptr_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_instr_ptr_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_instr_ptr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_instr_ptr_0_1[] = {
	"rip_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_1 = {
	"rip_expr",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_instr_ptr_0_1,
	mercury_data_ll_backend__x86_64_instrs__field_names_instr_ptr_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_instr_ptr_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_instr_ptr_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_instr_ptr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_instr_ptr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_instr_ptr_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_instr_ptr_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_instr_ptr_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_instr_ptr_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0)),
	"ll_backend.x86_64_instrs",
	"instr_ptr",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_instr_ptr_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_instr_ptr_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_instr_ptr_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int16_0 = {
	"int16",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_int16_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__int16_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__int16_0_0)),
	"ll_backend.x86_64_instrs",
	"int16",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int16_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int16_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_int16_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int32_0 = {
	"int32",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_int32_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__int32_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__int32_0_0)),
	"ll_backend.x86_64_instrs",
	"int32",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int32_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int32_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_int32_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int8_0 = {
	"int8",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_int8_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__int8_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__int8_0_0)),
	"ll_backend.x86_64_instrs",
	"int8",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int8_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_int8_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_int8_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_label_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__label_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__label_name_0_0)),
	"ll_backend.x86_64_instrs",
	"label_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_offset_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__offset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__offset_0_0)),
	"ll_backend.x86_64_instrs",
	"offset",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_0 = {
	"operand_reg",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_1 = {
	"operand_imm",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_2 = {
	"operand_mem_ref",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_3 = {
	"operand_rel_offset",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_4 = {
	"operand_label",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_operand_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_3[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_4

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_operand_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_operand_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_operand_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_4,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_operand_0_3
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_operand_0[] = {
	3,
	0,
	2,
	4,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__operand_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0)),
	"ll_backend.x86_64_instrs",
	"operand",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_operand_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_operand_0 },
	5,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_operand_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_0 = {
	"abort",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_1[] = {
	"align_bits",
	"align_fill_value",
	"align_skip_bytes"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_1 = {
	"align",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_1,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_1,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_2[] = {
	"ascii_literals"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_2 = {
	"ascii",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_2,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_3[] = {
	"asciiz_literals"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_3 = {
	"asciiz",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_3,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_3,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_4[] = {
	"balign_bits",
	"balign_fill_value",
	"balign_skip_bytes"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_4 = {
	"balign",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_4,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_4,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_5[] = {
	"byte_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_5 = {
	"byte",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_5,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_5,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_6[] = {
	"comm_symbol",
	"comm_length",
	"comm_align"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_6 = {
	"comm",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_6,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_6,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_7[] = {
	"data_subsection"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_7 = {
	"data",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_7,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_7,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_8[] = {
	"desc_symbol",
	"desc_abs_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_8 = {
	"desc",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_8,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_8,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_9[] = {
	"def_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_9 = {
	"def",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_9,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_9,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_10 = {
	"dim",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_float_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_11[] = {
	"double_nums"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_11 = {
	"double",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_11,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_11,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_12 = {
	"eject",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_13 = {
	"x86_64_pseudo_else",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_14 = {
	"elseif",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_15 = {
	"end",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_16 = {
	"endef",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_17 = {
	"endfunc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_18 = {
	"endif",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_19 = {
	"endm",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	19,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_20[] = {
	"equ_symbol",
	"equ_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_20 = {
	"equ",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	20,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_20,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_20,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_21[] = {
	"equiv_symbol",
	"equiv_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_21 = {
	"equiv",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	21,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_21,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_21,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_22 = {
	"err",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	22,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_23 = {
	"exitm",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	23,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_24 = {
	"extern",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	24,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_25[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_25[] = {
	"fail_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_25 = {
	"fail_",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	25,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_25,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_25,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_26[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_26[] = {
	"file_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_26 = {
	"file",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	26,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_26,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_26,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_27[] = {
	"fill_repeat",
	"fill_size",
	"fill_value"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_27 = {
	"fill",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	27,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_27,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_27,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_28[] = {
	"float_nums"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_28 = {
	"float",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	28,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_28,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_28,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_29[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_29[] = {
	"func_name",
	"func_label"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_29 = {
	"func_",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	29,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_29,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_29,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_30[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_30[] = {
	"global_symbol"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_30 = {
	"global",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	30,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_30,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_30,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_31[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_31[] = {
	"globl_symbol"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_31 = {
	"globl",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	31,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_31,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_31,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_32[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_32[] = {
	"hidden_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_32 = {
	"hidden",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	32,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_32,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_32,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_33[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_33[] = {
	"hword_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_33 = {
	"hword",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	33,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_33,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_33,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_34 = {
	"ident",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	34,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_35[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_35[] = {
	"if_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_35 = {
	"x86_64_pseudo_if",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	35,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_35,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_35,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_36[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_36[] = {
	"ifdef_symbol"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_36 = {
	"ifdef",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	36,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_36,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_36,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_37[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_37[] = {
	"ifc_string1",
	"ifc_string2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_37 = {
	"ifc",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	37,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_37,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_37,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_38[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_38[] = {
	"ifeq_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_38 = {
	"ifeq",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	38,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_38,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_38,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_39[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_39[] = {
	"ifge_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_39 = {
	"ifge",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	39,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_39,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_39,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_40[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_40[] = {
	"ifgt_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_40 = {
	"ifgt",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	40,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_40,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_40,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_41[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_41[] = {
	"ifle_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_41 = {
	"ifle",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	41,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_41,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_41,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_42[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_42[] = {
	"iflt_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_42 = {
	"iflt",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	42,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_42,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_42,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_43[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_43[] = {
	"ifnc_string1",
	"ifnc_string2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_43 = {
	"ifnc",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	43,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_43,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_43,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_44[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_44[] = {
	"ifndef_symbol"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_44 = {
	"ifndef",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	44,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_44,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_44,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_45[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_45[] = {
	"ifnotdef_symbol"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_45 = {
	"ifnotdef",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	29,
	45,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_45,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_45,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_46[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_46[] = {
	"ifne_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_46 = {
	"ifne",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	30,
	46,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_46,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_46,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_47[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_47[] = {
	"ifnes_string1",
	"ifnes_string2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_47 = {
	"ifnes",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	31,
	47,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_47,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_47,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_48[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_48[] = {
	"include_file"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_48 = {
	"include",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	32,
	48,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_48,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_48,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_49[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_49[] = {
	"int_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_49 = {
	"int",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	33,
	49,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_49,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_49,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_50[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_50[] = {
	"internal_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_50 = {
	"internal",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	34,
	50,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_50,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_50,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_51[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_51[] = {
	"lcomm_symbol",
	"lcomm_length"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_51 = {
	"lcomm",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	35,
	51,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_51,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_51,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_52[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_52[] = {
	"line_number"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_52 = {
	"line",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	36,
	52,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_52,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_52,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_53 = {
	"list",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	53,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_54[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_54[] = {
	"long_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_54 = {
	"long",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	37,
	54,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_54,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_54,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_55 = {
	"macro",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	55,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_56 = {
	"nolist",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	56,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_57[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_57[] = {
	"p2align_pow_bit",
	"p2align_fill_value",
	"p2align_skip_bytes"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_57 = {
	"p2align",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	38,
	57,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_57,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_57,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_58 = {
	"popsection",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	58,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_59 = {
	"previous",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	18,
	59,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_60[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_60 = {
	"print",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	39,
	60,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_60,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_61[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_61[] = {
	"protected_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_61 = {
	"protected",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	40,
	61,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_61,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_61,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_62[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_62[] = {
	"psize_lines",
	"psize_cols"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_62 = {
	"psize",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	41,
	62,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_62,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_62,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_63[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_63[] = {
	"purgem_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_63 = {
	"purgem",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	42,
	63,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_63,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_63,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_64[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_64[] = {
	"pushsection_name",
	"pushsection_subsect"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_64 = {
	"pushsection",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	43,
	64,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_64,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_64,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_65[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_65[] = {
	"quad_bignums"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_65 = {
	"quad",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	44,
	65,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_65,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_65,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_66[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_66[] = {
	"rept_count"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_66 = {
	"rept",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	45,
	66,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_66,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_66,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_67[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_67[] = {
	"sbttl_subheading"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_67 = {
	"sbttl",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	46,
	67,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_67,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_67,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_68[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_68[] = {
	"scl_class"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_68 = {
	"scl",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	47,
	68,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_68,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_68,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_69[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_69[] = {
	"section_name",
	"section_flags",
	"section_type",
	"section_entsize"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_69 = {
	"section",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	48,
	69,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_69,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_69,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_70[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_70[] = {
	"set_symbol",
	"set_expression"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_70 = {
	"set",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	49,
	70,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_70,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_70,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_71[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_71[] = {
	"short_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_71 = {
	"short",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	50,
	71,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_71,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_71,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_72[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_72[] = {
	"single_nums"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_72 = {
	"single",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	51,
	72,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_72,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_72,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_73[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_73[] = {
	"size_name",
	"size_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_73 = {
	"size",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	52,
	73,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_73,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_73,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_74[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_74[] = {
	"skip_size",
	"skip_value"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_74 = {
	"skip",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	53,
	74,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_74,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_74,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_75[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_75[] = {
	"sleb128_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_75 = {
	"sleb128",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	54,
	75,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_75,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_75,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_76[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_76[] = {
	"space_size",
	"space_fill"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_76 = {
	"space",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	55,
	76,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_76,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_76,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_77[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_77[] = {
	"string_str"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_77 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	56,
	77,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_77,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_77,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_78[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_78[] = {
	"struct_expr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_78 = {
	"struct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	57,
	78,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_78,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_78,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_79[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_79[] = {
	"subsection_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_79 = {
	"subsection",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	58,
	79,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_79,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_79,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_80[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_80[] = {
	"symver_name",
	"symver_alias"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_80 = {
	"symver",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	59,
	80,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_80,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_80,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_81[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_81[] = {
	"tag_struct_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_81 = {
	"tag",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	60,
	81,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_81,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_81,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_82[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_82[] = {
	"text_subsection"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_82 = {
	"text",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	61,
	82,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_82,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_82,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_83[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_83[] = {
	"title_heading"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_83 = {
	"title",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	62,
	83,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_83,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_83,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_84[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_84[] = {
	"type_name",
	"type_desc"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_84 = {
	"x86_64_pseudo_type",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	63,
	84,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_84,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_84,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_85[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_85[] = {
	"uleb128_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_85 = {
	"uleb128",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	64,
	85,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_85,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_85,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_86[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_86[] = {
	"val_addr"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_86 = {
	"val",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	65,
	86,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_86,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_86,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_87[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_87[] = {
	"version_note"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_87 = {
	"version",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	66,
	87,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_87,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_87,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_88[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_88[] = {
	"weak_names"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_88 = {
	"weak",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	67,
	88,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_88,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_88,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_89[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_89[] = {
	"word_exprs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_89 = {
	"word",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	68,
	89,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_pseudo_op_0_89,
	mercury_data_ll_backend__x86_64_instrs__field_names_pseudo_op_0_89,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_10,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_12,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_13,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_14,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_15,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_16,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_17,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_18,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_19,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_22,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_23,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_24,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_34,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_53,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_55,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_56,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_58,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_59

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_3[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_4,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_5,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_6,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_7,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_8,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_9,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_11,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_20,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_21,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_25,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_26,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_27,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_28,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_29,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_30,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_31,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_32,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_33,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_35,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_36,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_37,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_38,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_39,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_40,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_41,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_42,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_43,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_44,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_45,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_46,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_47,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_48,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_49,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_50,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_51,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_52,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_54,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_57,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_60,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_61,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_62,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_63,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_64,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_65,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_66,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_67,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_68,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_69,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_70,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_71,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_72,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_73,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_74,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_75,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_76,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_77,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_78,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_79,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_80,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_81,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_82,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_83,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_84,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_85,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_86,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_87,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_88,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_89

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_pseudo_op_0[] = {
	{ 19, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_2 },
	{ 69, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_pseudo_op_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_pseudo_op_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_4,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_5,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_6,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_7,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_9,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_8,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_10,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_11,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_12,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_14,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_15,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_16,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_17,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_18,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_19,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_20,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_21,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_22,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_23,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_24,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_25,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_26,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_27,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_28,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_29,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_30,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_31,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_32,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_33,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_34,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_37,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_36,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_38,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_39,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_40,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_41,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_42,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_43,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_44,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_46,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_47,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_45,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_48,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_49,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_50,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_51,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_52,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_53,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_54,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_55,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_56,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_57,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_58,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_59,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_60,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_61,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_62,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_63,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_64,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_65,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_66,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_67,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_68,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_69,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_70,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_71,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_72,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_73,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_74,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_75,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_76,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_77,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_78,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_79,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_80,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_81,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_82,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_83,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_85,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_86,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_87,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_88,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_89,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_13,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_35,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_pseudo_op_0_84
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_op_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	9,
	8,
	10,
	11,
	12,
	87,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	88,
	35,
	34,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	45,
	43,
	44,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	89,
	82,
	83,
	84,
	85,
	86 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0)),
	"ll_backend.x86_64_instrs",
	"pseudo_op",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_pseudo_op_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_pseudo_op_0 },
	90,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_op_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_0 = {
	"a",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_1 = {
	"w",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_2 = {
	"x",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_3 = {
	"m",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_4 = {
	"s",
	4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_flag_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_2,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_flag_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_4,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_flag_0_2
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_flag_0[] = {
	0,
	3,
	4,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__pseudo_section_flag_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__pseudo_section_flag_0_0)),
	"ll_backend.x86_64_instrs",
	"pseudo_section_flag",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_flag_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_flag_0 },
	5,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_flag_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_0 = {
	"progbits",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_1 = {
	"nobits",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_type_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_type_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_0_0)),
	"ll_backend.x86_64_instrs",
	"pseudo_section_type",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_type_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_type_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_type_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_0 = {
	"function",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_1 = {
	"object",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_type_desc_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_type_desc_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_pseudo_section_type_desc_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_type_desc_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0)),
	"ll_backend.x86_64_instrs",
	"pseudo_section_type_desc",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_pseudo_section_type_desc_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_pseudo_section_type_desc_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_pseudo_section_type_desc_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_0 = {
	"ro8",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_1 = {
	"ro16",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_2 = {
	"ro32",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rel_offset_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_rel_offset_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rel_offset_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_rel_offset_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rel_offset_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_rel_offset_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0)),
	"ll_backend.x86_64_instrs",
	"rel_offset",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_rel_offset_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_rel_offset_0 },
	3,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_rel_offset_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_0 = {
	"rmrol_reg",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_1 = {
	"rmrol_mem_ref",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_2 = {
	"rmrol_rel_offset",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_rmrol_0_3[] = {
	"rmrol_label_name"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_3 = {
	"rmrol_label",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_rmrol_0_3,
	mercury_data_ll_backend__x86_64_instrs__field_names_rmrol_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_3[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_3

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_rmrol_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_rmrol_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_rmrol_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_rmrol_0_2
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_rmrol_0[] = {
	2,
	1,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rmrol_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__rmrol_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0)),
	"ll_backend.x86_64_instrs",
	"rmrol",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_rmrol_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_rmrol_0 },
	4,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_rmrol_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint16_0 = {
	"uint16",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint16_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__uint16_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__uint16_0_0)),
	"ll_backend.x86_64_instrs",
	"uint16",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint16_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint16_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint16_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint32_0 = {
	"uint32",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint32_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint32_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__uint32_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__uint32_0_0)),
	"ll_backend.x86_64_instrs",
	"uint32",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint32_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint32_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint32_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint8_0 = {
	"uint8",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint8_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__uint8_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__uint8_0_0)),
	"ll_backend.x86_64_instrs",
	"uint8",
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint8_0 },
	{ (void *)&mercury_data_ll_backend__x86_64_instrs__notag_functor_desc_uint8_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_uint8_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_0[] = {
	"adc_src",
	"adc_dst"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_0 = {
	"adc",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_1[] = {
	"add_src",
	"add_dst"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_1 = {
	"add",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_1,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_2[] = {
	"and_src",
	"and_dst"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_2 = {
	"and",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_2,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_2,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_3[] = {
	"bs_src",
	"bs_dst",
	"bs_cond"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_3 = {
	"bs",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_3,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_3,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_4[] = {
	"bswap_reg"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_4 = {
	"bswap",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_4,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_4,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_5[] = {
	"bt_src",
	"bt_idx"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_5 = {
	"bt",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_5,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_5,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_6[] = {
	"btc_src",
	"btc_idx"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_6 = {
	"btc",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_6,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_6,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_7[] = {
	"btr_src",
	"btr_idx"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_7 = {
	"btr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_7,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_7,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_8[] = {
	"bts_src",
	"bts_idx"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_8 = {
	"bts",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_8,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_8,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_9[] = {
	"call_target"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_9 = {
	"call",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_9,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_9,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_10 = {
	"cbw",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_11 = {
	"cwde",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_12 = {
	"cdqe",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_13 = {
	"cwd",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_14 = {
	"cdq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_15 = {
	"cqo",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_16 = {
	"clc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_17 = {
	"cld",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_18 = {
	"cmc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_19[] = {
	"cmov_src",
	"cmov_dest",
	"cmov_cmp_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_19 = {
	"cmov",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	19,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_19,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_19,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_20[] = {
	"cmp_src",
	"cmp_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_20 = {
	"cmp",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	20,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_20,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_20,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_21[] = {
	"cmpxchg_src",
	"cmpxchg_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_21 = {
	"cmpxchg",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	21,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_21,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_21,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_22[] = {
	"cmpxchg8b_mem"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_22 = {
	"cmpxchg8b",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	22,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_22,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_22,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_23[] = {
	"dec_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_23 = {
	"dec",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	23,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_23,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_23,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_24[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_24[] = {
	"div_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_24 = {
	"div",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	24,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_24,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_24,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_25[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_25[] = {
	"enter_stack_size",
	"enter_nesting_level"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_25 = {
	"enter",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	25,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_25,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_25,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_26[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_26[] = {
	"idiv_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_26 = {
	"idiv",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	26,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_26,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_26,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_operand_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_27[] = {
	"imul_src",
	"imul_dest",
	"imul_multiplicand"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_27 = {
	"imul",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	27,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_27,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_27,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_28[] = {
	"inc_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_28 = {
	"inc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	28,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_28,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_28,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_29[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_29[] = {
	"j_target",
	"j_condition"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_29 = {
	"j",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	29,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_29,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_29,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_30[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_30[] = {
	"jrcxz_8bit_off"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_30 = {
	"jrcxz",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	30,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_30,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_30,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_31[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_31[] = {
	"jmp_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_31 = {
	"jmp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	31,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_31,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_31,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_32[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_32[] = {
	"lea_src",
	"lea_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_32 = {
	"lea",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	32,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_32,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_32,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_33 = {
	"leave",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	33,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_34[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_34[] = {
	"loop_rel_8bit"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_34 = {
	"loop",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	34,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_34,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_34,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_35[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_35[] = {
	"loope_rel_8bit"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_35 = {
	"loope",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	35,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_35,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_35,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_36[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_36[] = {
	"loopne_rel_8bit"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_36 = {
	"loopne",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	36,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_36,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_36,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_37[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_37[] = {
	"loopnz_rel_8bit"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_37 = {
	"loopnz",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	37,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_37,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_37,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_38[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_38[] = {
	"loopz_rel_8bit"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_38 = {
	"loopz",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	38,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_38,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_38,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_39[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_39[] = {
	"mov_src",
	"mov_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_39 = {
	"mov",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	39,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_39,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_39,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_40[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_40[] = {
	"mul_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_40 = {
	"mul",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	40,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_40,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_40,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_41[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_41[] = {
	"neg_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_41 = {
	"neg",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	29,
	41,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_41,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_41,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_42 = {
	"nop",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	42,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_43[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_43[] = {
	"not_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_43 = {
	"x86_64_instr_not",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	30,
	43,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_43,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_43,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_44[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_44[] = {
	"or_src",
	"or_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_44 = {
	"or",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	31,
	44,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_44,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_44,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_45[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_45[] = {
	"pop_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_45 = {
	"pop",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	32,
	45,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_45,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_45,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_46 = {
	"popfq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	46,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_47[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_47[] = {
	"push_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_47 = {
	"push",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	33,
	47,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_47,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_47,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_48 = {
	"pushfq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	48,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_49[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_49[] = {
	"rc_amount",
	"rc_dest",
	"rc_cond"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_49 = {
	"rc",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	34,
	49,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_49,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_49,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_uint16_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_50[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__x86_64_instrs__type_ctor_info_uint16_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_50[] = {
	"ret_op"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_50 = {
	"ret",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	35,
	50,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_50,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_50,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_51[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_51[] = {
	"ro_amount",
	"ro_dest",
	"ro_dir"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_51 = {
	"ro",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	36,
	51,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_51,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_51,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_52[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_52[] = {
	"sal_amount",
	"sal_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_52 = {
	"sal",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	37,
	52,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_52,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_52,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_53[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_53[] = {
	"shl_amount",
	"shl_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_53 = {
	"shl",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	38,
	53,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_53,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_53,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_54[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_54[] = {
	"sar_amount",
	"sar_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_54 = {
	"sar",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	39,
	54,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_54,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_54,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_55[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_55[] = {
	"sbb_src",
	"sbb_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_55 = {
	"sbb",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	40,
	55,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_55,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_55,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_56[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_56[] = {
	"set_dest",
	"set_cond"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_56 = {
	"set",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	41,
	56,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_56,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_56,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_57[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_57[] = {
	"shld_amount",
	"shld_dest1",
	"shld_dest2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_57 = {
	"shld",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	42,
	57,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_57,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_57,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_58[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_58[] = {
	"shr_amount",
	"shr_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_58 = {
	"shr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	43,
	58,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_58,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_58,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_59[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_59[] = {
	"shrd_amount",
	"shrd_dest1",
	"shrd_dest2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_59 = {
	"shrd",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	44,
	59,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_59,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_59,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_60 = {
	"stc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	60,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_61 = {
	"std",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	61,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_62[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_62[] = {
	"sub_src",
	"sub_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_62 = {
	"sub",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	45,
	62,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_62,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_62,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_63[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_63[] = {
	"test_src1",
	"test_src2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_63 = {
	"test",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	46,
	63,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_63,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_63,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_64[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_64[] = {
	"xadd_src",
	"xadd_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_64 = {
	"xadd",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	47,
	64,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_64,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_64,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_65[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_65[] = {
	"xchg_src1",
	"xchg_src2"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_65 = {
	"xchg",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	48,
	65,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_65,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_65,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_66[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_66[] = {
	"xor_src",
	"xor_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_66 = {
	"xor",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	49,
	66,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_inst_0_66,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_inst_0_66,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_10,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_11,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_12,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_13,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_14,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_15,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_16,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_17,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_18,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_33,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_42,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_46,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_48,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_60,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_61

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_3[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_4,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_5,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_6,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_7,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_8,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_9,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_19,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_20,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_21,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_22,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_23,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_24,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_25,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_26,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_27,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_28,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_29,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_30,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_31,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_32,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_34,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_35,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_36,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_37,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_38,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_39,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_40,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_41,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_43,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_44,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_45,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_47,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_49,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_50,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_51,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_52,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_53,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_54,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_55,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_56,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_57,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_58,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_59,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_62,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_63,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_64,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_65,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_66

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_inst_0[] = {
	{ 15, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_2 },
	{ 50, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_inst_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_inst_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_1,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_4,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_5,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_6,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_7,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_8,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_9,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_10,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_14,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_12,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_16,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_17,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_18,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_19,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_20,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_21,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_22,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_15,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_13,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_11,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_23,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_24,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_25,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_26,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_27,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_28,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_29,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_31,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_30,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_32,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_33,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_34,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_35,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_36,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_37,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_38,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_39,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_40,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_41,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_42,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_44,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_45,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_46,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_47,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_48,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_49,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_50,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_51,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_52,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_54,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_55,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_56,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_53,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_57,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_58,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_59,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_60,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_61,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_62,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_63,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_43,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_64,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_65,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_inst_0_66
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_inst_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	22,
	12,
	21,
	11,
	20,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	31,
	30,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	63,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	55,
	52,
	53,
	54,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	64,
	65,
	66 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_inst",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_inst_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_inst_0 },
	67,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_inst_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_0 = {
	"x86_64_comment",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_1 = {
	"x86_64_label",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_2 = {
	"x86_64_directive",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_3 = {
	"x86_64_instr",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instr_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_2[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_3[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_3

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_instr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_instr_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_2,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_3,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instr_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_instr_0[] = {
	0,
	3,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_instr",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_instr_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_instr_0 },
	4,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_instr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instruction_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_instruction_0_0[] = {
	"x86_64_inst",
	"x86_64_inst_comment"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instruction_0_0 = {
	"x86_64_instr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_instruction_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_instruction_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instruction_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instruction_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_instruction_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_instruction_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_instruction_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_instruction_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_instruction_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_instruction",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_instruction_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_instruction_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_instruction_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_mem_ref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_mem_ref_0_0[] = {
	"mem_abs_address"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_0 = {
	"mem_abs",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_mem_ref_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_mem_ref_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_mem_ref_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_mem_ref_0_1[] = {
	"instr_rel_address"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_1 = {
	"mem_rip",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_mem_ref_0_1,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_mem_ref_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_mem_ref_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_mem_ref_0_1[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_mem_ref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_mem_ref_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_mem_ref_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_mem_ref_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_0,
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_mem_ref_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_mem_ref_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_mem_ref",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_mem_ref_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_mem_ref_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_mem_ref_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_module_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_module_0_0[] = {
	"x86_64_modulename",
	"x86_64_procs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_module_0_0 = {
	"x86_64_module",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_module_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_module_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_module_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_module_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_module_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_module_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_module_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_module_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_module_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_module_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_module",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_module_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_module_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_module_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_procedure_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__code_model__type_ctor_info_code_model_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_procedure_0_0[] = {
	"x86_64_name",
	"x86_64_arity",
	"x86_64_id",
	"x86_64_code_model",
	"x86_64_code",
	"x86_64_proc_label",
	"x86_64_label_nums",
	"x86_64_may_alter_rtti",
	"x86_64_c_global_vars"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_procedure_0_0 = {
	"x86_64_procedure",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_instrs__field_types_x86_64_procedure_0_0,
	mercury_data_ll_backend__x86_64_instrs__field_names_x86_64_procedure_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_procedure_0_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_procedure_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_procedure_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_instrs__du_stag_ordered_x86_64_procedure_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_procedure_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__du_functor_desc_x86_64_procedure_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_procedure_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_procedure",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_name_ordered_x86_64_procedure_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__du_ptag_ordered_x86_64_procedure_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_procedure_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_0 = {
	"rax",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_1 = {
	"rbx",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_2 = {
	"rcx",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_3 = {
	"rdx",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_4 = {
	"rbp",
	4
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_5 = {
	"rsi",
	5
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_6 = {
	"rdi",
	6
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_7 = {
	"rsp",
	7
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_8 = {
	"r8",
	8
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_9 = {
	"r9",
	9
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_10 = {
	"r10",
	10
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_11 = {
	"r11",
	11
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_12 = {
	"r12",
	12
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_13 = {
	"r13",
	13
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_14 = {
	"r14",
	14
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_15 = {
	"r15",
	15
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_x86_64_reg_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_2,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_4,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_5,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_6,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_7,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_8,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_9,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_10,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_11,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_12,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_13,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_14,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_15
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_x86_64_reg_0[] = {
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_10,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_11,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_12,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_13,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_14,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_15,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_8,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_9,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_0,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_4,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_1,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_2,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_6,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_3,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_5,
	&mercury_data_ll_backend__x86_64_instrs__enum_functor_desc_x86_64_reg_0_7
};

const MR_Integer mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_reg_0[] = {
	8,
	10,
	11,
	13,
	9,
	14,
	12,
	15,
	6,
	7,
	0,
	1,
	2,
	3,
	4,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_instrs__x86_64_reg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_instrs__x86_64_reg_0_0)),
	"ll_backend.x86_64_instrs",
	"x86_64_reg",
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_name_ordered_x86_64_reg_0 },
	{ (void *)mercury_data_ll_backend__x86_64_instrs__enum_value_ordered_x86_64_reg_0 },
	16,
	4,
	mercury_data_ll_backend__x86_64_instrs__functor_number_map_x86_64_reg_0
};




MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module0)
	MR_init_entry1(fn__ll_backend__x86_64_instrs__init_x86_64_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_module_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_x86_64_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module1)
	MR_init_entry1(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_x86_64_proc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module2)
	MR_init_entry1(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_x86_64_instruction'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module3)
	MR_init_entry1(fn__ll_backend__x86_64_instrs__num_x86_64_regs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_instrs__num_x86_64_regs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_x86_64_regs'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_instrs__num_x86_64_regs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module4)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__base_address_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__base_address_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_instrs__base_address_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__base_address_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__base_address_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__base_address_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__base_address_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__base_address_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__base_address_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__base_address_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__base_address_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__base_address_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module5)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__base_address_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__base_address_0_0);
	MR_init_label7(__Compare___ll_backend__x86_64_instrs__base_address_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__base_address_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__base_address_0_0_i12);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__base_address_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__base_address_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module6)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__condition_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__condition_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module7)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__condition_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__condition_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module8)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__direction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module9)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__direction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module10)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__flags_reg_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module11)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module12)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_init_label4(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,15,5,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i5);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module13)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_init_label7(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,3,2,36,21,5,48,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i21);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i10);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i10);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i48);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i36);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i10);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module14)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module15)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_init_label5(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module16)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__int16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__int16_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__int16_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__int16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__int16_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__int16_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module17)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__int16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__int16_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__int16_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__int16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int16_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int16_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__int16_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__int16_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module18)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__int32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__int32_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__int32_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__int32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__int32_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__int32_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module19)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__int32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__int32_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__int32_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__int32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int32_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int32_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__int32_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__int32_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module20)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__int8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__int8_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__int8_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__int8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__int8_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__int8_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module21)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__int8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__int8_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__int8_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__int8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int8_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__int8_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__int8_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__int8_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module22)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__label_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__label_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__label_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module23)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__label_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__label_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__label_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module24)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module25)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module26)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__operand_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__operand_0_0);
	MR_init_label7(__Unify___ll_backend__x86_64_instrs__operand_0_0,15,5,11,24,9,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__operand_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i26);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__operand_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__operand_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__operand_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__operand_0_0_i24));
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i9);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module27)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__operand_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__operand_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0,3,44,49,55,5,7,99,31,35,73)
	MR_init_label3(__Compare___ll_backend__x86_64_instrs__operand_0_0,18,82,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__operand_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i73));
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i55));
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99));
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99));
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i18);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i82);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i99);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i82);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i21);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module28)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,6,8,12,236,16,20,22,26,30,34)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,38,40,43,54,56,61,63,65,67,71)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,75,77,79,81,83,88,90,92,94,96)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,98,100,102,104,106,108,110,112,114,118)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,120,122,125,131,133,139,141,143,147,149)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,151,155,157,159,161,164,166,170,172,176)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,180,182,186,190,194,198,200,202,204,206)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,210,212,216,218,220,224,228,229,231,237)
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i237);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i228) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i236));
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i26) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i30) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i34) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i40) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i38) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i43) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i54) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i56) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i61) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i63) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i71) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i75) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i77) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i81) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i83) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i229) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i90) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i88) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i92) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i94) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i96) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i98) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i100) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i102) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i104) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i110) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i106) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i108) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i112) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i114) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i118) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i120) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i122) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i125) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i131) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i139) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i141) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i143) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i147) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i149) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i151) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i155) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i157) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i159) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i161) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i170) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i172) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i176) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i180) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i182) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i186) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i190) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i194) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i198) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i200) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i202) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i204) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i206) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i210) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i231) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i212) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i216) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i218) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i220) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i224));
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i22);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr3, 3);
	MR_r3 = MR_tfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i67);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i133);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i164);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, pseudo_section_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i166);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,52)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,53)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,55)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,57)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,58)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,59)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,60)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,62)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,64)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,65)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,66)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,67)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,68)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,63)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module29)
	MR_init_entry1(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,93,4,5,96,3,6,7,8,9,10)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,11,12,13,14,15,16,17,18,19,20)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,21,22,23,24,25,26,27,28,29,30)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,51,52,53,54,55,56,57,58,59,60)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,61,62,63,64,65,66,67,68,69,70)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,71,72,73,74,75,76,77,78,79,80)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,81,82,83,84,85,86,87,88,89,90)
	MR_init_label2(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,91,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i93) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i96));
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i90) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i54) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i56) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i57) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i59) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i60));
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i91) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i39) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i40) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i41) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i42) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i43) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i44) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i45) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i48) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i46) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i47) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i49) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i50) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i51) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i52) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i53) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i55) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i58) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i61) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i62) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i63) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i64) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i65) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i66) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i67) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i68) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i69) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i70) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i71) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i72) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i73) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i74) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i75) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i76) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i77) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i78) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i79) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i80) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i81) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i82) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i83) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i84) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i92) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i85) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i86) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i87) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i88) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i89));
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 42;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 43;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 44;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 46;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 45;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 48;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 49;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 50;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 51;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 52;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 53;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 54;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 55;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 56;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 57;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 59;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 60;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 61;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 62;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 63;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 64;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 65;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 66;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 67;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 68;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 69;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 70;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 71;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 72;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 73;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 74;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 75;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 76;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 77;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 78;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 79;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 80;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 81;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 82;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 83;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 85;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 86;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 87;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 88;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 89;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 84;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module30)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,4,5,6,7,11,14,18,24,391,27)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,30,33,37,43,46,49,53,59,62,65)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,68,74,84,87,92,95,103,106,109,112)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,116,122,125,128,133,136,139,142,146,149)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,154,157,160,163,166,169,172,175,180,183)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,186,189,194,197,200,203,206,209,214,218)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,223,226,230,238,241,244,247,252,255,258)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,263,266,269,272,275,278,283,287,294,297)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,302,305,308,311,316,319,324,327,330,335)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,338,341,344,347,352,355,358,361,364,367)
	MR_init_label8(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,370,373,376,377,380,383,8,396)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i376);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i4);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i376) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391));
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i14);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i18);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i59) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i65) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i74) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i92) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i103) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i109) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i122) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i125) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i133) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i136) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i139) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i142) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i377) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i154) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i146) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i157) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i163) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i166) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i172) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i180) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i194) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i183) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i197) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i203) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i206) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i214) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i218) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i223) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i238) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i241) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i244) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i252) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i255) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i263) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i266) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i269) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i272) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i275) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i294) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i302) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i305) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i308) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i316) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i324) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i327) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i335) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i338) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i341) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i344) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i352) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i355) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i358) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i380) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i361) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i364) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i367) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i370) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i373));
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i33);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i37);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i49);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i53);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i68);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i87);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i95);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i112);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i116);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i128);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i149);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i175);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i189);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i209);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i226);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i230);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i247);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i258);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i278);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i283);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, pseudo_section_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i287);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i297);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,52)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i311);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,53)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i319);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,55)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i330);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,57)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,58)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,59)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i347);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,60)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,62)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,64)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,65)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,66)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,67)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,68)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,376)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,63)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i383);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i396);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module31)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module32)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module33)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module34)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module35)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module36)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module37)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_init_label4(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,15,5,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i5);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module38)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_init_label7(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,3,2,36,21,5,48,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i21);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i10);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i10);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i48);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i36);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i10);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module39)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_init_label6(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,11,7,13,5,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i5));
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module40)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,3,27,16,19,38,43,40,5,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i5));
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i40);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i40));
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i40));
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module41)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__uint16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__uint16_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__uint16_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__uint16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__uint16_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__uint16_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module42)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__uint16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__uint16_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__uint16_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__uint16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint16_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint16_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint16_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint16_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module43)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__uint32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__uint32_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__uint32_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__uint32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__uint32_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__uint32_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module44)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__uint32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__uint32_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__uint32_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__uint32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint32_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint32_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint32_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint32_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module45)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__uint8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__uint8_0_0);
	MR_init_label1(__Unify___ll_backend__x86_64_instrs__uint8_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__uint8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__uint8_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__uint8_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module46)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__uint8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__uint8_0_0);
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__uint8_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__uint8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint8_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__uint8_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint8_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__uint8_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module47)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,5,7,11,13,297,17,19,23,25,27)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,29,33,35,39,41,45,47,51,53,57)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,67,69,71,73,75,79,81,85,92,96)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,100,102,106,110,112,114,118,122,124,126)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,130,134,136,141,145,149,153,157,161,163)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,167,171,176,178,182,187,192,194,196,198)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,202,204,206,208,210,214,216,220,222,226)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,228,230,232,236,238,240,244,246,250,252)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,254,259,260,262,266,268,272,276,278,282)
	MR_init_label5(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,284,288,290,298,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i298);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i259) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i297));
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i7);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i39) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i51) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i57) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i67) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i73) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i85) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i92) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i96) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i100) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i106) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i110) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i118) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i122) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i130) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i126) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i134) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i141) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i145) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i149) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i153) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i157) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i161) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i167) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i171) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i272) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i176) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i182) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i187) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i192) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i198) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i202) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i208) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i230) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i214) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i220) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i226) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i236) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i244) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i250) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i260) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i266) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i276) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i282) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i288));
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i19);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i25);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i27);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i35);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i41);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i47);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i53);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i69);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i71);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i75);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i81);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__uint16_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i102);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__uint8_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i112);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, operand);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i114);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i124);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i136);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i163);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i178);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i194);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i196);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, uint16);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i204);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i206);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i210);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i216);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i222);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i228);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i232);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i238);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i240);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i246);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i252);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i254);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i262);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i268);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i278);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i284);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i290);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module48)
	MR_init_entry1(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,70,3,4,73,5,6,7,8,9,10)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,11,12,13,14,15,16,17,18,19,20)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,21,22,23,24,25,26,27,28,29,30)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,51,52,53,54,55,56,57,58,59,60)
	MR_init_label9(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,61,62,63,64,65,66,67,68,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i70) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i73));
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i45) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i48) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i50) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i62) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i63));
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i39) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i40) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i41) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i42) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i43) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i44) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i66) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i46) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i47) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i49) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i51) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i52) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i53) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i54) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i58) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i55) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i56) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i57) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i59) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i60) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i61) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i64) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i65) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i67) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i68) MR_AND
		MR_LABEL_AP(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i69));
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 42;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 44;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 45;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 46;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 48;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 49;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 50;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 51;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 52;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 54;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 55;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 56;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 53;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 57;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 59;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 60;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 61;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 62;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 63;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 43;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 64;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 65;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 66;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module49)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,4,5,6,7,10,13,18,21,379,26)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,29,34,37,41,47,50,53,58,61,66)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,69,74,77,82,91,94,98,104,107,112)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,115,120,126,129,132,135,140,143,146,150)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,156,159,162,167,170,173,176,182,185,188)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,191,194,197,200,205,208,212,215,220,224)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,228,231,235,241,244,247,251,257,260,265)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,268,273,276,281,284,289,292,297,300,304)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,310,313,318,321,325,332,333,336,341,344)
	MR_init_label9(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,349,352,355,360,363,368,371,8,384)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i332);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i4);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i332) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379));
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i21);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i74) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i120) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i129) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i143) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i156) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i170) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i167) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i182) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i188) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i194) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i197) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i205) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i208) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i349) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i220) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i228) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i241) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i244) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i257) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i289) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i265) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i273) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i281) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i310) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i318) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i333) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i341) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i352) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i360) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i368));
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i29);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i37);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i41);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i53);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i61);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i69);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i77);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i94);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i98);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i107);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i115);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i135);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i146);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, operand);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i150);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, operand);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i162);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i176);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i200);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i215);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i231);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i235);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, uint16);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i247);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i251);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i260);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i268);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i276);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i284);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i292);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i300);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i304);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i313);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i321);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i325);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i336);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i344);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i355);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i363);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i371);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i384);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,384)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module50)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_init_label6(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,5,15,7,11,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i11));
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module51)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,3,5,38,43,16,19,21,27,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i27));
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i43);
	}
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i21);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i21));
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i21));
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i31);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module52)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i4);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module53)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_init_label4(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module54)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__base_address_0_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module55)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_init_label5(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__base_address_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module56)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0_i4);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module57)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_init_label4(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,3,2,5,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module58)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_init_label6(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i14);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 8);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i4);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i6);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i8);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i10);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module59)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label1(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i9);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i13);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i17);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i21);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i25);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i29);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i33);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_procedure_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module60)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__x86_64_reg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__x86_64_reg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module61)
	MR_init_entry1(__Compare___ll_backend__x86_64_instrs__x86_64_reg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_instrs__x86_64_reg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_instrs__x86_64_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__x86_64_instrs_maybe_bunch_0(void)
{
	ll_backend__x86_64_instrs_module0();
	ll_backend__x86_64_instrs_module1();
	ll_backend__x86_64_instrs_module2();
	ll_backend__x86_64_instrs_module3();
	ll_backend__x86_64_instrs_module4();
	ll_backend__x86_64_instrs_module5();
	ll_backend__x86_64_instrs_module6();
	ll_backend__x86_64_instrs_module7();
	ll_backend__x86_64_instrs_module8();
	ll_backend__x86_64_instrs_module9();
	ll_backend__x86_64_instrs_module10();
	ll_backend__x86_64_instrs_module11();
	ll_backend__x86_64_instrs_module12();
	ll_backend__x86_64_instrs_module13();
	ll_backend__x86_64_instrs_module14();
	ll_backend__x86_64_instrs_module15();
	ll_backend__x86_64_instrs_module16();
	ll_backend__x86_64_instrs_module17();
	ll_backend__x86_64_instrs_module18();
	ll_backend__x86_64_instrs_module19();
	ll_backend__x86_64_instrs_module20();
	ll_backend__x86_64_instrs_module21();
	ll_backend__x86_64_instrs_module22();
	ll_backend__x86_64_instrs_module23();
	ll_backend__x86_64_instrs_module24();
	ll_backend__x86_64_instrs_module25();
	ll_backend__x86_64_instrs_module26();
	ll_backend__x86_64_instrs_module27();
	ll_backend__x86_64_instrs_module28();
	ll_backend__x86_64_instrs_module29();
	ll_backend__x86_64_instrs_module30();
	ll_backend__x86_64_instrs_module31();
	ll_backend__x86_64_instrs_module32();
	ll_backend__x86_64_instrs_module33();
	ll_backend__x86_64_instrs_module34();
	ll_backend__x86_64_instrs_module35();
	ll_backend__x86_64_instrs_module36();
	ll_backend__x86_64_instrs_module37();
	ll_backend__x86_64_instrs_module38();
	ll_backend__x86_64_instrs_module39();
}

static void mercury__ll_backend__x86_64_instrs_maybe_bunch_1(void)
{
	ll_backend__x86_64_instrs_module40();
	ll_backend__x86_64_instrs_module41();
	ll_backend__x86_64_instrs_module42();
	ll_backend__x86_64_instrs_module43();
	ll_backend__x86_64_instrs_module44();
	ll_backend__x86_64_instrs_module45();
	ll_backend__x86_64_instrs_module46();
	ll_backend__x86_64_instrs_module47();
	ll_backend__x86_64_instrs_module48();
	ll_backend__x86_64_instrs_module49();
	ll_backend__x86_64_instrs_module50();
	ll_backend__x86_64_instrs_module51();
	ll_backend__x86_64_instrs_module52();
	ll_backend__x86_64_instrs_module53();
	ll_backend__x86_64_instrs_module54();
	ll_backend__x86_64_instrs_module55();
	ll_backend__x86_64_instrs_module56();
	ll_backend__x86_64_instrs_module57();
	ll_backend__x86_64_instrs_module58();
	ll_backend__x86_64_instrs_module59();
	ll_backend__x86_64_instrs_module60();
	ll_backend__x86_64_instrs_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__x86_64_instrs__init(void);
void mercury__ll_backend__x86_64_instrs__init_type_tables(void);
void mercury__ll_backend__x86_64_instrs__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__x86_64_instrs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__x86_64_instrs__init_complexity_procs(void);
#endif

void mercury__ll_backend__x86_64_instrs__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__x86_64_instrs_maybe_bunch_0();
	mercury__ll_backend__x86_64_instrs_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0,
		ll_backend__x86_64_instrs__base_address_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0,
		ll_backend__x86_64_instrs__condition_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0,
		ll_backend__x86_64_instrs__direction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_flags_reg_0,
		ll_backend__x86_64_instrs__flags_reg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0,
		ll_backend__x86_64_instrs__imm_operand_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0,
		ll_backend__x86_64_instrs__instr_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0,
		ll_backend__x86_64_instrs__int16_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0,
		ll_backend__x86_64_instrs__int32_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0,
		ll_backend__x86_64_instrs__int8_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_label_name_0,
		ll_backend__x86_64_instrs__label_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_offset_0,
		ll_backend__x86_64_instrs__offset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
		ll_backend__x86_64_instrs__operand_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0,
		ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0,
		ll_backend__x86_64_instrs__pseudo_section_flag_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0,
		ll_backend__x86_64_instrs__pseudo_section_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0,
		ll_backend__x86_64_instrs__pseudo_section_type_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0,
		ll_backend__x86_64_instrs__rel_offset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rmrol_0,
		ll_backend__x86_64_instrs__rmrol_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0,
		ll_backend__x86_64_instrs__uint16_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint32_0,
		ll_backend__x86_64_instrs__uint32_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0,
		ll_backend__x86_64_instrs__uint8_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0,
		ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
		ll_backend__x86_64_instrs__x86_64_instr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0,
		ll_backend__x86_64_instrs__x86_64_instruction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0,
		ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_module_0,
		ll_backend__x86_64_instrs__x86_64_module_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0,
		ll_backend__x86_64_instrs__x86_64_procedure_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0,
		ll_backend__x86_64_instrs__x86_64_reg_0_0);
	mercury__ll_backend__x86_64_instrs__init_debugger();
}

void mercury__ll_backend__x86_64_instrs__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_base_address_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_condition_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_direction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_flags_reg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_imm_operand_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_instr_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int16_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int32_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_int8_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_label_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_offset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_flag_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_pseudo_section_type_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rel_offset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_rmrol_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint16_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint32_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_uint8_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_inst_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instruction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_mem_ref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_module_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_procedure_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0);
	}
}


void mercury__ll_backend__x86_64_instrs__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__x86_64_instrs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__x86_64_instrs);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__x86_64_instrs__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
