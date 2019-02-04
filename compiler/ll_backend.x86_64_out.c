/*
** Automatically generated from `x86_64_out.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__x86_64_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.x86_64_out.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "ll_backend.x86_64_out.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.x86_64_out.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.x86_64_out.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.x86_64_out.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.x86_64_out.c"
#line 49 "ll_backend.x86_64_out.c"
#include "ll_backend.x86_64_out.mh"

#line 52 "ll_backend.x86_64_out.c"
#line 53 "ll_backend.x86_64_out.c"
#ifndef LL_BACKEND__X86_64_OUT_DECL_GUARD
#define LL_BACKEND__X86_64_OUT_DECL_GUARD

#line 57 "ll_backend.x86_64_out.c"
#line 58 "ll_backend.x86_64_out.c"

#endif
#line 61 "ll_backend.x86_64_out.c"

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
MR_decl_label1(ll_backend__x86_64_out__check_operand_not_immediate_2_0, 2)
MR_decl_label1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0, 2)
MR_decl_label2(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0, 2,4)
MR_decl_label1(ll_backend__x86_64_out__check_operand_register_2_0, 2)
MR_decl_label9(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0, 6,5,9,8,11,4,14,13,2)
MR_decl_label2(ll_backend__x86_64_out__check_pseudo_section_flags_2_0, 4,2)
MR_decl_label7(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0, 3,5,6,7,8,4,37)
MR_decl_label1(ll_backend__x86_64_out__check_pseudo_section_type_2_0, 3)
MR_decl_label1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0, 3)
MR_decl_label7(ll_backend__x86_64_out__check_rc_first_operand_2_0, 4,6,5,3,55,13,12)
MR_decl_label6(ll_backend__x86_64_out__check_section_flags_and_type_3_0, 2,4,5,3,9,11)
MR_decl_label2(ll_backend__x86_64_out__check_unsigned_int_size_3_0, 2,3)
MR_decl_label10(ll_backend__x86_64_out__operand_to_string_2_0, 5,8,11,3,309,20,21,22,23,24)
MR_decl_label10(ll_backend__x86_64_out__operand_to_string_2_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label10(ll_backend__x86_64_out__operand_to_string_2_0, 19,37,35,39,40,41,15,47,46,45)
MR_decl_label10(ll_backend__x86_64_out__operand_to_string_2_0, 13,54,55,56,57,58,59,60,61,62)
MR_decl_label8(ll_backend__x86_64_out__operand_to_string_2_0, 63,64,65,66,67,68,52,69)
MR_decl_label10(ll_backend__x86_64_out__output_bit_test_instr_6_0, 54,5,6,9,11,14,15,16,17,18)
MR_decl_label3(ll_backend__x86_64_out__output_bit_test_instr_6_0, 19,13,10)
MR_decl_label9(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0, 4,6,9,10,11,12,8,5,2)
MR_decl_label10(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0, 2,4,7,11,14,15,16,17,18,19)
MR_decl_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0, 20,12,23,24,25,26,27,28)
MR_decl_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0, 186,6,7,8,9,10,11,12,13,14)
MR_decl_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0, 35,36,37,38,39,40,42,46,47,44)
MR_decl_label4(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0, 2,3,4,5)
MR_decl_label4(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0, 2,3,4,5)
MR_decl_label10(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0, 2,3,4,5,19,7,8,6,11,14)
MR_decl_label4(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0, 13,16,17,10)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 23,25,27,29,31,33,36,39,43,46)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 47,51,52,53,54,55,56,57,49,45)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 42,63,66,67,65,62,71,73,75,77)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 80,83,84,82,79,88,91,95,98,101)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 102,103,104,105,100,97,94,111,114,113)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 110,118,120,123,124,128,129,130,125,122)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 135,138,139,140,142,144,147,146,150,151)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 152,588,154,156,157,137,160,162,165,166)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 164,169,172,175,178,179,180,181,182,177)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 174,171,187,189,191,193,195,197,200,202)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 204,207,210,211,209,215,218,221,222,223)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 224,225,226,220,217,214,1215,235,238,237)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 231,243,246,249,250,251,252,253,254,255)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 248,245,242,261,264,267,268,269,270,271)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 266,263,260,277,280,283,284,285,286,287)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 282,279,276,292,296,298,295,302,305,308)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 309,310,311,312,307,304,301,318,321,324)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 327,328,329,330,331,332,333,334,326,323)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 320,317,341,344,347,348,349,350,351,346)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 343,340,357,360,363,366,367,368,369,370)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 371,372,373,365,362,359,356,379,383,386)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 389,390,391,392,393,388,385,382,398,401)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0, 404,407,408,409,410,411,406,403,400,417)
MR_decl_label9(ll_backend__x86_64_out__output_x86_64_inst_4_0, 420,423,424,425,426,427,428,419,416)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_instr_4_0, 57,7,9,10,11,12,13,8,3,20)
MR_decl_label5(ll_backend__x86_64_out__output_x86_64_instr_4_0, 23,22,28,29,62)
MR_decl_label6(ll_backend__x86_64_out__output_x86_64_instruction_4_0, 5,6,2,7,8,10)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 23,25,27,29,31,33,35,37,39,41)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 43,45,47,49,52,53,54,55,57,58)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 51,62,64,61,68,67,72,73,74,71)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 77,80,81,82,79,86,87,88,85,92)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 91,96,95,99,101,104,105,106,103,110)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 109,114,113,118,117,121,124,125,126,123)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 130,129,134,133,138,137,142,141,146,145)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 150,149,154,155,156,153,160,159,164,163)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 168,169,170,167,174,173,178,179,177,182)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 185,184,189,190,188,194,193,197,199,202)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 201,206,205,209,212,211,216,217,215,220)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 223,224,222,227,228,226,232,231,236,237)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 405,239,240,244,245,246,247,248,249,241)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 238,254,255,235,259,260,261,258,264,266)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 269,270,271,268,274,276,278,280,283,282)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 287,286,291,292,293,290,297,296,301,517)
MR_decl_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 303,300,307,306,310,313,312,317,316,320)
MR_decl_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0, 1038,325,324,328,329,330,331,332)
MR_decl_label7(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0, 27,4,7,8,19,10,29)
MR_decl_label8(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0, 21,4,5,6,7,16,9,23)
MR_decl_label7(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0, 27,3,5,6,7,8,9)
MR_decl_label6(ll_backend__x86_64_out__rel_offset_to_string_2_0, 4,3,12,11,20,19)
MR_def_extern_entry(ll_backend__x86_64_out__output_x86_64_instruction_4_0)
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
505,
"6"
};


MR_declare_entry(mercury__do_call_class_method_3);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module0)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_instruction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0);
	MR_init_label6(ll_backend__x86_64_out__output_x86_64_instruction_4_0,5,6,2,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_x86_64_instruction'/4 mode 0 */
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
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instruction_4_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("\t# ", 3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i5);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i6);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instruction_4_0_i7);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instruction_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instruction_4_0_i8);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,8)
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
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__x86_64_out__output_x86_64_instruction_4_0_i10);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instruction_4_0,10)
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

MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module1)
	MR_init_entry1(ll_backend__x86_64_out__rel_offset_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__rel_offset_to_string_2_0);
	MR_init_label6(ll_backend__x86_64_out__rel_offset_to_string_2_0,4,3,12,11,20,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rel_offset_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__rel_offset_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_LT(MR_r2,-32768)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i4);
	}
	if (MR_INT_GT(MR_r2,32767)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i4);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", 56);
	MR_r3 = (MR_Word) MR_string_const("ro16(int16): check_signed_int_size failed", 41);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i11);
	}
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_LT(MR_r2,-2147483648)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i12);
	}
	if (MR_INT_GT(MR_r2,2147483647)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i12);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", 56);
	MR_r3 = (MR_Word) MR_string_const("ro32(int32): check_signed_int_size failed", 41);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_LT(MR_r2,-128)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i19);
	}
	if (MR_INT_GT(MR_r2,127)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i19);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__rel_offset_to_string_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
MR_def_label(ll_backend__x86_64_out__rel_offset_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", 56);
	MR_r3 = (MR_Word) MR_string_const("ro8(int8): check_signed_int_size failed", 39);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module2)
	MR_init_entry1(ll_backend__x86_64_out__operand_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__operand_to_string_2_0);
	MR_init_label10(ll_backend__x86_64_out__operand_to_string_2_0,5,8,11,3,309,20,21,22,23,24)
	MR_init_label10(ll_backend__x86_64_out__operand_to_string_2_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label10(ll_backend__x86_64_out__operand_to_string_2_0,19,37,35,39,40,41,15,47,46,45)
	MR_init_label10(ll_backend__x86_64_out__operand_to_string_2_0,13,54,55,56,57,58,59,60,61,62)
	MR_init_label8(ll_backend__x86_64_out__operand_to_string_2_0,63,64,65,66,67,68,52,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'operand_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_out__operand_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i11);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i11);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i11);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,11)
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
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i15);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i309);
	}
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i20);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("%r10", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
	}
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i21);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r11", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i22);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r12", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i23);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r13", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i24);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r14", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i25);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r15", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i26);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r8", 3);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i27);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%r9", 3);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i28);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rax", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i29);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rbp", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i30);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rbx", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i31);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rcx", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i32);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rdi", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i33);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rdx", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i34);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rsi", 4);
	MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i19);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("%rsp", 4);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i35);
	}
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i37);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,37)
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
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i39);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i40);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i41);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,41)
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
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i45);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_LT(MR_r1,-2147483648)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i46);
	}
	if (MR_INT_GT(MR_r1,2147483647)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i46);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__operand_to_string_2_0_i47);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("(%rip)", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.instr_ptr_type\'/2", 50);
	MR_r3 = (MR_Word) MR_string_const("rip_constant: check_signed_int_size failed", 42);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const("(%rip)", 6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i52);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i54);
	}
	MR_r1 = (MR_Word) MR_string_const("%r10", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i55);
	}
	MR_r1 = (MR_Word) MR_string_const("%r11", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i56);
	}
	MR_r1 = (MR_Word) MR_string_const("%r12", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i57);
	}
	MR_r1 = (MR_Word) MR_string_const("%r13", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i58);
	}
	MR_r1 = (MR_Word) MR_string_const("%r14", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i59);
	}
	MR_r1 = (MR_Word) MR_string_const("%r15", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i60);
	}
	MR_r1 = (MR_Word) MR_string_const("%r8", 3);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i61);
	}
	MR_r1 = (MR_Word) MR_string_const("%r9", 3);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i62);
	}
	MR_r1 = (MR_Word) MR_string_const("%rax", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i63);
	}
	MR_r1 = (MR_Word) MR_string_const("%rbp", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i64);
	}
	MR_r1 = (MR_Word) MR_string_const("%rbx", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i65);
	}
	MR_r1 = (MR_Word) MR_string_const("%rcx", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i66);
	}
	MR_r1 = (MR_Word) MR_string_const("%rdi", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i67);
	}
	MR_r1 = (MR_Word) MR_string_const("%rdx", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i68);
	}
	MR_r1 = (MR_Word) MR_string_const("%rsi", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%rsp", 4);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__operand_to_string_2_0_i69);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__operand_to_string_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__rel_offset_to_string_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__string_writer__put_int_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module3)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	MR_init_label10(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,2,3,4,5,19,7,8,6,11,14)
	MR_init_label4(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0,13,16,17,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pseudo_op_with_int_args'/7 mode 0 */
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
	MR_sv(2) = MR_tfield(1, MR_sv(3), 0);
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
	MR_sv(2) = MR_tfield(1, MR_sv(4), 0);
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
	MR_sv(2) = MR_tfield(1, MR_sv(4), 0);
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

MR_BEGIN_MODULE(ll_backend__x86_64_out_module4)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__pseudo_op_float_args_while_4_0);
	MR_init_label7(ll_backend__x86_64_out__pseudo_op_float_args_while_4_0,27,4,7,8,19,10,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_op_float_args_while'/4 mode 0 */
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
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
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
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module5)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	MR_init_label4(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pseudo_op_float_args'/5 mode 0 */
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

MR_BEGIN_MODULE(ll_backend__x86_64_out_module6)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__pseudo_op_str_args_while_4_0);
	MR_init_label8(ll_backend__x86_64_out__pseudo_op_str_args_while_4_0,21,4,5,6,7,16,9,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_op_str_args_while'/4 mode 0 */
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
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module7)
	MR_init_entry1(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	MR_init_label4(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pseudo_op_str_args'/5 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module8)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_flags_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_pseudo_section_flags_2_0);
	MR_init_label2(ll_backend__x86_64_out__check_pseudo_section_flags_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_pseudo_section_flags'/2 mode 0 */
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
	MR_r1 = MR_tfield(1, MR_r1, 1);
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module9)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0);
	MR_init_label7(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,3,5,6,7,8,4,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_pseudo_section_m_flag'/2 mode 0 */
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
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("a", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("m", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("w", 1);
	MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i4);
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("x", 1);
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("m", 1)) != 0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localtailcall(ll_backend__x86_64_out__check_pseudo_section_m_flag_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module10)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_section_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_pseudo_section_type_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_pseudo_section_type_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_pseudo_section_type'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module11)
	MR_init_entry1(ll_backend__x86_64_out__check_section_flags_and_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_section_flags_and_type_3_0);
	MR_init_label6(ll_backend__x86_64_out__check_section_flags_and_type_3_0,2,4,5,3,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_section_flags_and_type'/3 mode 0 */
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
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.check_section_flags_and_type\'/3", 64);
	MR_r3 = (MR_Word) MR_string_const("flag \'m\' has to have \'type\' arguments", 37);
	MR_np_call_localret_ent(require__unexpected_3_0,
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module12)
	MR_init_entry1(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0);
	MR_init_label7(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,27,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_section_flags_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("a", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i9);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("m", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i9);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i9);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("w", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i9);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("x", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i9);
MR_def_label(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module13)
	MR_init_entry1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_pseudo_type_desc_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_pseudo_type_desc_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_pseudo_type_desc'/2 mode 0 */
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

MR_BEGIN_MODULE(ll_backend__x86_64_out_module14)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0);
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,23,25,27,29,31,33,35,37,39,41)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,43,45,47,49,52,53,54,55,57,58)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,51,62,64,61,68,67,72,73,74,71)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,77,80,81,82,79,86,87,88,85,92)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,91,96,95,99,101,104,105,106,103,110)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,109,114,113,118,117,121,124,125,126,123)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,130,129,134,133,138,137,142,141,146,145)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,150,149,154,155,156,153,160,159,164,163)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,168,169,170,167,174,173,178,179,177,182)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,185,184,189,190,188,194,193,197,199,202)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,201,206,205,209,212,211,216,217,215,220)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,223,224,222,227,228,226,232,231,236,237)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,405,239,240,244,245,246,247,248,249,241)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,238,254,255,235,259,260,261,258,264,266)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,269,270,271,268,274,276,278,280,283,282)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,287,286,291,292,293,290,297,296,301,517)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,303,300,307,306,310,313,312,317,316,320)
	MR_init_label8(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,1038,325,324,328,329,330,331,332)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_x86_64_pseudo_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i3);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.abort\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i5);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.dim\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i7);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.eject\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i9);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.elseif\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i11);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.end\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i13);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.endef\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,7)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i15);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.endfunc\n", 10);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i17);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.endif\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i19);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.endm\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i21);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.err\n", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i23);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.exitm\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i25);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.extern\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i27);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.ident\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i29);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.list\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i31);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.macro\n", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,16)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i33);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.nolist\n", 9);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,17)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i35);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.popsection\n", 13);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,18)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i37);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.previous\n", 11);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i39);
	}
	MR_r3 = (MR_Word) MR_string_const("\t.else\n", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".align", 6);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".ascii", 6);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".asciiz", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".balign", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".byte", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i51);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i52);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.comm\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i53);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i54);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i55);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i57);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i58);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i517);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i61);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.data\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i62);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i64);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i517);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i67);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i68);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.def\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i71);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i72);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i73);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i74);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.desc\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".double", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i79);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i80);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i81);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i82);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.equ\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i85);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i86);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i87);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i88);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.equiv\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i91);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i92);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.fail\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i95);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i96);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.file\t\"", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i99);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".repeat", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".float", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i103);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i104);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i105);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i106);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.func\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i109);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i110);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.global\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,16)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i113);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i114);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.globl\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,17)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i117);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i118);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.hidden\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,18)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".hword", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,21)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i123);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i124);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i125);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i126);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifc\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,20)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i129);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i130);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifdef\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,22)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i133);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i134);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifeq\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,23)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i137);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i138);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifge\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,24)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i141);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i142);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifgt\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,25)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i145);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i146);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifle\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,26)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i149);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i150);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.iflt\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,27)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i153);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i154);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i155);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i156);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnc\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,28)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i159);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i160);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifndef\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,30)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i163);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i164);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifne\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,31)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i167);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i168);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i169);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i170);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnes\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,29)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i173);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i174);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.ifnotdef\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,32)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i177);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i178);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i179);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.include\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,33)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i182);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".int", 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,34)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i184);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i185);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.internal\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,35)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i188);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tlcomm\t", 7);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i189);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i190);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,36)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i193);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.line\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i194);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,37)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i197);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".long", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,38)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i199);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".p2align", 8);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,39)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i201);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i202);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.print\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,40)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i205);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i206);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.protected\t", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,41)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i209);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".psize", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,42)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i211);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i212);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.purgem\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,43)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i215);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.pushsection\t", 14);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i216);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i217);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,44)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i220);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("\t.quad\t", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,45)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i222);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\t.rept\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i223);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,46)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i226);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i227);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i228);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.sbttl\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,47)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i231);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i232);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.scl\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,48)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i235);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.section\t", 10);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i236);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i237);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i239);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i238);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_section_flags_and_type_3_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i240);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i241);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i241);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__pseudo_section_flags_to_string_3_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i244);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i245);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\"", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i246);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i247);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_section_type_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i248);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i249);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i405);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_pseudo_op\'/4", 59);
	MR_r3 = (MR_Word) MR_string_const("section: check_section_flags_and_type unexpected", 48);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i238);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i254);
	}
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_sv(4), 0);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i255);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i517);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,49)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i258);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i259);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i260);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i261);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.set\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,50)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i264);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".short", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,51)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i266);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".single", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_float_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,52)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i268);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i269);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i270);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i271);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.size\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,53)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i274);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".skip", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,54)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i276);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".sleb128\t", 9);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,55)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i278);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".space", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,56)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i280);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".string", 7);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,57)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i282);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i283);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.struct\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,58)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i286);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i287);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.subsection\t", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,59)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i290);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i291);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i292);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i293);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.symver\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,60)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i296);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i297);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.tag\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,61)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i300);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\ttext\t", 6);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i301);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i303);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,517)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i517);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,62)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i306);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i307);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.title\t", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,64)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i310);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".uleb128", 8);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,65)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i312);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i313);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.val\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,66)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i316);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i317);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.version\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,67)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i320);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".weak", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,68)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i1038);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".word", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_pseudo_op_str_args_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,1038)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,19)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i324);
	}
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i325);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.if\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_pseudo_type_desc_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i328);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i329);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i330);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i331);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t.type\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0,332)
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module15)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_not_immediate_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_operand_not_immediate_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_not_immediate_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_operand_not_immediate'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module16)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	MR_init_label10(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,2,4,7,11,14,15,16,17,18,19)
	MR_init_label8(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,20,12,23,24,25,26,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instr_not_imm_dest'/6 mode 0 */
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
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_not_imm_dest\'/6", 61);
	MR_r3 = (MR_Word) MR_string_const("invalid operands: two memory references are not allowed", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
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

MR_BEGIN_MODULE(ll_backend__x86_64_out_module17)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	MR_init_label9(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,4,6,9,10,11,12,8,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instr_8bit_rel_offset'/5 mode 0 */
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
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", 64);
	MR_r3 = (MR_Word) MR_string_const("check_signed_int_size failed", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", 64);
	MR_r3 = (MR_Word) MR_string_const("string.to_int failed", 20);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", 64);
	MR_r3 = (MR_Word) MR_string_const("invalid operand: operand is not a relative offset", 49);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module18)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_operand_not_mem_ref_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_operand_not_mem_ref'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module19)
	MR_init_entry1(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_bit_test_instr_6_0);
	MR_init_label10(ll_backend__x86_64_out__output_bit_test_instr_6_0,54,5,6,9,11,14,15,16,17,18)
	MR_init_label3(ll_backend__x86_64_out__output_bit_test_instr_6_0,19,13,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bit_test_instr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_bit_test_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_bit_test_instr_6_0_i54);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("bt: invalid first operand - immediate value is not allowed", 58);
	MR_np_tailcall_ent(require__unexpected_3_0);
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
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("bt: invalid second operand - memory reference is not allowed", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
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
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("bt: invalid second operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_bit_test_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("string.to_int failed", 20);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module20)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_register_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_operand_register_2_0);
	MR_init_label1(ll_backend__x86_64_out__check_operand_register_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_operand_register'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module21)
	MR_init_entry1(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0);
	MR_init_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0,186,6,7,8,9,10,11,12,13,14)
	MR_init_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label10(ll_backend__x86_64_out__output_instr_with_condition_7_0,35,36,37,38,39,40,42,46,47,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instr_with_condition'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_instr_with_condition_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i186);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_with_condition\'/7", 63);
	MR_r3 = (MR_Word) MR_string_const("invalid first operand: immediate value is not allowed", 53);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("a", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,7)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("ae", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("b", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("be", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("c", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("e", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,29)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("g", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,25)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("ge", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,22)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("l", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,26)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("le", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("na", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nae", 3);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nb", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nbe", 3);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nc", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("ne", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,27)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("ng", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,23)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i23);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nge", 3);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,24)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nl", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,28)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i25);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nle", 3);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i26);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("no", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,20)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i27);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("np", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,17)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("ns", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i29);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("nz", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("o", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,18)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i31);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("p", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,19)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("pe", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,21)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i33);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("po", 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,16)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i34);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("s", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_string_const("z", 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i35);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,35)
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
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i36);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i37);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,37)
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
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i38);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i39);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,39)
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
		mercury__ll_backend__x86_64_out__output_instr_with_condition_7_0_i40);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i42);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_instr_with_condition_7_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_instr_with_condition_7_0_i44);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i46);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_instr_with_condition_7_0_i47);
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,47)
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
MR_def_label(ll_backend__x86_64_out__output_instr_with_condition_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_instr_with_condition\'/7", 63);
	MR_r3 = (MR_Word) MR_string_const("invalid second operand", 22);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module22)
	MR_init_entry1(ll_backend__x86_64_out__check_unsigned_int_size_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_unsigned_int_size_3_0);
	MR_init_label2(ll_backend__x86_64_out__check_unsigned_int_size_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_unsigned_int_size'/3 mode 0 */
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
	MR_r2 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_unsigned_int_size_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__x86_64_out__check_unsigned_int_size_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module23)
	MR_init_entry1(ll_backend__x86_64_out__check_rc_first_operand_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_rc_first_operand_2_0);
	MR_init_label7(ll_backend__x86_64_out__check_rc_first_operand_2_0,4,6,5,3,55,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_rc_first_operand'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__check_rc_first_operand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i3);
	}
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
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i13);
	}
	if (MR_INT_GT(MR_r2,255)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.check_rc_first_operand\'/2", 58);
	MR_r3 = (MR_Word) MR_string_const("string.to_int", 13);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i12);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_rc_first_operand_2_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_rc_first_operand_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.check_rc_first_operand\'/2", 58);
	MR_r3 = (MR_Word) MR_string_const("invalid operand", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_out_module24)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_operand_reg_or_mem_2_0);
	MR_init_label2(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_operand_reg_or_mem'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__x86_64_out_module25)
	MR_init_entry1(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0);
	MR_init_label9(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,6,5,9,8,11,4,14,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_operand_unsigned_imm_or_reg'/2 mode 0 */
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
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
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
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
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
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i11);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,11)
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
		ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i14);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i13);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i2);
	}
	if (MR_INT_GT(MR_r2,4294967295)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.check_operand_unsigned_imm_or_reg\'/2", 69);
	MR_r3 = (MR_Word) MR_string_const("string.to_int failed", 20);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
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

MR_BEGIN_MODULE(ll_backend__x86_64_out_module26)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_x86_64_inst_4_0);
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,23,25,27,29,31,33,36,39,43,46)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,47,51,52,53,54,55,56,57,49,45)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,42,63,66,67,65,62,71,73,75,77)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,80,83,84,82,79,88,91,95,98,101)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,102,103,104,105,100,97,94,111,114,113)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,110,118,120,123,124,128,129,130,125,122)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,135,138,139,140,142,144,147,146,150,151)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,152,588,154,156,157,137,160,162,165,166)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,164,169,172,175,178,179,180,181,182,177)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,174,171,187,189,191,193,195,197,200,202)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,204,207,210,211,209,215,218,221,222,223)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,224,225,226,220,217,214,1215,235,238,237)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,231,243,246,249,250,251,252,253,254,255)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,248,245,242,261,264,267,268,269,270,271)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,266,263,260,277,280,283,284,285,286,287)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,282,279,276,292,296,298,295,302,305,308)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,309,310,311,312,307,304,301,318,321,324)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,327,328,329,330,331,332,333,334,326,323)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,320,317,341,344,347,348,349,350,351,346)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,343,340,357,360,363,366,367,368,369,370)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,371,372,373,365,362,359,356,379,383,386)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,389,390,391,392,393,388,385,382,398,401)
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_inst_4_0,404,407,408,409,410,411,406,403,400,417)
	MR_init_label9(ll_backend__x86_64_out__output_x86_64_inst_4_0,420,423,424,425,426,427,428,419,416)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_x86_64_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i3);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcbw\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i5);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcdq\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i7);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcdqe\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i9);
	}
	MR_r3 = (MR_Word) MR_string_const("\tclc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,7)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i11);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcld\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i13);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcmc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i15);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcqo\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i17);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcwd\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i19);
	}
	MR_r3 = (MR_Word) MR_string_const("\tcwde\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i21);
	}
	MR_r3 = (MR_Word) MR_string_const("\tleave\t", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i23);
	}
	MR_r3 = (MR_Word) MR_string_const("nop", 3);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i25);
	}
	MR_r3 = (MR_Word) MR_string_const("\tpopfq\t", 7);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i27);
	}
	MR_r3 = (MR_Word) MR_string_const("\tpushfq\t", 8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i29);
	}
	MR_r3 = (MR_Word) MR_string_const("\tstc\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i31);
	}
	MR_r3 = (MR_Word) MR_string_const("\tstd\t", 5);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i33);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("adc", 3);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i36);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("add", 3);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i39);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("and", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i42);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i43);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i46);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i47);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i49);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("bsf", 3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i52);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bsr", 3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i52);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i53);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i54);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i55);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i56);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i57);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("bs: second operand is not a register", 36);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("bsf: first operand is an immediate value", 40);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i62);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i63);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i65);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i66);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i67);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tbswap\t", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("bswap: operand is not a register", 32);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bt", 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i73);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("btc", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("btr", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bts", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_bit_test_instr_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i79);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i80);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i82);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i83);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i84);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcall\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("call: invalid target operand", 28);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i88);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("cmov", 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i91);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("cmp", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i94);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i95);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i97);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i98);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i100);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i101);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i102);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i103);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i104);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i105);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcmp\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("xmpxchg: invalid second operand", 31);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("xmpxchg: invalid first operand", 30);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,11)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i110);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i111);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i113);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i114);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcmpxchg8b", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("cmpxchg8b: invalid operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i118);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("dec", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,13)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i120);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("div", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,14)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i122);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i123);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i124);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i125);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i125);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\tenter\t", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i128);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i129);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i130);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i588);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("enter: check_unsigned_int_size failed", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,15)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i135);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("idiv", 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,16)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i137);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i138);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\timul\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i139);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i140);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i142);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\t\t", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i144);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i146);
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__get_scratch_reg_0_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i147);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i150);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i150);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i151);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i152);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i154);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,588)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\t", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i156);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i157);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,17)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i160);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("inc", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,18)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i162);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("j", 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_with_condition_7_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,20)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i164);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i165);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i166);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tjmp\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,19)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i169);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("jrcxz", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,21)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i171);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i172);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i174);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i175);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i177);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i178);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i179);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i180);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i181);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i182);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tlea\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("lea: invalid second operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("lea: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,22)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i187);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loop", 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,23)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i189);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loope", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,24)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i191);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopne", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,25)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i193);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopnz", 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,26)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i195);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("loopz", 5);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,27)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i197);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("mov", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,28)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i200);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("mul", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,29)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i202);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("neg", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,31)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i204);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("or", 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,32)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i207);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("pop", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,33)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i209);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("\tpush\t", 6);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i210);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i211);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,34)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i214);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_rc_first_operand_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i215);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i217);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i218);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i220);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i221);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i222);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\trc\t", 4);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i223);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i224);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i225);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i226);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("rc: invalid second operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("rc: invalid first operand", 25);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,35)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i231);
	}
	MR_r5 = MR_tfield(3, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i1215);
	}
	MR_r3 = (MR_Word) MR_string_const("\tret\t\t", 6);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,1215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_unsigned_int_size_3_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i235);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i237);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\tret\t", 5);
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i238);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(stream__string_writer__put_int_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i588);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("ret: check_unsigned_int_size failed", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,36)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i242);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i243);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i245);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i246);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i248);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i249);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i250);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i251);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tro", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i252);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i253);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i254);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i255);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("ro: invalid second operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("ro: invalid first operand", 25);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,37)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i260);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i261);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i263);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i264);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i266);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i267);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i268);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i269);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i270);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i271);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tsal\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("sal: invalid second operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("sal: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,39)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i276);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i277);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i279);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i280);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i282);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i283);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i284);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i285);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i286);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i287);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tsar\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("sar: invalid second operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("sar: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,40)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i292);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("sbb", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,41)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i295);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i296);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i298);
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
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("set: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,38)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i301);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i302);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i304);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i305);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i307);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i308);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i309);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i310);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i311);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i312);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshl\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shl: invalid second operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shl: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,42)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i317);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
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
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i324);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i326);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i327);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i328);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i329);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i330);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshld\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i331);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i332);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i333);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i334);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shld: invalid third operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shld: invalid second operand", 28);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shld: invalid first operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,43)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i340);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i341);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i343);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i344);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i346);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i347);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i348);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i349);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i350);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i351);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshr\t", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shr: invalid second operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shr: invalid first operand", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,44)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i356);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i357);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i359);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i360);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i362);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i363);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i365);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i366);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i367);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i368);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i369);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tshrd\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i370);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i371);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i372);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i373);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shrd: invalid third operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shrd: invalid second operand", 28);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shrd: invalid first operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,45)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i379);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("sub", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,46)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i382);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_mem_ref_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i383);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i385);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
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
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i390);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i391);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i392);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i393);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\ttest\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("test: invalid second operand", 28);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("test: invalid first operand", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,30)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i398);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("not", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,47)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i400);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_register_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i401);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i403);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_not_immediate_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i404);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i406);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i407);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i408);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,408)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i409);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i410);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i411);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\txadd\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,406)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("xadd: second operand is an immediate value", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("xadd: first operand is not a register", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,400)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,48)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i416);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i417);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i419);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__check_operand_reg_or_mem_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i420);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_inst_4_0_i419);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i423);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i424);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i425);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i426);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i427);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\txchg\t", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_inst_4_0_i428);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,428)
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
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_out", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("xchg: invalid second operand", 28);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_inst_4_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r5, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("xor", 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_instr_not_imm_dest_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__count_codepoints_1_0);
MR_decl_entry(string__split_by_codepoint_4_0);

MR_BEGIN_MODULE(ll_backend__x86_64_out_module27)
	MR_init_entry1(ll_backend__x86_64_out__output_x86_64_instr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0);
	MR_init_label10(ll_backend__x86_64_out__output_x86_64_instr_4_0,57,7,9,10,11,12,13,8,3,20)
	MR_init_label5(ll_backend__x86_64_out__output_x86_64_instr_4_0,23,22,28,29,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_x86_64_instr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_out__output_x86_64_instr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i3);
	}
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i62);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("\t# ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i7);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i9);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,68)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__split_by_codepoint_4_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i10);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i11);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,11)
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
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i12);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__x86_64_out__output_x86_64_instr_4_0_i13);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i57);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i29);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i20);
	}
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__x86_64_out__output_x86_64_pseudo_op_4_0);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(3, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__x86_64_out__output_x86_64_inst_4_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i23);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__x86_64_out__output_x86_64_instr_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__x86_64_out__output_x86_64_instr_4_0_i62);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i28);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__x86_64_out__output_x86_64_instr_4_0_i29);
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,29)
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
MR_def_label(ll_backend__x86_64_out__output_x86_64_instr_4_0,62)
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__x86_64_out__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__ll_backend__x86_64_out__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
