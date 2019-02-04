/*
** Automatically generated from `x86_64_instrs.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.x86_64_instrs.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.x86_64_instrs.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.x86_64_instrs.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.x86_64_instrs.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.x86_64_instrs.c"
#line 30 "../library/time.int2"
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
MR_decl_label4(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0, 5,28,10,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__instr_ptr_0_0, 16,5,1)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int16_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int32_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__int8_0_0, 4)
MR_decl_label6(__Unify___ll_backend__x86_64_instrs__operand_0_0, 5,9,13,33,15,1)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 15,16,17,18,19,20,21,22,23,26)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 24,30,34,40,38,44,48,52,56,58)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 60,64,66,68,70,74,72,78,82,84)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 86,88,90,94,96,98,100,102,104,106)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 108,110,112,114,116,118,120,124,126,128)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 130,136,134,140,142,144,148,150,152,156)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 158,160,165,167,162,171,173,177,181,183)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 187,191,195,199,201,203,205,207,211,213)
MR_decl_label7(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0, 217,219,221,225,509,229,1)
MR_decl_label4(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0, 5,28,10,1)
MR_decl_label5(__Unify___ll_backend__x86_64_instrs__rmrol_0_0, 5,7,26,11,1)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint16_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint32_0_0, 4)
MR_decl_label1(__Unify___ll_backend__x86_64_instrs__uint8_0_0, 4)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 15,16,17,18,19,22,20,28,26,34)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 32,40,42,38,44,50,48,56,54,62)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 60,68,66,72,78,80,76,84,82,90)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 88,94,98,102,108,106,112,118,120,116)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 124,130,128,132,136,142,140,146,150,154)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 158,162,168,166,172,176,182,180,186,190)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 196,198,194,200,206,208,204,212,210,218)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 216,224,222,230,228,234,232,240,242,238)
MR_decl_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 248,246,254,256,252,262,260,268,266,272)
MR_decl_label7(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0, 278,276,284,515,282,289,1)
MR_decl_label5(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0, 5,7,26,11,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_instruction_0_0, 4,6,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0, 16,5,1)
MR_decl_label3(__Unify___ll_backend__x86_64_instrs__x86_64_module_0_0, 4,9,1)
MR_decl_label6(__Unify___ll_backend__x86_64_instrs__x86_64_procedure_0_0, 4,6,8,10,14,1)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 53,54,55,56,57,58,59,60,61,62)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 63,64,65,66,67,68,69,70,71,72)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label9(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0, 83,84,85,86,87,88,89,90,91)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 53,54,55,56,57,58,59,60,61,62)
MR_decl_label6(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0, 63,64,65,66,67,68)
MR_decl_label7(__Compare___ll_backend__x86_64_instrs__base_address_0_0, 3,2,7,5,10,12,45)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__flags_reg_0_0, 3,2)
MR_decl_label9(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0, 3,2,7,5,34,12,35,10,16)
MR_decl_label5(__Compare___ll_backend__x86_64_instrs__instr_ptr_0_0, 3,2,7,5,10)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int16_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int32_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__int8_0_0, 3,2)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0, 3,2,7,9,10,5,14,15,17,12)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0, 21,22,23,19,28,29,30,26,34,35)
MR_decl_label4(__Compare___ll_backend__x86_64_instrs__operand_0_0, 63,36,64,37)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 26,27,605,28,32,36,29,42,45,51)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 55,48,61,67,71,64,77,80,86,83)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 91,97,94,105,102,110,113,119,123,116)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 129,135,132,140,143,146,149,155,152,160)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 163,166,169,172,175,181,178,186,189,195)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 192,200,203,206,209,215,212,220,223,229)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 233,226,239,242,248,245,253,259,256,264)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 267,270,273,279,284,288,276,298,295,303)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 306,312,309,320,317,325,331,328,336,339)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 342,348,345,353,356,359,362,365,368,371)
MR_decl_label5(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0, 374,377,382,8,391)
MR_decl_label9(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0, 3,2,7,5,34,12,35,10,16)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__rmrol_0_0, 3,2,7,9,5,13,14,11,19,20)
MR_decl_label6(__Compare___ll_backend__x86_64_instrs__rmrol_0_0, 17,42,24,25,44,26)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint16_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint32_0_0, 3,2)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__uint8_0_0, 3,2)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 16,17,18,19,20,21,22,23,557,24)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 28,25,36,33,44,41,52,56,49,62)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 68,65,76,73,84,81,92,89,97,103)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 107,100,116,113,124,121,129,132,135,141)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 138,146,152,156,149,162,168,165,173,176)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 182,179,187,190,193,196,199,205,202,210)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 213,219,216,224,227,233,237,230,243,249)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 253,246,262,259,270,267,278,275,286,283)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 294,291,302,306,299,315,312,323,327,320)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 336,333,344,341,349,355,352,363,360,370)
MR_decl_label2(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0, 8,379)
MR_decl_label10(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0, 3,2,47,7,9,5,13,14,11,19)
MR_decl_label6(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0, 20,17,42,24,25,44)
MR_decl_label4(__Compare___ll_backend__x86_64_instrs__x86_64_instruction_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0, 3,2,5,28)
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
	NULL,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	NULL,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	NULL,
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
	15,
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
	15,
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
	NULL,
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
	15,
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
	NULL,
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
	NULL,
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
	15,
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
	NULL,
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
	15,
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
	NULL,
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
	15,
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
	15,
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
	MR_init_label4(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,5,28,10,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
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
	MR_init_label9(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,3,2,7,5,34,12,35,10,16)
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
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i12);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i34);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
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
	MR_init_label6(__Unify___ll_backend__x86_64_instrs__operand_0_0,5,9,13,33,15,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__imm_operand_0_0);
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i13);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i15);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__operand_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__operand_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
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
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0,3,2,7,9,10,5,14,15,17,12)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__operand_0_0,21,22,23,19,28,29,30,26,34,35)
	MR_init_label4(__Compare___ll_backend__x86_64_instrs__operand_0_0,63,36,64,37)
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
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__imm_operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i15);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i23);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i63);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i36);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__operand_0_0_i37);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__operand_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
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
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,15,16,17,18,19,20,21,22,23,26)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,24,30,34,40,38,44,48,52,56,58)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,60,64,66,68,70,74,72,78,82,84)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,86,88,90,94,96,98,100,102,104,106)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,108,110,112,114,116,118,120,124,126,128)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,130,136,134,140,142,144,148,150,152,156)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,158,160,165,167,162,171,173,177,181,183)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,187,191,195,199,201,203,205,207,211,213)
	MR_init_label7(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,217,219,221,225,509,229,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i509);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i19);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i20);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i21);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i22);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i23);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i24);
	}
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
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i26);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,26)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i30);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i38);
	}
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
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i40);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,40)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i48);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i56);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i58);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i60);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i64);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i66);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i68);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i70);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i72);
	}
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
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i74);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,74)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i78);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i82);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i84);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i86);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i88);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i90);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,21)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i94);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i96);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i98);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i100);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i102);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i104);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i106);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,27)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i108);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i110);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i112);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,31)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i114);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,29)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i116);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,32)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i118);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i120);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,34)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i124);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,35)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i126);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,36)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i128);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,37)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i130);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,38)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i134);
	}
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
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i136);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,136)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,39)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i140);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,40)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i142);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,41)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i144);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,42)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i148);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,43)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i150);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,44)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i152);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,45)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i156);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,46)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i158);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,47)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i160);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,48)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i162);
	}
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
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i165);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, pseudo_section_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i167);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,167)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,49)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i171);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,50)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i173);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,51)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i177);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,52)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i181);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,53)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i183);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,54)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i187);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,55)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i191);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,56)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i195);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,57)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i199);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,58)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i201);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,59)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i203);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,60)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i205);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,61)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i207);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,62)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i211);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,64)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i213);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,64)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,65)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i217);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,66)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i219);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,67)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i221);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,67)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,68)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i225);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,68)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0_i229);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,229)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module29)
	MR_init_entry1(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,53,54,55,56,57,58,59,60,61,62)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,63,64,65,66,67,68,69,70,71,72)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label9(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,83,84,85,86,87,88,89,90,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__x86_64_instrs__pseudo_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i4);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i5);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i6);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i7);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i9);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i10);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i11);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i12);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i13);
	}
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i14);
	}
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i15);
	}
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i16);
	}
	MR_r1 = (MR_Integer) 53;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i17);
	}
	MR_r1 = (MR_Integer) 55;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i18);
	}
	MR_r1 = (MR_Integer) 56;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i19);
	}
	MR_r1 = (MR_Integer) 58;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i20);
	}
	MR_r1 = (MR_Integer) 59;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i21);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i24);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i25);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i26);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i27);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i28);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i29);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i30);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i31);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i32);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i33);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i34);
	}
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i35);
	}
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i36);
	}
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i37);
	}
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i38);
	}
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i39);
	}
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i40);
	}
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i41);
	}
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i42);
	}
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i43);
	}
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i44);
	}
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i45);
	}
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i46);
	}
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i47);
	}
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i48);
	}
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i49);
	}
	MR_r1 = (MR_Integer) 42;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i50);
	}
	MR_r1 = (MR_Integer) 43;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i51);
	}
	MR_r1 = (MR_Integer) 44;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i52);
	}
	MR_r1 = (MR_Integer) 46;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i53);
	}
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i54);
	}
	MR_r1 = (MR_Integer) 45;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i55);
	}
	MR_r1 = (MR_Integer) 48;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i56);
	}
	MR_r1 = (MR_Integer) 49;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i57);
	}
	MR_r1 = (MR_Integer) 50;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,35)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i58);
	}
	MR_r1 = (MR_Integer) 51;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,36)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i59);
	}
	MR_r1 = (MR_Integer) 52;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,37)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i60);
	}
	MR_r1 = (MR_Integer) 54;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,38)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i61);
	}
	MR_r1 = (MR_Integer) 57;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,39)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i62);
	}
	MR_r1 = (MR_Integer) 60;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,40)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i63);
	}
	MR_r1 = (MR_Integer) 61;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,41)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i64);
	}
	MR_r1 = (MR_Integer) 62;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,42)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i65);
	}
	MR_r1 = (MR_Integer) 63;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i66);
	}
	MR_r1 = (MR_Integer) 64;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,44)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i67);
	}
	MR_r1 = (MR_Integer) 65;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,45)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i68);
	}
	MR_r1 = (MR_Integer) 66;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,46)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i69);
	}
	MR_r1 = (MR_Integer) 67;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,47)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i70);
	}
	MR_r1 = (MR_Integer) 68;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,48)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i71);
	}
	MR_r1 = (MR_Integer) 69;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,49)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i72);
	}
	MR_r1 = (MR_Integer) 70;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,50)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i73);
	}
	MR_r1 = (MR_Integer) 71;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,51)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i74);
	}
	MR_r1 = (MR_Integer) 72;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,52)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i75);
	}
	MR_r1 = (MR_Integer) 73;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,53)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i76);
	}
	MR_r1 = (MR_Integer) 74;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,54)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i77);
	}
	MR_r1 = (MR_Integer) 75;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,55)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i78);
	}
	MR_r1 = (MR_Integer) 76;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,56)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i79);
	}
	MR_r1 = (MR_Integer) 77;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,57)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i80);
	}
	MR_r1 = (MR_Integer) 78;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,58)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i81);
	}
	MR_r1 = (MR_Integer) 79;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,59)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i82);
	}
	MR_r1 = (MR_Integer) 80;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,60)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i83);
	}
	MR_r1 = (MR_Integer) 81;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,61)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i84);
	}
	MR_r1 = (MR_Integer) 82;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,62)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i85);
	}
	MR_r1 = (MR_Integer) 83;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,64)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i86);
	}
	MR_r1 = (MR_Integer) 85;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,65)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i87);
	}
	MR_r1 = (MR_Integer) 86;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,66)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i88);
	}
	MR_r1 = (MR_Integer) 87;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,67)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i89);
	}
	MR_r1 = (MR_Integer) 88;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,68)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i90);
	}
	MR_r1 = (MR_Integer) 89;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0_i91);
	}
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__pseudo_op_0_0,91)
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
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,26,27,605,28,32,36,29,42,45,51)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,55,48,61,67,71,64,77,80,86,83)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,91,97,94,105,102,110,113,119,123,116)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,129,135,132,140,143,146,149,155,152,160)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,163,166,169,172,175,181,178,186,189,195)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,192,200,203,206,209,215,212,220,223,229)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,233,226,239,242,248,245,253,259,256,264)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,267,270,273,279,284,288,276,298,295,303)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,306,312,309,320,317,325,331,328,336,339)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,342,348,345,353,356,359,362,365,368,371)
	MR_init_label5(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,374,377,382,8,391)
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i605);
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
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i28);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i29);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i32);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i36);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i42);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i45);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i48);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i51);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i55);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i64);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i67);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i71);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i77);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i80);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i83);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i86);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i91);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i94);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i97);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i102);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i105);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i110);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i113);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i116);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i119);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i123);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i129);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i132);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i135);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i140);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i143);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i146);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i149);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,21)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i152);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i155);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i160);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i163);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i166);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i169);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i172);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i175);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,27)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i178);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i181);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i186);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i189);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,31)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i192);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i195);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i200);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,32)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i203);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i206);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,34)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i209);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,35)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i212);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i215);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,36)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i220);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,37)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i223);
	}
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,38)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i226);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i229);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i233);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,39)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i239);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,40)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i242);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,41)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i245);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i248);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,42)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i253);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,43)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i256);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i259);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,44)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i264);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,45)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i267);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,46)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i270);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,47)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i273);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,48)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i276);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i279);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i284);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, pseudo_section_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i288);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,49)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i295);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i298);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,50)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i303);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,51)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i306);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,52)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i309);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i312);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,53)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i317);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i320);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,54)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i325);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,55)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i328);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i331);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,56)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i336);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,57)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i339);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,57)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,58)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i342);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,58)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,59)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i345);
	}
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i348);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,60)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i353);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,60)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,61)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i356);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,62)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i359);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,62)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,64)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i362);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,64)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,65)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i365);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,65)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,66)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i368);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,66)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,67)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i371);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,67)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,68)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i374);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,68)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i377);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,377)
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
		__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i382);
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0_i391);
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
MR_def_label(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0,391)
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
	MR_init_label4(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,5,28,10,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
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
	MR_init_label9(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,3,2,7,5,34,12,35,10,16)
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
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i12);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i34);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module39)
	MR_init_entry1(__Unify___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_instrs__rmrol_0_0);
	MR_init_label5(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,5,7,26,11,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i26);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i11);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__rmrol_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__rmrol_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__rel_offset_0_0);
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
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,3,2,7,9,5,13,14,11,19,20)
	MR_init_label6(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,17,42,24,25,44,26)
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
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_mem_ref_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i42);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i24);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__rmrol_0_0_i26);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__rmrol_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__rel_offset_0_0);
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
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,15,16,17,18,19,22,20,28,26,34)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,32,40,42,38,44,50,48,56,54,62)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,60,68,66,72,78,80,76,84,82,90)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,88,94,98,102,108,106,112,118,120,116)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,124,130,128,132,136,142,140,146,150,154)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,158,162,168,166,172,176,182,180,186,190)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,196,198,194,200,206,208,204,212,210,218)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,216,224,222,230,228,234,232,240,242,238)
	MR_init_label10(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,248,246,254,256,252,262,260,268,266,272)
	MR_init_label7(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,278,276,284,515,282,289,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i515);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i19);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i20);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i22);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i26);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i28);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i32);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i34);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i38);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i40);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i42);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i48);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i50);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i54);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i56);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i60);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i62);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i66);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i68);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i72);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i76);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i78);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i80);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i82);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i84);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i88);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i90);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i94);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i98);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i102);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i106);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i108);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,108)
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i112);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i116);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i118);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,118)
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i120);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,120)
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i124);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i128);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i130);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i132);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i136);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,21)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i140);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i142);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i146);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i150);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i154);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i158);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i162);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,27)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i166);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i168);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i172);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,29)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i176);
	}
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,31)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i180);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i182);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,32)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i186);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i190);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,34)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i194);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i196);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i198);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,35)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i200);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, uint16);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,36)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i204);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i206);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i208);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,37)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i210);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i212);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,39)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i216);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i218);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,40)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i222);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i224);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,41)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i228);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i230);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,38)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i232);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i234);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,42)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i238);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i240);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i242);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,43)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i246);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i248);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,44)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i252);
	}
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i254);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i256);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,45)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i260);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,46)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i266);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i272);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,47)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i276);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,48)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i282);
	}
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
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,282)
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
		__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i289);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_instrs_module48)
	MR_init_entry1(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label10(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,53,54,55,56,57,58,59,60,61,62)
	MR_init_label6(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,63,64,65,66,67,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__x86_64_instrs__x86_64_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i3);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i4);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i5);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i6);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i7);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i9);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i10);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i11);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i12);
	}
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13);
	}
	MR_r1 = (MR_Integer) 42;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i14);
	}
	MR_r1 = (MR_Integer) 46;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i15);
	}
	MR_r1 = (MR_Integer) 48;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i16);
	}
	MR_r1 = (MR_Integer) 60;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i17);
	}
	MR_r1 = (MR_Integer) 61;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i21);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i22);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i23);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i24);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i25);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i26);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i27);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i28);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i29);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i30);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i31);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i32);
	}
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i33);
	}
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i34);
	}
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i35);
	}
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i36);
	}
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i37);
	}
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i38);
	}
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i39);
	}
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i40);
	}
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i41);
	}
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i42);
	}
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i43);
	}
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i44);
	}
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i45);
	}
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i46);
	}
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i47);
	}
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i48);
	}
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i49);
	}
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i50);
	}
	MR_r1 = (MR_Integer) 44;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i51);
	}
	MR_r1 = (MR_Integer) 45;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i52);
	}
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i53);
	}
	MR_r1 = (MR_Integer) 49;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,35)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i54);
	}
	MR_r1 = (MR_Integer) 50;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,36)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i55);
	}
	MR_r1 = (MR_Integer) 51;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,37)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i56);
	}
	MR_r1 = (MR_Integer) 52;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,39)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i57);
	}
	MR_r1 = (MR_Integer) 54;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,40)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i58);
	}
	MR_r1 = (MR_Integer) 55;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,41)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i59);
	}
	MR_r1 = (MR_Integer) 56;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,38)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i60);
	}
	MR_r1 = (MR_Integer) 53;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,42)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i61);
	}
	MR_r1 = (MR_Integer) 57;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i62);
	}
	MR_r1 = (MR_Integer) 58;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,44)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i63);
	}
	MR_r1 = (MR_Integer) 59;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,45)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i64);
	}
	MR_r1 = (MR_Integer) 62;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,46)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i65);
	}
	MR_r1 = (MR_Integer) 63;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i66);
	}
	MR_r1 = (MR_Integer) 43;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,47)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i67);
	}
	MR_r1 = (MR_Integer) 64;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,48)) {
		MR_GOTO_LAB(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0_i68);
	}
	MR_r1 = (MR_Integer) 65;
	MR_proceed();
MR_def_label(__Index___ll_backend__x86_64_instrs__x86_64_inst_0_0,68)
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
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,16,17,18,19,20,21,22,23,557,24)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,28,25,36,33,44,41,52,56,49,62)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,68,65,76,73,84,81,92,89,97,103)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,107,100,116,113,124,121,129,132,135,141)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,138,146,152,156,149,162,168,165,173,176)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,182,179,187,190,193,196,199,205,202,210)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,213,219,216,224,227,233,237,230,243,249)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,253,246,262,259,270,267,278,275,286,283)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,294,291,302,306,299,315,312,323,327,320)
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,336,333,344,341,349,355,352,363,360,370)
	MR_init_label2(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,8,379)
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i557);
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
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i24);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,557)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i25);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i28);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i33);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i36);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i41);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i44);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i49);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i52);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i56);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i62);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i65);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i68);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i73);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i76);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i81);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i84);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i89);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i92);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i97);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i100);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i103);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i107);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i113);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i116);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i121);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i124);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i129);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i132);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i135);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i138);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i141);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i146);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i149);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i152);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, operand);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i156);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, operand);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i162);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i165);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i168);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i173);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i176);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,21)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i179);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i182);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i187);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i190);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i193);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i196);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i199);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,27)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i202);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i205);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i210);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i213);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,31)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i216);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i219);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,32)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i224);
	}
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i227);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,34)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i230);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i233);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i237);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,35)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i243);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, uint16);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,36)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i246);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i249);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i253);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,37)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i259);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i262);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,39)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i267);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i270);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,40)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i275);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i278);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,41)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i283);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i286);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,38)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i291);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i294);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,42)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i299);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i302);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i306);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,43)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i312);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i315);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,44)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i320);
	}
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i323);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i327);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,45)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i333);
	}
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,46)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i341);
	}
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i349);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,47)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i352);
	}
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,48)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i360);
	}
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,360)
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
		__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i370);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0_i379);
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
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0,379)
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
	MR_init_label5(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,5,7,26,11,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i26);
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
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__pseudo_op_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__x86_64_inst_0_0);
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_instrs__x86_64_instr_0_0,11)
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
	MR_init_label10(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,3,2,47,7,9,5,13,14,11,19)
	MR_init_label6(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,20,17,42,24,25,44)
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
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i14);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__pseudo_op_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__x86_64_inst_0_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i24);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0_i47);
	}
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_instr_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
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
	MR_init_label4(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,3,2,5,28)
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
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__x86_64_instrs__x86_64_module_0_0,28)
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__x86_64_instrs__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__ll_backend__x86_64_instrs__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
