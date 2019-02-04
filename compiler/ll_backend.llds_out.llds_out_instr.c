/*
** Automatically generated from `llds_out_instr.m'
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
INIT mercury__ll_backend__llds_out__llds_out_instr__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_out.llds_out_instr.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "ll_backend.llds_out.llds_out_instr.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.llds_out.llds_out_instr.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.llds_out.llds_out_instr.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.llds_out.llds_out_instr.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ll_backend.llds_out.llds_out_instr.c"
#line 49 "ll_backend.llds_out.llds_out_instr.c"
#include "ll_backend.llds_out.llds_out_instr.mh"

#line 52 "ll_backend.llds_out.llds_out_instr.c"
#line 53 "ll_backend.llds_out.llds_out_instr.c"
#ifndef LL_BACKEND__LLDS_OUT__LLDS_OUT_INSTR_DECL_GUARD
#define LL_BACKEND__LLDS_OUT__LLDS_OUT_INSTR_DECL_GUARD

#line 57 "ll_backend.llds_out.llds_out_instr.c"
#line 58 "ll_backend.llds_out.llds_out_instr.c"

#endif
#line 61 "ll_backend.llds_out.llds_out_instr.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0;
MR_decl_label4(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0, 3,6,7,9)
MR_decl_label7(ll_backend__llds_out__llds_out_instr__output_block_start_4_0, 2,4,5,7,9,10,12)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0, 2,4,7,8,9,3,10,14,18,21)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0, 22,23,24,20,28,29,30,27,33,34)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0, 35,32,37,38,39,17,41,42,43,12)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0, 48,52,55,56,57,54,61,62,63,60)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0, 66,67,68,65,70,51,72,73,74,46)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_call_6_0, 77,79,80,81,84,119,86,87)
MR_decl_label5(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0, 42,4,8,12,44)
MR_decl_label3(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0, 2,4,5)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0, 2,4,5,10,17,20,21,9)
MR_decl_label1(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0, 2)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0, 10,13,34,22,23,21,25,26,27,28)
MR_decl_label9(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0, 35,66,4,5,6,7,8,62,61)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0, 28,6,7,8,9,5,11,12,13,14)
MR_decl_label2(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0, 15,30)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0, 2,5,6,4,10,11,15,12,17,9)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0, 29,27,31,33,34,35,36,37,24,39)
MR_decl_label6(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0, 40,41,42,43,44,45)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0, 41,7,9,11,23,6,13,14,5,43)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0, 84,5,6,9,10,8,14,15,19,16)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0, 24,25,21,13,31,33,34,35,30,37)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0, 38,39,40,41,42,43,45,87)
MR_decl_label4(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0, 4,5,6,15)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0, 30,4,6,8,9,10,11,12,13,14)
MR_decl_label4(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0, 17,18,19,32)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0, 15,4,5,6,7,8,9,17)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 94,172,21,20,24,25,26,18,32,31)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 35,36,37,29,42,41,45,46,47,16)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 50,173,6,5,9,10,11,97,87,175)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 64,65,66,67,68,55,56,57,58,59)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 60,53,71,73,174,77,78,80,82,90)
MR_decl_label1(ll_backend__llds_out__llds_out_instr__output_goto_5_0, 92)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 11,9,15,17,18,19,106,21,22,7)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 27,29,30,31,33,35,36,5,48,50)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 51,52,46,55,57,58,59,60,61,113)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 63,64,44,69,71,72,73,74,75,77)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 79,80,81,82,83,84,85,3,89,88)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0, 91,92,93,94,95,96,97,98)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 326,36,504,18,19,505,141,142,143,506)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 3,4,6,7,8,9,12,13,14,495)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 22,23,24,25,28,29,32,33,38,39)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 40,42,45,46,47,48,50,53,54,55)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 56,59,60,63,64,66,67,68,69,70)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 72,73,75,81,80,83,84,85,78,89)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 90,91,88,93,94,95,96,97,98,99)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 100,101,102,105,109,108,107,113,116,117)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 118,119,122,123,124,125,128,129,130,131)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 132,134,135,366,137,145,146,148,149,152)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 153,156,163,164,165,162,168,169,170,171)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 172,160,177,178,179,180,181,176,184,185)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 186,187,188,189,190,158,195,197,199,194)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 202,204,206,501,211,212,215,217,219,221)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 222,223,224,225,226,227,228,229,230,231)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 233,241,243,237,239,246,247,249,250,251)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 252,253,254,255,258,260,262,264,266,268)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 269,270,271,272,275,276,277,278,281,282)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 285,286,289,290,293,294,297,316,318,309)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0, 311,299,301,303,305,307,314,315,323,324)
MR_decl_label7(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0, 6,4,40,10,13,14,39)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0, 58,7,6,9,13,10,14,15,17,19)
MR_decl_label5(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0, 16,4,23,24,63)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0, 103,3,7,5,13,15,9,10,21,23)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0, 24,25,30,31,26,17,18,37,38,35)
MR_decl_label1(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0, 41)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0, 99,4,11,13,7,8,20,22,23,24)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0, 29,30,25,16,17,34,37,105)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0, 6,5,10,12,9,14,3,17,18,19)
MR_decl_label1(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0, 20)
MR_decl_label5(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0, 5,7,8,9,25)
MR_decl_label7(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0, 23,4,6,8,9,10,25)
MR_decl_label8(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0, 25,5,7,8,9,4,13,27)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0, 69,28,29,30,31,32,33,34,35,36)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0, 38,40,41,3,5,7,9,11,13,15)
MR_decl_label5(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0, 17,19,21,23,25)
MR_decl_label5(ll_backend__llds_out__llds_out_instr__output_livevals_4_0, 12,4,5,6,14)
MR_decl_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0, 4,7,21)
MR_decl_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0, 10,3,4)
MR_decl_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0, 10,3,4)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0, 176,7,16,183,25,180,181,31,32,117)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0, 34,33,175,118,37,38,184,46,177,50)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0, 178,55,179,68,70,71,72,66,74,75)
MR_decl_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0, 76,77,79,81,82,83,84,62,86,182)
MR_decl_label6(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0, 95,96,98,102,108,174)
MR_decl_label6(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0, 3,5,7,9,11,13)
MR_decl_label7(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0, 20,4,3,6,7,8,22)
MR_decl_static(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_livevals_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_block_start_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_block_end_2_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_call_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_goto_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0)
MR_decl_static(fn__ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_instruction_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0)
MR_def_extern_entry(__Unify___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0)
MR_decl_static(ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_string_const("DEBUG", 5)
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
	"not_after_layout_label",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
	"after_layout_label",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0,
	&mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1,
	&mercury_data_ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0
};

const MR_Integer mercury_data_ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0)),
	"ll_backend.llds_out.llds_out_instr",
	"after_layout_label",
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0 },
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0 },
	2,
	4,
	mercury_data_ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_instr",
"ll_backend.llds_out.llds_out_instr",
"output_foreign_proc_component",
4,
0
},
"ll_backend.llds_out.llds_out_instr",
"llds_out_instr.m",
889,
"d1;c6;d32;c5;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_instr",
"ll_backend.llds_out.llds_out_instr",
"output_foreign_proc_component",
4,
0
},
"ll_backend.llds_out.llds_out_instr",
"llds_out_instr.m",
879,
"d1;c6;d32;c5;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_instr",
"ll_backend.llds_out.llds_out_instr",
"lambda_llds_out_instr_m_370",
2,
0
},
"ll_backend.llds_out.llds_out_instr",
"llds_out_instr.m",
370,
"d2;c8;e;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_instr",
"ll_backend.llds_out.llds_out_instr",
"output_record_foreign_proc_component_decls",
6,
0
},
"ll_backend.llds_out.llds_out_instr",
"llds_out_instr.m",
229,
"d1;c7;d27;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_instr",
"ll_backend.llds_out.llds_out_instr",
"output_record_instruction_decls",
6,
0
},
"ll_backend.llds_out.llds_out_instr",
"llds_out_instr.m",
113,
"d1;c7;d12;c2;"
};



MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module0)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_instr__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds_out_instr.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_2);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module1)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,176,7,16,183,25,180,181,31,32,117)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,34,33,175,118,37,38,184,46,177,50)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,178,55,179,68,70,71,72,66,74,75)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,76,77,79,81,82,83,84,62,86,182)
	MR_init_label6(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,95,96,98,102,108,174)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_instr_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i176) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i177) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i178) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i179) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i180) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i181) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i182) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i98) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i183) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i184));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_set);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 3);
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_set);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i46);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i55);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 7);
	MR_sv(3) = MR_tfield(3, MR_r2, 8);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i32);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i34);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r5;
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i117);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i37);
	}
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i118);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i174);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i46);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i55);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i62);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i62);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i68);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i66);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" has been declared already", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i70);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i71);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i72);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i74);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i75);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i76);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i77);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i79);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i83);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i82);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i83);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i86);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i174);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	MR_sv(3) = MR_tfield(3, MR_r2, 5);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i95);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0_i96);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module2)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_instruction_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module3)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0);
	MR_init_label5(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,42,4,8,12,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_comment_chars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i44);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),42)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i8);
	}
	if (MR_INT_NE(MR_sv(1),47)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const(" /", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0_i42);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_lval_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module4)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_livevals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_livevals_4_0);
	MR_init_label5(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_livevals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_livevals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_livevals_4_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("*\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_livevals_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_livevals_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_livevals_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_livevals_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module5)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0);
	MR_init_label7(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,20,4,3,6,7,8,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_temp_decls_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i22);
	}
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_temp", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_temp", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module6)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_block_start_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_block_start_4_0);
	MR_init_label7(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,2,4,5,7,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_block_start'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_block_start_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("\tMR_Word ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("r", 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("\tMR_Float ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("f", 1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_0,
		ll_backend__llds_out__llds_out_instr__output_block_start_4_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module7)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_block_end_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_block_end_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_block_end'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_block_end_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t}\n", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0);
MR_decl_entry(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0);
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0);
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0);
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_label_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module8)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_call_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0,2,4,7,8,9,3,10,14,18,21)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0,22,23,24,20,28,29,30,27,33,34)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0,35,32,37,38,39,17,41,42,43,12)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0,48,52,55,56,57,54,61,62,63,60)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_call_6_0,66,67,68,65,70,51,72,73,74,46)
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_call_6_0,77,79,80,81,84,119,86,87)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_sv(2),3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i3);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_ho_caller_proc(", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_sv(1), 10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i12);
	}
	MR_sv(5) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i12);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i20);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_noprof_localcall(", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_np_localcall_ent(", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_np_localcall_lab(", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i34);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_np_localcall(", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i39);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_localcall(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i42);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i46);
	}
	MR_sv(5) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i48);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i46);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i51);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i52);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i54);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_noprof_call_localret(", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i55);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i56);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i57);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i60);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_np_call_localret_ent(", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i61);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i62);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i63);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i65);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_np_call_localret(", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i66);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i67);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i68);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i70);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_call: calling label", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_call_localret(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i72);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i73);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i74);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i77);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_noprof_call(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i79);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_call(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i79);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i80);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_call_6_0_i86);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i87);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_call_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_call_6_0_i119);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module9)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0);
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,25,5,7,8,9,4,13,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_layout_locns'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("offset ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" from ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const(" and ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module10)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0);
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,15,4,5,6,7,8,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_gc_livevals_params'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i17);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" - ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_layout_locns_4_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_inst_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module11)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,69,28,29,30,31,32,33,34,35,36)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,38,40,41,3,5,7,9,11,13,15)
	MR_init_label5(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,17,19,21,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_live_value_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i69);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i25));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_r1 = (MR_Word) MR_string_const("var(", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i32);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i34);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("ground", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_inst_4_0,
		ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type curfr", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type hp", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type maxfr", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type redofr", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type redoip", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type region commit", 18);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type region disj", 16);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type region ite", 15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type succip", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type ticket", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type trail_ptr", 14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unwanted", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module12)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,30,4,6,8,9,10,11,12,13,14)
	MR_init_label4(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,17,18,19,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_gc_livevals_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("*\t", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("offset ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" from ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_live_value_type_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module13)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0);
	MR_init_label4(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0,4,5,6,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_gc_livevals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("/*\n", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("* Garbage collection livevals info\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_0,
		ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("*/\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__name_mangle__output_proc_label_no_prefix_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module14)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_label_defn_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,6,5,10,12,9,14,3,17,18,19)
	MR_init_label1(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_defn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i3);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_def_local(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i9);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_define_entry(", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_def_static(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_def_label(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_defn_3_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(set_tree234__member_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module15)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0);
	MR_init_label4(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0,3,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_output_update_prof_counter'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__member_2_0,
		ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0_i9);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("\tMR_update_prof_current_proc(MR_LABEL_AP(", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("));\n", 4);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__name_mangle__output_proc_label_3_0);
MR_decl_entry(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module16)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_goto_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_goto_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0,94,172,21,20,24,25,26,18,32,31)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0,35,36,37,29,42,41,45,46,47,16)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0,50,173,6,5,9,10,11,97,87,175)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0,64,65,66,67,68,55,56,57,58,59)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_goto_5_0,60,53,71,73,174,77,78,80,82,90)
	MR_init_label1(ll_backend__llds_out__llds_out_instr__output_goto_5_0,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_goto'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_goto_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i94) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i172) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i173) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i97));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i80) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i71) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i92) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i90) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i174));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i16);
	}
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i18);
	}
	MR_tempr2 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i20);
	}
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_np_localtailcall(", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_localtailcall(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i31);
	}
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_np_tailcall_ent(", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i32);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_tailcall(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i41);
	}
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_np_tailcall_ent(", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i42);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_tailcall(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i46);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i47);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_GOTO_LAB(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i5);
	}
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_np_tailcall_ent(", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tailcall(MR_ENTRY(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("),\n\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i87);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_succeed();\n", 14);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_succeed_discard();\n", 22);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i55);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_ho_caller_proc(", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i64);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i65);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i66);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_np_tailcall_ent(do_call_closure_", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i67);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i68);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_ho_caller_proc(", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i56);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i57);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_np_tailcall_ent(do_call_class_method_", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i59);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i60);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_proceed();\n", 14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 16);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_GOTO(MR_ENTRY(MR_do_fail));\n", 31);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_fail();\n", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i77);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_goto_5_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 16);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_goto_5_0_i82);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_GOTO(MR_ENTRY(MR_do_redo));\n", 31);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_redo();\n", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n", 47);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_goto_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n", 50);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module17)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0);
	MR_init_label7(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,23,4,6,8,9,10,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_list_or_not_reached_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i25);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const(" MR_AND\n\t\t", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_ENTRY(MR_do_not_reached)", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL_AP(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module18)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0);
	MR_init_label5(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,5,7,8,9,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_list_or_not_reached'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_ENTRY(MR_do_not_reached)", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL_AP(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_tag_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_rval_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module19)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,11,9,15,17,18,19,106,21,22,7)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,27,29,30,31,33,35,36,5,48,50)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,51,52,46,55,57,58,59,60,61,113)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,63,64,44,69,71,72,73,74,75,77)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,79,80,81,82,83,84,85,3,89,88)
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,91,92,93,94,95,96,97,98)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_incr_hp_no_reuse'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 12);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i9);
	}
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_alloc_heap(", 14);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_alloc_heap_atomic(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_offset_incr_hp(", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("MR_offset_incr_hp_atomic(", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i21);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i106);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r9;
	MR_r1 = (MR_Word) MR_string_const("MR_offset_incr_hp_msg(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r9;
	MR_r1 = (MR_Word) MR_string_const("MR_offset_incr_hp_atomic_msg(", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("0, ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 12);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i44);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i46);
	}
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_alloc_heap(", 18);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_alloc_heap_atomic(", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i51);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i52);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i60);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i55);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_offset_incr_hp(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i57);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_offset_incr_hp_atomic(", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i57);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i59);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_tag_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i60);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i61);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i63);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i64);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i113);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i69);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_offset_incr_hp_msg(", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i71);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_offset_incr_hp_atomic_msg(", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i71);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i72);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i73);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_tag_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i74);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i75);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i77);
	}
	MR_r1 = (MR_Word) MR_string_const("0, ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i80);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i79);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i80);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i82);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i83);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i85);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\")", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i88);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r8, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_alloc_in_region(", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i89);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i94);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r8, 0);
	MR_sv(5) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_alloc_in_region(", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i91);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i92);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i93);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_tag_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i94);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i95);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i96);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i97);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module20)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0);
	MR_init_label1(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_embedded_frame_addr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0,
		ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 11;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module21)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_leaf_stack_frame_size'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 128;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module22)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0);
	MR_init_label6(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,3,5,7,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_reset_trail_reason'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0_i7));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_commit", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_exception", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_gc", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_retry", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_solve", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_undo", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module23)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,28,6,7,8,9,5,11,12,13,14)
	MR_init_label2(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,15,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_proc_decls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\tstruct ", 8);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t*", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(set_tree234__contains_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module24)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,58,7,6,9,13,10,14,15,17,19)
	MR_init_label5(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,16,4,23,24,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i63);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i4);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i10);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i10);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_dummy_function_call();\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__contains_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("\twhile (1) {\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_test_rval_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module25)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,103,3,7,5,13,15,9,10,21,23)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,24,25,30,31,26,17,18,37,38,35)
	MR_init_label1(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction_list_while'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("\tbreak; } /* end while */\n", 26);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("\tbreak; } /* end while */\n", 26);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,6)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(6), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("\t/* continue */ } /* end while */\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,9)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("\tif (", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_test_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n\t\tcontinue;\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 5);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i26);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("\t\t/* ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i103);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_block_end_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_0_i103);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module26)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,99,4,11,13,7,8,20,22,23,24)
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,29,30,25,16,17,34,37,105)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction_list_while_block'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i105);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("llds_out_instr.m", 16);
	MR_r2 = (MR_Word) MR_string_const("label in block", 14);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,6)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(5), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("\tcontinue;\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("llds_out_instr.m", 16);
	MR_r3 = (MR_Word) MR_string_const("output_instruction_list_while_block: code after goto", 52);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__expect_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,9)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("\tif (", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_test_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n\t\tcontinue;\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 5);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i25);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("\t\t/* ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i99);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("llds_out_instr.m", 16);
	MR_r2 = (MR_Word) MR_string_const("block in block", 14);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0_i99);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module27)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0);
	MR_init_label7(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,6,4,40,10,13,14,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction_and_comment'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i40);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i6);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_5_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("\t\t/* ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_0);
MR_decl_entry(fn__set_tree234__init_0_0);
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(ll_backend__layout_out__output_layout_slot_addr_5_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module28)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_instruction_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_instruction_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,326,36,504,18,19,505,141,142,143,506)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,3,4,6,7,8,9,12,13,14,495)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,22,23,24,25,28,29,32,33,38,39)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,40,42,45,46,47,48,50,53,54,55)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,56,59,60,63,64,66,67,68,69,70)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,72,73,75,81,80,83,84,85,78,89)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,90,91,88,93,94,95,96,97,98,99)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,100,101,102,105,109,108,107,113,116,117)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,118,119,122,123,124,125,128,129,130,131)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,132,134,135,366,137,145,146,148,149,152)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,153,156,163,164,165,162,168,169,170,171)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,172,160,177,178,179,180,181,176,184,185)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,186,187,188,189,190,158,195,197,199,194)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,202,204,206,501,211,212,215,217,219,221)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,222,223,224,225,226,227,228,229,230,231)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,233,241,243,237,239,246,247,249,250,251)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,252,253,254,255,258,260,262,264,266,268)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,269,270,271,272,275,276,277,278,281,282)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,285,286,289,290,293,294,297,316,318,309)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,311,299,301,303,305,307,314,315,323,324)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_instruction_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i326) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i504) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i505) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i506));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("\tMR_prune_ticket();\n", 20);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tMR_discard_ticket();\n", 22);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("/*", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 42;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_comment_chars_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i143);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("/*\n* Live lvalues:\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i141);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i142);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_livevals_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i143);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("*/\n", 3);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i128) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i145) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i156) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i134) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i289) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i285) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i281) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i215) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i233) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i258) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i297) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i293) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i275) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i152) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i211) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i105) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i116) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i122));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i132);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_block_start_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_list_7_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i495);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_block_end_2_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_COMPUTED_GOTO(", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 8;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_decr_sp(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_decr_sp_and_return(", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 8);
	MR_r1 = (MR_Word) MR_string_const("\t{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i39);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i70);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#define MR_HASH_DEF_LABEL_LAYOUT ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i46);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_slot_addr_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i47);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i48);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#undef MR_HASH_DEF_LABEL_LAYOUT\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i70);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_fork_new_child(", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i54);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i55);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i56);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_free_heap(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i60);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 11;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i64);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_goto_5_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("\tif (", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i67);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_test_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i68);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n\t\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i69);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_goto_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i70);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t}\n", 3);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(7) = MR_tfield(3, MR_r2, 6);
	MR_sv(8) = MR_tfield(3, MR_r2, 7);
	MR_sv(9) = MR_tfield(3, MR_r2, 8);
	MR_sv(12) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i73);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i75);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i132);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i78);
	}
	MR_r3 = MR_tfield(1, MR_sv(9), 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i80);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(9), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_reuse_or_alloc_heap(", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_tfield(1, MR_sv(9), 0);
	MR_sv(10) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_reuse_or_alloc_heap_flag(", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i83);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i85);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(9), 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i88);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(9), 0);
	MR_sv(10) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_reuse_or_alloc_heap(", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i89);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i90);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i91);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_tag_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_tfield(1, MR_sv(9), 0);
	MR_sv(10) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(11) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_tag_reuse_or_alloc_heap_flag(", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i93);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i94);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i95);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_tag_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i96);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i97);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i99);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i100);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i101);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_incr_hp_no_reuse_11_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i102);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i132);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 3);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i107);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i109);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i108);
	}
	MR_r1 = (MR_Word) MR_string_const("\tMR_incr_sp_leaf(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i113);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tMR_incr_sp(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i113);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_incr_sp(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i113);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_init_sync_term(", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i117);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i118);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i119);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_join_and_continue(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i123);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i124);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i125);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i129);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i130);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i131);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i132);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_label_defn_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i135);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 9);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i137);
	}
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i366);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_call_6_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i146);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mark_hp(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i149);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mark_ticket_stack(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i153);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i158);
	}
	MR_r5 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i160);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i162);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mkframe_no_redoip(\"", 23);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i163);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i164);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i165);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_r5, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mkpragmaframe_no_redoip(\"", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i168);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i169);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i170);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i171);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i172);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r6 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i176);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mkframe(\"", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i177);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i178);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i179);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i180);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i181);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_r6, 0), 0);
	MR_sv(4) = MR_tfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mkpragmaframe(\"", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i184);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i185);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i186);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i187);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i188);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i189);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i190);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i194);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mkdettempframe(", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i195);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i197);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i199);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_instruction: no failcont", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i501);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_mktempframe(", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i202);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i204);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_instr__this_file_0_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i206);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_instruction: no failcont", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i501);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,501)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_prune_tickets_to(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i212);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i217);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_push_region_commit_frame", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i221);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i219);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_push_region_disj_frame", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i221);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_push_region_ite_frame", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i221);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i222);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i223);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i224);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i225);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i226);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" */", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i227);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i228);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i229);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" /* ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i230);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i231);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i241);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i239);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i237);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_commit", 22);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i243);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_ite_snapshot_not_removed", 40);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_ite_snapshot_removed", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_disj_snapshot", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_ite_protect", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_fill_semi_disj_protect", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i247);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i249);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i250);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i251);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i252);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i253);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i254);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i255);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i266) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i268) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i262) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i264) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i260));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_set_commit_num_entries", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i269);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_set_disj_num_protects", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i269);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_set_disj_num_snapshots", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i269);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_set_ite_num_protects", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i269);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_region_set_ite_num_snapshots", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i269);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i270);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i271);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i272);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_reset_ticket(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i276);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i277);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i278);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_restore_hp(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i282);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_restore_maxfr(", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i286);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_save_maxfr(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i290);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\tMR_store_ticket(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i294);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i309);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i316);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i314) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i305) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i303) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i307) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i301) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i299));
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i318);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_ite_then_nondet", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_ite_then_semidet", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i311);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_ite_else_nondet", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_ite_else_semidet", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_commit_failure", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_commit_success", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_disj_last", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_disj_later", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_disj_nonlast_semi_commit", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_use_region_ite_nondet_cond_fail", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i315);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i323);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_0,
		ll_backend__llds_out__llds_out_instr__output_instruction_5_0_i324);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module29)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0);
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,2,4,5,10,17,20,21,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_debug_instruction_and_comment'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_tempr3;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_string_const("DEBUG", 5);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tempr4 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr4, 5);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i10);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i9);
	}
	if (MR_PTAG_TEST(MR_sv(2),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i9);
	}
	MR_r1 = MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_5_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_instruction_5_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("\t\t/* ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module30)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0);
	MR_init_label3(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_debug_instruction'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_string_const("DEBUG", 5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_instruction_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module31)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0);
	MR_init_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_foreign_proc_input_rval_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module32)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0);
	MR_init_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_foreign_proc_output_lval_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_0,
		ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module33)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0);
	MR_init_label3(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0,4,7,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_foreign_proc_component_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0_i21));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_0);
MR_decl_entry(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module34)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,2,5,6,4,10,11,15,12,17,9)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,29,27,31,33,34,35,36,37,24,39)
	MR_init_label6(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,40,41,42,43,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_proc_input'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_sv(5) = MR_tfield(0, MR_r2, 5);
	MR_sv(6) = MR_tfield(0, MR_r2, 6);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(3), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i12);
	}
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(3), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i24);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i34);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("MR_MAYBE_UNBOX_FOREIGN_TYPE(", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i39);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i42);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i44);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module35)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,41,7,9,11,23,6,13,14,5,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_proc_inputs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i5);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i6);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i6);
	}
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" = 0;\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module36)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,84,5,6,9,10,8,14,15,19,16)
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,24,25,21,13,31,33,34,35,30,37)
	MR_init_label8(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,38,39,40,41,42,43,45,87)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_proc_outputs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i87);
	}
	MR_r5 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r5, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(8);
	continue;
	}
	break; } /* end while */
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(4), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i16);
	}
	MR_r1 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(4), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_float_to_word(", 17);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(6), 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i34);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_MAYBE_BOX_FOREIGN_TYPE(", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i37);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i39);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i41);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_lval_as_word_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i42);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i43);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module37)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,10,13,34,22,23,21,25,26,27,28)
	MR_init_label9(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,35,66,4,5,6,7,8,62,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_proc_component'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i34));
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i35);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_r4 = MR_tfield(3, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i61);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";}\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i27);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";}\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i66);
	}
	MR_r1 = MR_tfield(3, MR_r2, 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(") MR_GOTO_LAB(", 14);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("if (!", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module38)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module39)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_instr_module40)
	MR_init_entry1(ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_instruction_list_while_block__370__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_out__llds_out_instr_maybe_bunch_0(void)
{
	ll_backend__llds_out__llds_out_instr_module0();
	ll_backend__llds_out__llds_out_instr_module1();
	ll_backend__llds_out__llds_out_instr_module2();
	ll_backend__llds_out__llds_out_instr_module3();
	ll_backend__llds_out__llds_out_instr_module4();
	ll_backend__llds_out__llds_out_instr_module5();
	ll_backend__llds_out__llds_out_instr_module6();
	ll_backend__llds_out__llds_out_instr_module7();
	ll_backend__llds_out__llds_out_instr_module8();
	ll_backend__llds_out__llds_out_instr_module9();
	ll_backend__llds_out__llds_out_instr_module10();
	ll_backend__llds_out__llds_out_instr_module11();
	ll_backend__llds_out__llds_out_instr_module12();
	ll_backend__llds_out__llds_out_instr_module13();
	ll_backend__llds_out__llds_out_instr_module14();
	ll_backend__llds_out__llds_out_instr_module15();
	ll_backend__llds_out__llds_out_instr_module16();
	ll_backend__llds_out__llds_out_instr_module17();
	ll_backend__llds_out__llds_out_instr_module18();
	ll_backend__llds_out__llds_out_instr_module19();
	ll_backend__llds_out__llds_out_instr_module20();
	ll_backend__llds_out__llds_out_instr_module21();
	ll_backend__llds_out__llds_out_instr_module22();
	ll_backend__llds_out__llds_out_instr_module23();
	ll_backend__llds_out__llds_out_instr_module24();
	ll_backend__llds_out__llds_out_instr_module25();
	ll_backend__llds_out__llds_out_instr_module26();
	ll_backend__llds_out__llds_out_instr_module27();
	ll_backend__llds_out__llds_out_instr_module28();
	ll_backend__llds_out__llds_out_instr_module29();
	ll_backend__llds_out__llds_out_instr_module30();
	ll_backend__llds_out__llds_out_instr_module31();
	ll_backend__llds_out__llds_out_instr_module32();
	ll_backend__llds_out__llds_out_instr_module33();
	ll_backend__llds_out__llds_out_instr_module34();
	ll_backend__llds_out__llds_out_instr_module35();
	ll_backend__llds_out__llds_out_instr_module36();
	ll_backend__llds_out__llds_out_instr_module37();
	ll_backend__llds_out__llds_out_instr_module38();
	ll_backend__llds_out__llds_out_instr_module39();
}

static void mercury__ll_backend__llds_out__llds_out_instr_maybe_bunch_1(void)
{
	ll_backend__llds_out__llds_out_instr_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_out__llds_out_instr__init(void);
void mercury__ll_backend__llds_out__llds_out_instr__init_type_tables(void);
void mercury__ll_backend__llds_out__llds_out_instr__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_out__llds_out_instr__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_out__llds_out_instr__init_complexity_procs(void);
#endif

void mercury__ll_backend__llds_out__llds_out_instr__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_out__llds_out_instr_maybe_bunch_0();
	mercury__ll_backend__llds_out__llds_out_instr_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0,
		ll_backend__llds_out__llds_out_instr__after_layout_label_0_0);
	mercury__ll_backend__llds_out__llds_out_instr__init_debugger();
}

void mercury__ll_backend__llds_out__llds_out_instr__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0);
	}
}


void mercury__ll_backend__llds_out__llds_out_instr__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_out__llds_out_instr__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_out__llds_out_instr);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__llds_out_instr__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
