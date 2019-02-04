/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__opt_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.opt_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.opt_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.opt_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.opt_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.opt_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.opt_util.c"
#line 49 "ll_backend.opt_util.c"
#include "ll_backend.opt_util.mh"

#line 52 "ll_backend.opt_util.c"
#line 53 "ll_backend.opt_util.c"
#ifndef LL_BACKEND__OPT_UTIL_DECL_GUARD
#define LL_BACKEND__OPT_UTIL_DECL_GUARD

#line 57 "ll_backend.opt_util.c"
#line 58 "ll_backend.opt_util.c"

#endif
#line 61 "ll_backend.opt_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0;
MR_decl_label4(ll_backend__opt_util__can_block_fall_through_2_0, 16,3,5,4)
MR_decl_label10(ll_backend__opt_util__can_use_livevals_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(ll_backend__opt_util__can_use_livevals_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(ll_backend__opt_util__can_use_livevals_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label4(ll_backend__opt_util__can_use_livevals_2_0, 33,34,35,220)
MR_decl_label4(ll_backend__opt_util__count_incr_hp_2_3_0, 7,3,5,2)
MR_decl_label6(ll_backend__opt_util__count_temps_components_5_0, 44,3,40,5,6,9)
MR_decl_label3(ll_backend__opt_util__count_temps_inputs_5_0, 10,3,4)
MR_decl_label10(ll_backend__opt_util__count_temps_instr_5_0, 3,4,5,6,7,8,11,12,14,15)
MR_decl_label10(ll_backend__opt_util__count_temps_instr_5_0, 16,18,20,22,23,26,27,98,29,28)
MR_decl_label10(ll_backend__opt_util__count_temps_instr_5_0, 355,99,32,33,25,37,38,40,42,45)
MR_decl_label10(ll_backend__opt_util__count_temps_instr_5_0, 46,48,52,51,55,54,57,58,60,62)
MR_decl_label10(ll_backend__opt_util__count_temps_instr_5_0, 63,65,67,68,66,70,72,74,76,78)
MR_decl_label1(ll_backend__opt_util__count_temps_instr_5_0, 317)
MR_decl_label3(ll_backend__opt_util__count_temps_instr_list_5_0, 10,3,4)
MR_decl_label10(ll_backend__opt_util__count_temps_lval_5_0, 3,4,6,5,8,9,10,11,12,14)
MR_decl_label10(ll_backend__opt_util__count_temps_lval_5_0, 15,16,18,20,22,23,24,25,27,28)
MR_decl_label4(ll_backend__opt_util__count_temps_lval_5_0, 33,32,34,30)
MR_decl_label3(ll_backend__opt_util__count_temps_mem_ref_5_0, 11,3,6)
MR_decl_label3(ll_backend__opt_util__count_temps_outputs_5_0, 10,3,4)
MR_decl_label8(ll_backend__opt_util__count_temps_rval_5_0, 41,4,3,6,7,9,11,13)
MR_decl_label4(ll_backend__opt_util__filter_in_livevals_2_0, 8,9,7,2)
MR_decl_label6(ll_backend__opt_util__filter_out_bad_livevals_2_0, 42,4,8,10,5,6)
MR_decl_label4(ll_backend__opt_util__filter_out_labels_2_0, 8,9,7,2)
MR_decl_label4(ll_backend__opt_util__filter_out_livevals_2_0, 8,9,7,2)
MR_decl_label5(ll_backend__opt_util__filter_out_r1_3_0, 13,14,4,12,2)
MR_decl_label2(ll_backend__opt_util__find_first_label_2_0, 4,3)
MR_decl_label4(ll_backend__opt_util__find_label_code_addrs_3_0, 8,3,6,2)
MR_decl_label4(ll_backend__opt_util__find_no_fallthrough_2_0, 28,5,4,8)
MR_decl_label9(ll_backend__opt_util__foreign_proc_labels_6_0, 3,2,6,5,9,8,12,11,14)
MR_decl_label2(ll_backend__opt_util__gather_comments_3_0, 5,2)
MR_decl_label3(ll_backend__opt_util__gather_comments_livevals_3_0, 5,7,2)
MR_decl_label4(ll_backend__opt_util__get_prologue_4_0, 2,6,7,3)
MR_decl_label2(ll_backend__opt_util__has_both_incr_decr_sp_1_0, 2,1)
MR_decl_label5(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0, 10,3,5,8,2)
MR_decl_label9(ll_backend__opt_util__instr_labels_3_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label10(ll_backend__opt_util__instr_labels_2_3_0, 3,4,5,7,9,8,11,12,14,13)
MR_decl_label10(ll_backend__opt_util__instr_labels_2_3_0, 15,17,18,20,22,23,24,25,27,28)
MR_decl_label10(ll_backend__opt_util__instr_labels_2_3_0, 29,30,31,33,35,36,39,40,43,41)
MR_decl_label10(ll_backend__opt_util__instr_labels_2_3_0, 45,46,47,48,49,50,51,52,53,54)
MR_decl_label1(ll_backend__opt_util__instr_labels_2_3_0, 55)
MR_decl_label5(ll_backend__opt_util__instr_list_labels_3_0, 18,4,5,6,7)
MR_decl_label9(ll_backend__opt_util__is_const_condition_2_0, 5,3,8,67,65,17,19,2,1)
MR_decl_label10(ll_backend__opt_util__is_forkproceed_next_3_0, 2,11,13,16,17,19,21,22,24,25)
MR_decl_label10(ll_backend__opt_util__is_forkproceed_next_3_0, 4,35,37,40,41,43,45,46,48,49)
MR_decl_label1(ll_backend__opt_util__is_forkproceed_next_3_0, 1)
MR_decl_label7(ll_backend__opt_util__is_proceed_next_2_0, 2,4,12,14,19,22,1)
MR_decl_label9(ll_backend__opt_util__is_sdproceed_next_sf_3_0, 2,4,12,14,19,27,29,32,1)
MR_decl_label3(ll_backend__opt_util__is_succeed_next_2_0, 2,5,1)
MR_decl_label6(ll_backend__opt_util__is_this_label_next_3_0, 45,3,7,14,12,1)
MR_decl_label10(ll_backend__opt_util__lval_access_rvals_2_0, 3,4,5,8,9,10,11,12,14,15)
MR_decl_label10(ll_backend__opt_util__lval_access_rvals_2_0, 16,18,20,22,23,24,25,27,28,30)
MR_decl_label3(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0, 2,4,1)
MR_decl_label10(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0, 125,3,8,10,12,14,17,19,16,22)
MR_decl_label8(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0, 24,26,28,30,32,34,36,1)
MR_decl_label9(ll_backend__opt_util__next_assign_to_redoip_6_0, 64,10,12,3,4,13,33,15,17)
MR_decl_label2(ll_backend__opt_util__no_stack_straight_line_3_0, 2,3)
MR_decl_label9(ll_backend__opt_util__no_stack_straight_line_2_4_0, 54,3,7,8,10,12,6,4,5)
MR_decl_label10(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 235,5,4,9,8,16,13,14,25,20)
MR_decl_label10(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 21,28,30,32,12,37,39,41,45,43)
MR_decl_label6(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 48,49,52,53,55,1)
MR_decl_label10(ll_backend__opt_util__possible_targets_3_0, 3,5,4,8,7,9,15,21,23,26)
MR_decl_label2(ll_backend__opt_util__possible_targets_3_0, 25,31)
MR_decl_label4(ll_backend__opt_util__possible_targets_maybe_labels_3_0, 7,4,3,2)
MR_decl_label3(ll_backend__opt_util__propagate_livevals_2_0, 2,3,4)
MR_decl_label8(ll_backend__opt_util__propagate_livevals_2_3_0, 49,6,4,9,13,15,12,19)
MR_decl_label4(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0, 4,6,8,15)
MR_decl_label3(ll_backend__opt_util__replace_labels_code_addr_3_0, 5,4,21)
MR_decl_label5(ll_backend__opt_util__replace_labels_comps_3_0, 35,7,6,5,11)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 6,3,11,12,8,15,14,19,20,21)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 17,25,26,24,31,29,36,34,40,41)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 39,45,47,49,23,52,53,51,58,55)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 61,60,65,66,67,63,72,73,75,76)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 74,79,81,83,86,69,93,90,96,97)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 95,102,103,99,107,106,105,112,111,115)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 116,114,119,120,121,118,124,125,126,123)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 129,128,134,131,139,136,614,147,141,153)
MR_decl_label10(ll_backend__opt_util__replace_labels_instr_4_0, 150,159,160,161,156,166,163,171,168,176)
MR_decl_label7(ll_backend__opt_util__replace_labels_instr_4_0, 173,181,178,186,183,191,592)
MR_decl_label1(ll_backend__opt_util__replace_labels_instruction_4_0, 2)
MR_decl_label6(ll_backend__opt_util__replace_labels_instruction_list_5_0, 46,8,7,4,13,16)
MR_decl_label2(ll_backend__opt_util__replace_labels_label_3_0, 3,2)
MR_decl_label10(ll_backend__opt_util__replace_labels_lval_3_0, 4,5,3,8,7,11,10,14,13,17)
MR_decl_label5(ll_backend__opt_util__replace_labels_lval_3_0, 16,20,19,23,61)
MR_decl_label5(ll_backend__opt_util__replace_labels_maybe_label_list_3_0, 35,5,7,6,11)
MR_decl_label3(ll_backend__opt_util__replace_labels_mem_ref_3_0, 4,5,13)
MR_decl_label10(ll_backend__opt_util__replace_labels_rval_3_0, 4,3,7,6,11,12,10,17,58,21)
MR_decl_label3(ll_backend__opt_util__replace_labels_rval_3_0, 20,23,56)
MR_decl_label10(ll_backend__opt_util__rval_free_of_lval_2_0, 62,4,3,12,14,9,17,35,20,1)
MR_decl_label4(ll_backend__opt_util__rvals_free_of_lval_2_0, 17,4,2,1)
MR_decl_label1(ll_backend__opt_util__skip_comments_2_0, 19)
MR_decl_label2(ll_backend__opt_util__skip_comments_labels_2_0, 2,34)
MR_decl_label2(ll_backend__opt_util__skip_comments_livevals_2_0, 2,34)
MR_decl_label3(ll_backend__opt_util__skip_comments_livevals_labels_2_0, 2,6,49)
MR_decl_label3(ll_backend__opt_util__skip_to_next_label_3_0, 26,4,6)
MR_decl_label3(ll_backend__opt_util__straight_alternative_3_0, 2,4,1)
MR_decl_label9(ll_backend__opt_util__straight_alternative_2_4_0, 63,25,3,5,11,13,10,17,9)
MR_decl_label6(fn__ll_backend__opt_util__block_refers_to_stack_1_0, 24,3,4,7,9,6)
MR_decl_label7(fn__ll_backend__opt_util__can_components_branch_away_1_0, 3,5,7,9,23,11,13)
MR_decl_label2(fn__ll_backend__opt_util__can_instr_branch_away_1_0, 3,5)
MR_decl_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0, 3,4,5,6,7,8,9,11,12,13)
MR_decl_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label4(fn__ll_backend__opt_util__can_instr_fall_through_1_0, 34,35,36,37)
MR_decl_label10(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0, 3,4,5,6,7,18,8,9,10,11)
MR_decl_label3(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0, 3,25,7)
MR_decl_label1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0, 3)
MR_decl_label1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0, 3)
MR_decl_label10(fn__ll_backend__opt_util__format_proc_label_1_0, 4,5,6,7,8,3,10,11,12,13)
MR_decl_label4(fn__ll_backend__opt_util__format_proc_label_1_0, 14,15,16,19)
MR_decl_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 3,7,9,208,11,15,17,20,19,24)
MR_decl_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 25,26,29,27,33,34,37,23,40,39)
MR_decl_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 43,46,47,45,49,51,53,55,57,59)
MR_decl_label4(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 61,63,65,223)
MR_decl_label9(fn__ll_backend__opt_util__livevals_addr_1_0, 3,4,5,6,7,20,8,9,42)
MR_decl_label10(fn__ll_backend__opt_util__lval_refers_stackvars_1_0, 3,4,6,7,5,9,10,11,12,13)
MR_decl_label10(fn__ll_backend__opt_util__lval_refers_stackvars_1_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label2(fn__ll_backend__opt_util__lval_refers_stackvars_1_0, 25,26)
MR_decl_label4(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0, 10,3,5,6)
MR_decl_label9(fn__ll_backend__opt_util__rval_refers_stackvars_1_0, 42,4,5,3,7,8,10,12,14)
MR_decl_label5(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0, 24,3,6,7,4)
MR_decl_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0, 15,3,4,18)
MR_decl_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0, 38,5,6,7,8,9,10,11)
MR_decl_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 3,4,8,9,11,14,15,16,19,17)
MR_decl_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 23,24,27,13,29,33,35,40,39,44)
MR_decl_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 45,43,47,49,51,54,55,56,57,53)
MR_decl_label5(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 59,61,63,65,196)
MR_decl_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0, 3,4,5,6,7,8,9,10,11,13)
MR_decl_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0, 14,12,16,17,18,19,21,22,23,84)
MR_decl_label1(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0, 24)
MR_decl_label2(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0, 8,3)
MR_decl_label9(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0, 41,3,5,7,9,10,8,12,13)
MR_def_extern_entry(ll_backend__opt_util__gather_comments_3_0)
MR_def_extern_entry(ll_backend__opt_util__get_prologue_4_0)
MR_def_extern_entry(ll_backend__opt_util__gather_comments_livevals_3_0)
MR_def_extern_entry(ll_backend__opt_util__skip_comments_2_0)
MR_def_extern_entry(ll_backend__opt_util__skip_comments_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__skip_comments_labels_2_0)
MR_def_extern_entry(ll_backend__opt_util__skip_comments_livevals_labels_2_0)
MR_decl_static(fn__ll_backend__opt_util__can_components_branch_away_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__can_instr_branch_away_1_0)
MR_def_extern_entry(ll_backend__opt_util__next_assign_to_redoip_6_0)
MR_decl_static(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0)
MR_decl_static(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0)
MR_decl_static(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0)
MR_decl_static(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0)
MR_decl_static(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0)
MR_decl_static(ll_backend__opt_util__can_block_fall_through_2_0)
MR_def_extern_entry(ll_backend__opt_util__find_no_fallthrough_2_0)
MR_def_extern_entry(ll_backend__opt_util__find_first_label_2_0)
MR_def_extern_entry(ll_backend__opt_util__skip_to_next_label_3_0)
MR_def_extern_entry(ll_backend__opt_util__is_this_label_next_3_0)
MR_def_extern_entry(ll_backend__opt_util__is_proceed_next_2_0)
MR_def_extern_entry(ll_backend__opt_util__is_sdproceed_next_sf_3_0)
MR_def_extern_entry(ll_backend__opt_util__is_sdproceed_next_2_0)
MR_def_extern_entry(ll_backend__opt_util__is_succeed_next_2_0)
MR_def_extern_entry(ll_backend__opt_util__filter_out_r1_3_0)
MR_def_extern_entry(ll_backend__opt_util__filter_out_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__is_forkproceed_next_3_0)
MR_decl_static(ll_backend__opt_util__straight_alternative_2_4_0)
MR_def_extern_entry(ll_backend__opt_util__straight_alternative_3_0)
MR_def_extern_entry(fn__ll_backend__opt_util__lval_refers_stackvars_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__rval_refers_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0)
MR_decl_static(ll_backend__opt_util__no_stack_straight_line_2_4_0)
MR_def_extern_entry(ll_backend__opt_util__no_stack_straight_line_3_0)
MR_decl_static(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0)
MR_def_extern_entry(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0)
MR_def_extern_entry(ll_backend__opt_util__filter_out_labels_2_0)
MR_decl_static(ll_backend__opt_util__can_use_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__filter_out_bad_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__filter_in_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__is_const_condition_2_0)
MR_def_extern_entry(fn__ll_backend__opt_util__livevals_addr_1_0)
MR_decl_static(ll_backend__opt_util__possible_targets_maybe_labels_3_0)
MR_decl_static(ll_backend__opt_util__foreign_proc_labels_6_0)
MR_decl_static(ll_backend__opt_util__find_label_code_addrs_3_0)
MR_def_extern_entry(ll_backend__opt_util__instr_labels_3_0)
MR_decl_static(ll_backend__opt_util__instr_labels_2_3_0)
MR_decl_static(ll_backend__opt_util__instr_list_labels_3_0)
MR_def_extern_entry(ll_backend__opt_util__instr_labels_only_2_0)
MR_def_extern_entry(ll_backend__opt_util__possible_targets_3_0)
MR_decl_static(ll_backend__opt_util__count_temps_lval_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_rval_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_mem_ref_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_inputs_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_outputs_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_components_5_0)
MR_def_extern_entry(ll_backend__opt_util__count_temps_instr_5_0)
MR_def_extern_entry(ll_backend__opt_util__count_temps_instr_list_5_0)
MR_def_extern_entry(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__instr_refers_to_stack_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__block_refers_to_stack_1_0)
MR_def_extern_entry(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0)
MR_def_extern_entry(fn__ll_backend__opt_util__format_proc_label_1_0)
MR_def_extern_entry(fn__ll_backend__opt_util__format_label_1_0)
MR_decl_static(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0)
MR_def_extern_entry(ll_backend__opt_util__has_both_incr_decr_sp_1_0)
MR_def_extern_entry(ll_backend__opt_util__lval_access_rvals_2_0)
MR_def_extern_entry(ll_backend__opt_util__rval_free_of_lval_2_0)
MR_def_extern_entry(ll_backend__opt_util__rvals_free_of_lval_2_0)
MR_decl_static(ll_backend__opt_util__count_incr_hp_2_3_0)
MR_def_extern_entry(ll_backend__opt_util__count_incr_hp_2_0)
MR_decl_static(ll_backend__opt_util__propagate_livevals_2_3_0)
MR_def_extern_entry(ll_backend__opt_util__propagate_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_label_3_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_comps_3_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_code_addr_3_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_maybe_label_list_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_lval_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_rval_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_mem_ref_3_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instr_4_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instruction_4_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instruction_list_5_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0)
MR_decl_static(ll_backend__opt_util__replace_labels_lval_map_3_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__instrmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__instrmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__lvalmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__lvalmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__succmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__succmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__tailmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__tailmap_0_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2398__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2407__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2416__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2435__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_const_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, rval_const)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_string_const("no succip restoration", 21)
},
{
MR_string_const("no sp restoration", 17)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_TAG_COMMON(1,2,0),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,2,1),
MR_string_const("", 0)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__instr_refers_to_stack_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;
static const struct mercury_type_5 mercury_common_5[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_util__instr_refers_to_stack_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output),
MR_BOOL_CTOR_ADDR
},
};

static const struct mercury_type_6 mercury_common_6[3] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__opt_util__instrmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__opt_util__instrmap_0_0)),
	"ll_backend.opt_util",
	"instrmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__opt_util__lvalmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__opt_util__lvalmap_0_0)),
	"ll_backend.opt_util",
	"lvalmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__opt_util__succmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__opt_util__succmap_0_0)),
	"ll_backend.opt_util",
	"succmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__opt_util__tailmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__opt_util__tailmap_0_0)),
	"ll_backend.opt_util",
	"tailmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_2 = {
{
MR_FUNCTION,
"ll_backend.opt_util",
"ll_backend.opt_util",
"foreign_proc_output_refers_stackvars",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
974,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_1 = {
{
MR_FUNCTION,
"ll_backend.opt_util",
"ll_backend.opt_util",
"foreign_proc_input_refers_stackvars",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
970,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_4 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2435",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2435,
"319"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2416",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2416,
"299"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2407",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2407,
"289"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2398",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2398,
"279"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2522",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2522,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"replace_labels_lval_map",
3,
0
},
"ll_backend.opt_util",
"opt_util.m",
2520,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__instr_refers_to_stack_1_0_1 = {
{
MR_FUNCTION,
"ll_backend.opt_util",
"ll_backend.opt_util",
"foreign_proc_component_refers_stackvars",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
956,
"102"
};



MR_BEGIN_MODULE(ll_backend__opt_util_module0)
	MR_init_entry1(ll_backend__opt_util__gather_comments_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__gather_comments_3_0);
	MR_init_label2(ll_backend__opt_util__gather_comments_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_comments'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__gather_comments_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_3_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__opt_util__gather_comments_3_0_i5);
MR_def_label(ll_backend__opt_util__gather_comments_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__opt_util__gather_comments_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module1)
	MR_init_entry1(ll_backend__opt_util__get_prologue_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__get_prologue_4_0);
	MR_init_label4(ll_backend__opt_util__get_prologue_4_0,2,6,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_prologue'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__get_prologue_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__opt_util__get_prologue_4_0_i2);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__get_prologue_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__get_prologue_4_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__opt_util__get_prologue_4_0_i6);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__get_prologue_4_0_i7);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__opt_util__get_prologue_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.get_prologue\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("procedure does not begin with label", 35);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module2)
	MR_init_entry1(ll_backend__opt_util__gather_comments_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__gather_comments_livevals_3_0);
	MR_init_label3(ll_backend__opt_util__gather_comments_livevals_3_0,5,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_comments_livevals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__gather_comments_livevals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__gather_comments_livevals_3_0,
		ll_backend__opt_util__gather_comments_livevals_3_0_i7);
MR_def_label(ll_backend__opt_util__gather_comments_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__gather_comments_livevals_3_0,
		ll_backend__opt_util__gather_comments_livevals_3_0_i7);
MR_def_label(ll_backend__opt_util__gather_comments_livevals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__opt_util__gather_comments_livevals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module3)
	MR_init_entry1(ll_backend__opt_util__skip_comments_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__skip_comments_2_0);
	MR_init_label1(ll_backend__opt_util__skip_comments_2_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_comments'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_2_0_i19);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_2_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module4)
	MR_init_entry1(ll_backend__opt_util__skip_comments_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__skip_comments_livevals_2_0);
	MR_init_label2(ll_backend__opt_util__skip_comments_livevals_2_0,2,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_comments_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__skip_comments_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i34);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i34);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_livevals_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module5)
	MR_init_entry1(ll_backend__opt_util__skip_comments_labels_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__skip_comments_labels_2_0);
	MR_init_label2(ll_backend__opt_util__skip_comments_labels_2_0,2,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_comments_labels'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_labels_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_labels_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i34);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i34);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_labels_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_labels_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module6)
	MR_init_entry1(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	MR_init_label3(ll_backend__opt_util__skip_comments_livevals_labels_2_0,2,6,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_comments_livevals_labels'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i6);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i49);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i49);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module7)
	MR_init_entry1(fn__ll_backend__opt_util__can_components_branch_away_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__can_components_branch_away_1_0);
	MR_init_label7(fn__ll_backend__opt_util__can_components_branch_away_1_0,3,5,7,9,23,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_components_branch_away'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__can_components_branch_away_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i11);
	}
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module8)
	MR_init_entry1(fn__ll_backend__opt_util__can_instr_branch_away_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__can_instr_branch_away_1_0);
	MR_init_label2(fn__ll_backend__opt_util__can_instr_branch_away_1_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_instr_branch_away'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__can_instr_branch_away_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 26))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 30))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 33))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))))) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module9)
	MR_init_entry1(ll_backend__opt_util__next_assign_to_redoip_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__next_assign_to_redoip_6_0);
	MR_init_label9(ll_backend__opt_util__next_assign_to_redoip_6_0,64,10,12,3,4,13,33,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'next_assign_to_redoip'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__next_assign_to_redoip_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr4,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i10);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i3);
	}
	MR_sv(4) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i12);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i13);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i15);
	}
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i17);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i64);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module10)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
	MR_init_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,3,4,5,6,7,8,9,10,11,13)
	MR_init_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,14,12,16,17,18,19,21,22,23,84)
	MR_init_label1(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i12);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i13);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i14);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i19);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i24);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i84);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module11)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
	MR_init_label9(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,41,3,5,7,9,10,8,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl_rval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i41);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i8);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i9);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i10);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i41);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module12)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0);
	MR_init_label2(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl_mem_ref'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0_i3);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module13)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0);
	MR_init_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,38,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl_components'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i38);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module14)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0);
	MR_init_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,3,4,8,9,11,14,15,16,19,17)
	MR_init_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,23,24,27,13,29,33,35,40,39,44)
	MR_init_label10(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,45,43,47,49,51,54,55,56,57,53)
	MR_init_label5(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,59,61,63,65,196)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl_instr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 8)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 29))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 28))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 30))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 11))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 10))))) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i44);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 1)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 25))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 26))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 24))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 16))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 19))))) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i11);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 7);
	MR_sv(2) = MR_tfield(3, MR_r1, 8);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i14);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i15);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i16);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i17);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i19);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bool__or_3_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i17);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i196);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i23);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(bool__or_3_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i196);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i27);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i29);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i44);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i35);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i40);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i40);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i45);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i43);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i44);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i45);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bool__or_3_0);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i47);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i49);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i51);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i53);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i54);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i55);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i56);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i57);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i59);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i61);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i63);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i65);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.opt_util.touches_nondet_ctrl_instr\'/1", 58);
	MR_r3 = (MR_Word) MR_string_const("block", 5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module15)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
	MR_init_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,15,3,4,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'touches_nondet_ctrl'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i15);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module16)
	MR_init_entry1(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__can_instr_fall_through_1_0);
	MR_init_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0,3,4,5,6,7,8,9,11,12,13)
	MR_init_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label10(fn__ll_backend__opt_util__can_instr_fall_through_1_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label4(fn__ll_backend__opt_util__can_instr_fall_through_1_0,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_instr_fall_through'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__can_instr_fall_through_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__can_block_fall_through_2_0);
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module17)
	MR_init_entry1(ll_backend__opt_util__can_block_fall_through_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__can_block_fall_through_2_0);
	MR_init_label4(ll_backend__opt_util__can_block_fall_through_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_block_fall_through'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__can_block_fall_through_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__can_block_fall_through_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_block_fall_through_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__can_block_fall_through_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__opt_util__can_block_fall_through_2_0_i5);
MR_def_label(ll_backend__opt_util__can_block_fall_through_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_block_fall_through_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__can_block_fall_through_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__can_block_fall_through_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module18)
	MR_init_entry1(ll_backend__opt_util__find_no_fallthrough_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__find_no_fallthrough_2_0);
	MR_init_label4(ll_backend__opt_util__find_no_fallthrough_2_0,28,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_no_fallthrough'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__find_no_fallthrough_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_no_fallthrough_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__opt_util__find_no_fallthrough_2_0_i5);
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_no_fallthrough_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__opt_util__find_no_fallthrough_2_0,
		ll_backend__opt_util__find_no_fallthrough_2_0_i8);
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module19)
	MR_init_entry1(ll_backend__opt_util__find_first_label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__find_first_label_2_0);
	MR_init_label2(ll_backend__opt_util__find_first_label_2_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_first_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__find_first_label_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_first_label_2_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_first_label_2_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__find_first_label_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localtailcall(ll_backend__opt_util__find_first_label_2_0);
MR_def_label(ll_backend__opt_util__find_first_label_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.find_first_label\'/2", 50);
	MR_r3 = (MR_Word) MR_string_const("cannot find first label", 23);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module20)
	MR_init_entry1(ll_backend__opt_util__skip_to_next_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__skip_to_next_label_3_0);
	MR_init_label3(ll_backend__opt_util__skip_to_next_label_3_0,26,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_to_next_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_to_next_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_to_next_label_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__skip_to_next_label_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_to_next_label_3_0_i4);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__skip_to_next_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(ll_backend__opt_util__skip_to_next_label_3_0,
		ll_backend__opt_util__skip_to_next_label_3_0_i6);
MR_def_label(ll_backend__opt_util__skip_to_next_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module21)
	MR_init_entry1(ll_backend__opt_util__is_this_label_next_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_this_label_next_3_0);
	MR_init_label6(ll_backend__opt_util__is_this_label_next_3_0,45,3,7,14,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_this_label_next'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_this_label_next_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i1);
	}
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i3);
	}
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(3);
	/* continue */
	} /* end while */
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i7);
	}
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i45);
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__opt_util__is_this_label_next_3_0_i14);
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i12);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i45);
	}
MR_def_label(ll_backend__opt_util__is_this_label_next_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module22)
	MR_init_entry1(ll_backend__opt_util__is_proceed_next_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_proceed_next_2_0);
	MR_init_label7(ll_backend__opt_util__is_proceed_next_2_0,2,4,12,14,19,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_proceed_next'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_proceed_next_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i2);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i12);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i14);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i19);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,1);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i22);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module23)
	MR_init_entry1(ll_backend__opt_util__is_sdproceed_next_sf_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_sdproceed_next_sf_3_0);
	MR_init_label9(ll_backend__opt_util__is_sdproceed_next_sf_3_0,2,4,12,14,19,27,29,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_sdproceed_next_sf'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_sdproceed_next_sf_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i2);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i12);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i14);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i19);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,1);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i27);
	}
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i29);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i29);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i32);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module24)
	MR_init_entry1(ll_backend__opt_util__is_sdproceed_next_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_sdproceed_next_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_sdproceed_next'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_sdproceed_next_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__opt_util__is_sdproceed_next_sf_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module25)
	MR_init_entry1(ll_backend__opt_util__is_succeed_next_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_succeed_next_2_0);
	MR_init_label3(ll_backend__opt_util__is_succeed_next_2_0,2,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_succeed_next'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_succeed_next_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_succeed_next_2_0_i2);
MR_def_label(ll_backend__opt_util__is_succeed_next_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_succeed_next_2_0_i5);
MR_def_label(ll_backend__opt_util__is_succeed_next_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__is_succeed_next_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module26)
	MR_init_entry1(ll_backend__opt_util__filter_out_r1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__filter_out_r1_3_0);
	MR_init_label5(ll_backend__opt_util__filter_out_r1_3_0,13,14,4,12,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_out_r1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_out_r1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i2);
	}
	MR_r6 = (MR_Word) MR_sp;
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i12);
	}
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i14);
	}
	MR_proceed();
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module27)
	MR_init_entry1(ll_backend__opt_util__filter_out_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__filter_out_livevals_2_0);
	MR_init_label4(ll_backend__opt_util__filter_out_livevals_2_0,8,9,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_out_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_out_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_livevals_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_livevals_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_livevals_2_0_i9);
	}
	MR_proceed();
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module28)
	MR_init_entry1(ll_backend__opt_util__is_forkproceed_next_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_forkproceed_next_3_0);
	MR_init_label10(ll_backend__opt_util__is_forkproceed_next_3_0,2,11,13,16,17,19,21,22,24,25)
	MR_init_label10(ll_backend__opt_util__is_forkproceed_next_3_0,4,35,37,40,41,43,45,46,48,49)
	MR_init_label1(ll_backend__opt_util__is_forkproceed_next_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_forkproceed_next'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_forkproceed_next_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i2);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i11);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_sf_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i13);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i16);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i17);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i19);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i21);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i22);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i24);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i25);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i35);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_sf_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i37);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i40);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i41);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i43);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i45);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i46);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i48);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i49);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module29)
	MR_init_entry1(ll_backend__opt_util__straight_alternative_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__straight_alternative_2_4_0);
	MR_init_label9(ll_backend__opt_util__straight_alternative_2_4_0,63,25,3,5,11,13,10,17,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'straight_alternative_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__straight_alternative_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i3);
	}
	}
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(3), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i5);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__opt_util__straight_alternative_2_4_0_i11);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,
		ll_backend__opt_util__straight_alternative_2_4_0_i13);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i9);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i25);
	}
	MR_r3 = MR_tfield(3, MR_sv(3), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i9);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i25);
	}
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i63);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module30)
	MR_init_entry1(ll_backend__opt_util__straight_alternative_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__straight_alternative_3_0);
	MR_init_label3(ll_backend__opt_util__straight_alternative_3_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'straight_alternative'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__straight_alternative_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__straight_alternative_2_4_0,
		ll_backend__opt_util__straight_alternative_3_0_i2);
MR_def_label(ll_backend__opt_util__straight_alternative_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_3_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__straight_alternative_3_0_i4);
MR_def_label(ll_backend__opt_util__straight_alternative_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__straight_alternative_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module31)
	MR_init_entry1(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	MR_init_label10(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,3,4,6,7,5,9,10,11,12,13)
	MR_init_label10(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label2(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lval_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i6);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.opt_util.lval_refers_stackvars\'/1", 54);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module32)
	MR_init_entry1(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	MR_init_label9(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,42,4,5,3,7,8,10,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i5);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i8);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i12);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i42);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i42);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.opt_util.rval_refers_stackvars\'/1", 54);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module33)
	MR_init_entry1(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0);
	MR_init_label4(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,10,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mem_ref_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i3);
	}
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i10);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i5);
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i6);
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module34)
	MR_init_entry1(ll_backend__opt_util__no_stack_straight_line_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__no_stack_straight_line_2_4_0);
	MR_init_label9(ll_backend__opt_util__no_stack_straight_line_2_4_0,54,3,7,8,10,12,6,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_stack_straight_line_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__no_stack_straight_line_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i6);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i6);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stack_straight_line_2_4_0_i10);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stack_straight_line_2_4_0_i12);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i4);
	}
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i54);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module35)
	MR_init_entry1(ll_backend__opt_util__no_stack_straight_line_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__no_stack_straight_line_3_0);
	MR_init_label2(ll_backend__opt_util__no_stack_straight_line_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_stack_straight_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__no_stack_straight_line_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stack_straight_line_2_4_0,
		ll_backend__opt_util__no_stack_straight_line_3_0_i2);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__no_stack_straight_line_3_0_i3);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module36)
	MR_init_entry1(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0);
	MR_init_label10(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,125,3,8,10,12,14,17,19,16,22)
	MR_init_label8(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,24,26,28,30,32,34,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'may_replace_succeed_with_succeed_discard_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i16);
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i17);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i19);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,15)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,13)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,22)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,23)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,21)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,14)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i125);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module37)
	MR_init_entry1(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
	MR_init_label3(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'may_replace_succeed_with_succeed_discard'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0_i2);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0_i4);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module38)
	MR_init_entry1(ll_backend__opt_util__filter_out_labels_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__filter_out_labels_2_0);
	MR_init_label4(ll_backend__opt_util__filter_out_labels_2_0,8,9,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_out_labels'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_out_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_labels_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TEST(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_labels_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_labels_2_0_i9);
	}
	MR_proceed();
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module39)
	MR_init_entry1(ll_backend__opt_util__can_use_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__can_use_livevals_2_0);
	MR_init_label10(ll_backend__opt_util__can_use_livevals_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(ll_backend__opt_util__can_use_livevals_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(ll_backend__opt_util__can_use_livevals_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label4(ll_backend__opt_util__can_use_livevals_2_0,33,34,35,220)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_use_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__can_use_livevals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i32);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__opt_util__can_use_livevals_2_0_i220);
	}
MR_def_label(ll_backend__opt_util__can_use_livevals_2_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module40)
	MR_init_entry1(ll_backend__opt_util__filter_out_bad_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__filter_out_bad_livevals_2_0);
	MR_init_label6(ll_backend__opt_util__filter_out_bad_livevals_2_0,42,4,8,10,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_out_bad_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_out_bad_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i42);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__filter_out_bad_livevals_2_0,
		ll_backend__opt_util__filter_out_bad_livevals_2_0_i4);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__opt_util__filter_out_bad_livevals_2_0_i8);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__can_use_livevals_2_0,
		ll_backend__opt_util__filter_out_bad_livevals_2_0_i10);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module41)
	MR_init_entry1(ll_backend__opt_util__filter_in_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__filter_in_livevals_2_0);
	MR_init_label4(ll_backend__opt_util__filter_in_livevals_2_0,8,9,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_in_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_in_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_in_livevals_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_in_livevals_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_in_livevals_2_0_i9);
	}
	MR_proceed();
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
MR_decl_entry(bool__not_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module42)
	MR_init_entry1(ll_backend__opt_util__is_const_condition_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__is_const_condition_2_0);
	MR_init_label9(ll_backend__opt_util__is_const_condition_2_0,5,3,8,67,65,17,19,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_const_condition'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_const_condition_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__opt_util__is_const_condition_2_0_i5);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i65);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i8);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i67);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.is_const_condition\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("non-boolean constant as if-then-else condition", 46);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__opt_util__is_const_condition_2_0_i2);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__is_const_condition_2_0,
		ll_backend__opt_util__is_const_condition_2_0_i17);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(bool__not_2_0,
		ll_backend__opt_util__is_const_condition_2_0_i19);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module43)
	MR_init_entry1(fn__ll_backend__opt_util__livevals_addr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__livevals_addr_1_0);
	MR_init_label9(fn__ll_backend__opt_util__livevals_addr_1_0,3,4,5,6,7,20,8,9,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livevals_addr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__livevals_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i8);
	}
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i42);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i20);
	}
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module44)
	MR_init_entry1(ll_backend__opt_util__possible_targets_maybe_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__possible_targets_maybe_labels_3_0);
	MR_init_label4(ll_backend__opt_util__possible_targets_maybe_labels_3_0,7,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'possible_targets_maybe_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__possible_targets_maybe_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_maybe_labels_3_0_i2);
	}
MR_def_label(ll_backend__opt_util__possible_targets_maybe_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_maybe_labels_3_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__opt_util__possible_targets_maybe_labels_3_0_i3);
MR_def_label(ll_backend__opt_util__possible_targets_maybe_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__possible_targets_maybe_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_maybe_labels_3_0_i7);
	}
MR_def_label(ll_backend__opt_util__possible_targets_maybe_labels_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module45)
	MR_init_entry1(ll_backend__opt_util__foreign_proc_labels_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__foreign_proc_labels_6_0);
	MR_init_label9(ll_backend__opt_util__foreign_proc_labels_6_0,3,2,6,5,9,8,12,11,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_labels'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__foreign_proc_labels_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i2);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i6);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i5);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i9);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i8);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i12);
	}
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i11);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module46)
	MR_init_entry1(ll_backend__opt_util__find_label_code_addrs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__find_label_code_addrs_3_0);
	MR_init_label4(ll_backend__opt_util__find_label_code_addrs_3_0,8,3,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_label_code_addrs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__find_label_code_addrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i2);
	}
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i6);
	}
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i8);
	}
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_util__instr_rvals_and_lvals_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(ll_backend__exprn_aux__rval_list_addrs_3_0);
MR_decl_entry(ll_backend__exprn_aux__lval_list_addrs_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module47)
	MR_init_entry1(ll_backend__opt_util__instr_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__instr_labels_3_0);
	MR_init_label9(ll_backend__opt_util__instr_labels_3_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__instr_labels_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__instr_labels_2_3_0,
		ll_backend__opt_util__instr_labels_3_0_i2);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__instr_rvals_and_lvals_3_0,
		ll_backend__opt_util__instr_labels_3_0_i3);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__opt_util__instr_labels_3_0_i4);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_list_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i5);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__opt_util__instr_labels_3_0_i6);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__exprn_aux__lval_list_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i7);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_labels_3_0_i8);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_labels_3_0_i9);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__find_label_code_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i10);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module48)
	MR_init_entry1(ll_backend__opt_util__instr_labels_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__instr_labels_2_3_0);
	MR_init_label10(ll_backend__opt_util__instr_labels_2_3_0,3,4,5,7,9,8,11,12,14,13)
	MR_init_label10(ll_backend__opt_util__instr_labels_2_3_0,15,17,18,20,22,23,24,25,27,28)
	MR_init_label10(ll_backend__opt_util__instr_labels_2_3_0,29,30,31,33,35,36,39,40,43,41)
	MR_init_label10(ll_backend__opt_util__instr_labels_2_3_0,45,46,47,48,49,50,51,52,53,54)
	MR_init_label1(ll_backend__opt_util__instr_labels_2_3_0,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_labels_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__instr_labels_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__instr_list_labels_3_0);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i8);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__possible_targets_maybe_labels_3_0,
		ll_backend__opt_util__instr_labels_2_3_0_i9);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__instr_labels_2_3_0_i14);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 4);
	MR_r2 = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_tempr1, 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 7);
	MR_r5 = MR_tfield(3, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__foreign_proc_labels_6_0,
		ll_backend__opt_util__instr_labels_2_3_0_i14);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i39);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i40);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i41);
	}
	MR_r6 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i43);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r6, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i45);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i47);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i48);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i49);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i50);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i52);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i53);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i54);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i55);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.instr_labels_2\'/3", 48);
	MR_r3 = (MR_Word) MR_string_const("decr_sp_and_return", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module49)
	MR_init_entry1(ll_backend__opt_util__instr_list_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__instr_list_labels_3_0);
	MR_init_label5(ll_backend__opt_util__instr_list_labels_3_0,18,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_list_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__instr_list_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_list_labels_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__instr_labels_3_0,
		ll_backend__opt_util__instr_list_labels_3_0_i4);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__instr_list_labels_3_0,
		ll_backend__opt_util__instr_list_labels_3_0_i5);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_labels_3_0_i6);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_labels_3_0_i7);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module50)
	MR_init_entry1(ll_backend__opt_util__instr_labels_only_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__instr_labels_only_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_labels_only'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__instr_labels_only_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__opt_util__instr_labels_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module51)
	MR_init_entry1(ll_backend__opt_util__possible_targets_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__possible_targets_3_0);
	MR_init_label10(ll_backend__opt_util__possible_targets_3_0,3,5,4,8,7,9,15,21,23,26)
	MR_init_label2(ll_backend__opt_util__possible_targets_3_0,25,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'possible_targets'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__possible_targets_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 8)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 25))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 29))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 15))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 12))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 24))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 28))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 2))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 31))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 34))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 32))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 13))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 22))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 23))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 16))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 17))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 18))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 21))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 14))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 11))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 10))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 20))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 19))))) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__possible_targets_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i4);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__possible_targets_maybe_labels_3_0,
		ll_backend__opt_util__possible_targets_3_0_i5);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__possible_targets_3_0_i8);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 4);
	MR_r2 = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_tempr1, 6);
	MR_r4 = MR_tfield(3, MR_tempr1, 7);
	MR_r5 = MR_tfield(3, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__foreign_proc_labels_6_0,
		ll_backend__opt_util__possible_targets_3_0_i8);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r6;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__possible_targets_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.possible_targets\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("block", 5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.possible_targets\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("decr_sp_and_return", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module52)
	MR_init_entry1(ll_backend__opt_util__count_temps_lval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_lval_5_0);
	MR_init_label10(ll_backend__opt_util__count_temps_lval_5_0,3,4,6,5,8,9,10,11,12,14)
	MR_init_label10(ll_backend__opt_util__count_temps_lval_5_0,15,16,18,20,22,23,24,25,27,28)
	MR_init_label4(ll_backend__opt_util__count_temps_lval_5_0,33,32,34,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_lval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_lval_5_0_i6);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
	}
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i23);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i24);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i25);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i27);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i30);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__opt_util__count_temps_lval_5_0_i33);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__opt_util__count_temps_lval_5_0_i34);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.count_temps_lval\'/5", 50);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module53)
	MR_init_entry1(ll_backend__opt_util__count_temps_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_rval_5_0);
	MR_init_label8(ll_backend__opt_util__count_temps_rval_5_0,41,4,3,6,7,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_rval_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i41);
	}
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_mem_ref_5_0);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i11);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i41);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_rval_5_0_i41);
MR_def_label(ll_backend__opt_util__count_temps_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.count_temps_rval\'/5", 50);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module54)
	MR_init_entry1(ll_backend__opt_util__count_temps_mem_ref_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_mem_ref_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_mem_ref_5_0,11,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_mem_ref'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_mem_ref_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_mem_ref_5_0_i3);
	}
MR_def_label(ll_backend__opt_util__count_temps_mem_ref_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_mem_ref_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_mem_ref_5_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_mem_ref_5_0_i6);
MR_def_label(ll_backend__opt_util__count_temps_mem_ref_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module55)
	MR_init_entry1(ll_backend__opt_util__count_temps_inputs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_inputs_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_inputs_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_inputs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_inputs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_inputs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_inputs_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_inputs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 4);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_inputs_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_inputs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_inputs_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module56)
	MR_init_entry1(ll_backend__opt_util__count_temps_outputs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_outputs_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_outputs_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_outputs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_outputs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_outputs_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_outputs_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_outputs_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module57)
	MR_init_entry1(ll_backend__opt_util__count_temps_components_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_components_5_0);
	MR_init_label6(ll_backend__opt_util__count_temps_components_5_0,44,3,40,5,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_components'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_components_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i5);
	}
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i44);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_inputs_5_0,
		ll_backend__opt_util__count_temps_components_5_0_i9);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i40);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_outputs_5_0,
		ll_backend__opt_util__count_temps_components_5_0_i9);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i44);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module58)
	MR_init_entry1(ll_backend__opt_util__count_temps_instr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_instr_5_0);
	MR_init_label10(ll_backend__opt_util__count_temps_instr_5_0,3,4,5,6,7,8,11,12,14,15)
	MR_init_label10(ll_backend__opt_util__count_temps_instr_5_0,16,18,20,22,23,26,27,98,29,28)
	MR_init_label10(ll_backend__opt_util__count_temps_instr_5_0,355,99,32,33,25,37,38,40,42,45)
	MR_init_label10(ll_backend__opt_util__count_temps_instr_5_0,46,48,52,51,55,54,57,58,60,62)
	MR_init_label10(ll_backend__opt_util__count_temps_instr_5_0,63,65,67,68,66,70,72,74,76,78)
	MR_init_label1(ll_backend__opt_util__count_temps_instr_5_0,317)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_instr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__count_temps_instr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i52);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_components_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i25);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 7);
	MR_sv(3) = MR_tfield(3, MR_r1, 8);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i26);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i27);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i29);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i28);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i98);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i32);
	}
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i99);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i33);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i317);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i37);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i38);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i40);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i42);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i52);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i45);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i46);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i48);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i52);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i51);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i52);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i54);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i55);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i57);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i58);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i60);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i62);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i63);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i65);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i66);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_rval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i67);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i68);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i70);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i74);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_rval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i76);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i78);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i355);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module59)
	MR_init_entry1(ll_backend__opt_util__count_temps_instr_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_temps_instr_list_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_instr_list_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_temps_instr_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__count_temps_instr_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_list_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_instr_5_0,
		ll_backend__opt_util__count_temps_instr_list_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_list_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module60)
	MR_init_entry1(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__rvals_refer_stackvars_1_0);
	MR_init_label5(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,24,3,6,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rvals_refer_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__rvals_refer_stackvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module61)
	MR_init_entry1(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0);
	MR_init_label10(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,3,4,5,6,7,18,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'code_addr_refers_to_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i8);
	}
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__bool__or_list_1_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module62)
	MR_init_entry1(fn__ll_backend__opt_util__instr_refers_to_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__instr_refers_to_stack_1_0);
	MR_init_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,3,7,9,208,11,15,17,20,19,24)
	MR_init_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,25,26,29,27,33,34,37,23,40,39)
	MR_init_label10(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,43,46,47,45,49,51,53,55,57,59)
	MR_init_label4(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,61,63,65,223)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_refers_to_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__instr_refers_to_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i40);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_r2, 3);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i208);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__bool__or_list_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i15);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i19);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i20);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__code_addr_refers_to_stack_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i47);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i23);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 7);
	MR_sv(1) = MR_tfield(3, MR_r2, 8);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i25);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i26);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i27);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i29);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(bool__or_3_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i27);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i223);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i33);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bool__or_3_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i34);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i223);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i37);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i39);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i40);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i47);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,31)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i43);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,32)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i45);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i46);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i47);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i49);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i51);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i53);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i55);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i57);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i59);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i61);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i63);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 8)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 34))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i65);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module63)
	MR_init_entry1(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__block_refers_to_stack_1_0);
	MR_init_label6(fn__ll_backend__opt_util__block_refers_to_stack_1_0,24,3,4,7,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'block_refers_to_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__block_refers_to_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,
		fn__ll_backend__opt_util__block_refers_to_stack_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		fn__ll_backend__opt_util__block_refers_to_stack_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module64)
	MR_init_entry1(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);
	MR_init_label10(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,235,5,4,9,8,16,13,14,25,20)
	MR_init_label10(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,21,28,30,32,12,37,39,41,45,43)
	MR_init_label6(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,48,49,52,53,55,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_stackvars_til_decr_sp'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i5);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i9);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(5) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i14);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i16);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i235);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i21);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i21);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i21);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i25);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i20);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(3) != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i20);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i28);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i30);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i32);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i39);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i41);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i43);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i45);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i48);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i55);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i49);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i52);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i55);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i53);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i55);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module65)
	MR_init_entry1(fn__ll_backend__opt_util__format_proc_label_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__format_proc_label_1_0);
	MR_init_label10(fn__ll_backend__opt_util__format_proc_label_1_0,4,5,6,7,8,3,10,11,12,13)
	MR_init_label4(fn__ll_backend__opt_util__format_proc_label_1_0,14,15,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_proc_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__format_proc_label_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__format_proc_label_1_0_i3);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i5);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i6);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i8);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_sv(2) = MR_tfield(1, MR_r1, 3);
	MR_sv(3) = MR_tfield(1, MR_r1, 4);
	MR_sv(5) = MR_tfield(1, MR_r1, 5);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i10);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i12);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i13);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i14);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i15);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i16);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i19);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module66)
	MR_init_entry1(fn__ll_backend__opt_util__format_label_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__format_label_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__format_label_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__format_proc_label_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module67)
	MR_init_entry1(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__has_both_incr_decr_sp_2_5_0);
	MR_init_label5(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,10,3,5,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_both_incr_decr_sp_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i2);
	}
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,24)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i3);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i5);
	}
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,25)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i8);
	}
	MR_r3 = (MR_Integer) 1;
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i10);
	}
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module68)
	MR_init_entry1(ll_backend__opt_util__has_both_incr_decr_sp_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__has_both_incr_decr_sp_1_0);
	MR_init_label2(ll_backend__opt_util__has_both_incr_decr_sp_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_both_incr_decr_sp'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__has_both_incr_decr_sp_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,
		ll_backend__opt_util__has_both_incr_decr_sp_1_0_i2);
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_1_0_i1);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module69)
	MR_init_entry1(ll_backend__opt_util__lval_access_rvals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__lval_access_rvals_2_0);
	MR_init_label10(ll_backend__opt_util__lval_access_rvals_2_0,3,4,5,8,9,10,11,12,14,15)
	MR_init_label10(ll_backend__opt_util__lval_access_rvals_2_0,16,18,20,22,23,24,25,27,28,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lval_access_rvals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__lval_access_rvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.lval_access_rvals\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module70)
	MR_init_entry1(ll_backend__opt_util__rval_free_of_lval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__rval_free_of_lval_2_0);
	MR_init_label10(ll_backend__opt_util__rval_free_of_lval_2_0,62,4,3,12,14,9,17,35,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_free_of_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__rval_free_of_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__rval_free_of_lval_2_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i4);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i62);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i35);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i12);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i14);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__opt_util__rvals_free_of_lval_2_0);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i17);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i62);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i62);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.rval_free_of_lval\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i35);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module71)
	MR_init_entry1(ll_backend__opt_util__rvals_free_of_lval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__rvals_free_of_lval_2_0);
	MR_init_label4(ll_backend__opt_util__rvals_free_of_lval_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rvals_free_of_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__rvals_free_of_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__rvals_free_of_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__rvals_free_of_lval_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__rval_free_of_lval_2_0,
		ll_backend__opt_util__rvals_free_of_lval_2_0_i4);
MR_def_label(ll_backend__opt_util__rvals_free_of_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rvals_free_of_lval_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__opt_util__rvals_free_of_lval_2_0_i17);
MR_def_label(ll_backend__opt_util__rvals_free_of_lval_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__rvals_free_of_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module72)
	MR_init_entry1(ll_backend__opt_util__count_incr_hp_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_incr_hp_2_3_0);
	MR_init_label4(ll_backend__opt_util__count_incr_hp_2_3_0,7,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_incr_hp_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_incr_hp_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_incr_hp_2_3_0_i2);
	}
MR_def_label(ll_backend__opt_util__count_incr_hp_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_incr_hp_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_GOTO_LAB(ll_backend__opt_util__count_incr_hp_2_3_0_i5);
	}
MR_def_label(ll_backend__opt_util__count_incr_hp_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
MR_def_label(ll_backend__opt_util__count_incr_hp_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_incr_hp_2_3_0_i7);
	}
MR_def_label(ll_backend__opt_util__count_incr_hp_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module73)
	MR_init_entry1(ll_backend__opt_util__count_incr_hp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__count_incr_hp_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_incr_hp'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__count_incr_hp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(ll_backend__opt_util__count_incr_hp_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module74)
	MR_init_entry1(ll_backend__opt_util__propagate_livevals_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__propagate_livevals_2_3_0);
	MR_init_label8(ll_backend__opt_util__propagate_livevals_2_3_0,49,6,4,9,13,15,12,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_livevals_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__propagate_livevals_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i49);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i4);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(set__union_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i6);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i19);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i9);
	}
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i15);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i13);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i15);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i19);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i19);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module75)
	MR_init_entry1(ll_backend__opt_util__propagate_livevals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__propagate_livevals_2_0);
	MR_init_label3(ll_backend__opt_util__propagate_livevals_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_livevals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__propagate_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__propagate_livevals_2_0_i2);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__opt_util__propagate_livevals_2_0_i3);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_0_i4);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module76)
	MR_init_entry1(ll_backend__opt_util__replace_labels_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_label_3_0);
	MR_init_label2(ll_backend__opt_util__replace_labels_label_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_label_3_0_i3);
MR_def_label(ll_backend__opt_util__replace_labels_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_label_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__replace_labels_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module77)
	MR_init_entry1(ll_backend__opt_util__replace_labels_comps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_comps_3_0);
	MR_init_label5(ll_backend__opt_util__replace_labels_comps_3_0,35,7,6,5,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_comps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_comps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(3, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i7);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_sv(1);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module78)
	MR_init_entry1(ll_backend__opt_util__replace_labels_code_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_code_addr_3_0);
	MR_init_label3(ll_backend__opt_util__replace_labels_code_addr_3_0,5,4,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_code_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_code_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_code_addr_3_0_i21);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_code_addr_3_0_i5);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_code_addr_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module79)
	MR_init_entry1(ll_backend__opt_util__replace_labels_maybe_label_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_maybe_label_list_3_0);
	MR_init_label5(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,35,5,7,6,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_maybe_label_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_maybe_label_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i7);
MR_def_label(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_sv(1);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__opt_util__replace_labels_maybe_label_list_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module80)
	MR_init_entry1(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0);
	MR_init_label4(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,4,6,8,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_c_code_live_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_i15);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_i4);
MR_def_label(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__replace_labels_lval_map_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_i6);
MR_def_label(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_c_code_live_lvals\'/3", 66);
	MR_r4 = (MR_Word) MR_string_const("some replacements", 17);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module81)
	MR_init_entry1(ll_backend__opt_util__replace_labels_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_lval_3_0);
	MR_init_label10(ll_backend__opt_util__replace_labels_lval_3_0,4,5,3,8,7,11,10,14,13,17)
	MR_init_label5(ll_backend__opt_util__replace_labels_lval_3_0,16,20,19,23,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i4);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i5);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i7);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i14);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i16);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i17);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i19);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i20);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_lval_3_0_i61);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i23);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module82)
	MR_init_entry1(ll_backend__opt_util__replace_labels_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_rval_3_0);
	MR_init_label10(ll_backend__opt_util__replace_labels_rval_3_0,4,3,7,6,11,12,10,17,58,21)
	MR_init_label3(ll_backend__opt_util__replace_labels_rval_3_0,20,23,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i4);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i7);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i56);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i12);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i58);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i56);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i17);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_mem_ref_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i21);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i23);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module83)
	MR_init_entry1(ll_backend__opt_util__replace_labels_mem_ref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_mem_ref_3_0);
	MR_init_label3(ll_backend__opt_util__replace_labels_mem_ref_3_0,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_mem_ref'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_mem_ref_3_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_mem_ref_3_0_i4);
MR_def_label(ll_backend__opt_util__replace_labels_mem_ref_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_mem_ref_3_0_i5);
MR_def_label(ll_backend__opt_util__replace_labels_mem_ref_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__opt_util__replace_labels_mem_ref_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module84)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_instr_4_0);
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,6,3,11,12,8,15,14,19,20,21)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,17,25,26,24,31,29,36,34,40,41)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,39,45,47,49,23,52,53,51,58,55)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,61,60,65,66,67,63,72,73,75,76)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,74,79,81,83,86,69,93,90,96,97)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,95,102,103,99,107,106,105,112,111,115)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,116,114,119,120,121,118,124,125,126,123)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,129,128,134,131,139,136,614,147,141,153)
	MR_init_label10(ll_backend__opt_util__replace_labels_instr_4_0,150,159,160,161,156,166,163,171,168,176)
	MR_init_label7(ll_backend__opt_util__replace_labels_instr_4_0,173,181,178,186,183,191,592)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_instr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i3);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_c_code_live_lvals_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i6);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i8);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i12);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i14);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i15);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i17);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i19);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(7) = MR_tfield(3, MR_sv(7), 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i21);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i20);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i21);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i23);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 4);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i25);
	}
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_tfield(3, MR_r1, 5);
	MR_sv(5) = MR_tfield(3, MR_r1, 6);
	MR_sv(12) = MR_tfield(3, MR_r1, 7);
	MR_sv(8) = MR_tfield(3, MR_r1, 8);
	MR_sv(9) = MR_tfield(3, MR_r1, 9);
	MR_sv(10) = MR_tfield(3, MR_r1, 10);
	MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i24);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_tfield(3, MR_r1, 5);
	MR_sv(5) = MR_tfield(3, MR_r1, 6);
	MR_sv(12) = MR_tfield(3, MR_r1, 7);
	MR_sv(8) = MR_tfield(3, MR_r1, 8);
	MR_sv(9) = MR_tfield(3, MR_r1, 9);
	MR_sv(10) = MR_tfield(3, MR_r1, 10);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i26);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2398__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_instr\'/4", 54);
	MR_r4 = (MR_Word) MR_string_const("trying to replace Mercury label in C code", 41);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i24);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i29);
	}
	MR_sv(11) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i31);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2407__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_instr\'/4", 54);
	MR_r4 = (MR_Word) MR_string_const("trying to replace Mercury label with layout", 43);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i29);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i34);
	}
	MR_sv(11) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i36);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2416__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_instr\'/4", 54);
	MR_r4 = (MR_Word) MR_string_const("trying to replace Mercury label with layout", 43);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i34);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i40);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i39);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(12), 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i41);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i39);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 10) = MR_sv(10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(12) = MR_tfield(1, MR_sv(8), 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i47);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2435__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_instr\'/4", 54);
	MR_r4 = (MR_Word) MR_string_const("trying to replace Mercury label with layout", 43);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i49);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(7);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_sv(4);
	MR_tfield(3, MR_r1, 5) = MR_sv(6);
	MR_tfield(3, MR_r1, 6) = MR_sv(5);
	MR_tfield(3, MR_r1, 7) = MR_sv(2);
	MR_tfield(3, MR_r1, 8) = MR_sv(8);
	MR_tfield(3, MR_r1, 9) = MR_sv(9);
	MR_tfield(3, MR_r1, 10) = MR_sv(10);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i51);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i52);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i53);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i55);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i58);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i60);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i61);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i63);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i65);
	}
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i67);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i66);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i67);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i69);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(4) = MR_tfield(3, MR_r1, 6);
	MR_sv(6) = MR_tfield(3, MR_r1, 7);
	MR_sv(5) = MR_tfield(3, MR_r1, 8);
	MR_sv(12) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i72);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i73);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i75);
	}
	MR_r2 = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i74);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(6), 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i76);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i79);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 7) = MR_r1;
	MR_tfield(3, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i81);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i83);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(12);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(2);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(3);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_tfield(3, MR_r1, 7) = MR_sv(5);
	MR_tfield(3, MR_r1, 8) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(6), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i86);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(12);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(2);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(3);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_tfield(3, MR_r1, 7) = MR_sv(5);
	MR_tfield(3, MR_r1, 8) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i90);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i93);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i95);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i96);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i97);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i99);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i102);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i103);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i105);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_sv(7), 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i107);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i106);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.opt_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.opt_util.replace_labels_instr\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("eliminated label", 16);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i111);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i112);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 31;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i114);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i115);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i116);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 34;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i118);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i119);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i120);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i121);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 33;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i123);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i124);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i125);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i126);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i128);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(4) = MR_tfield(3, MR_r1, 6);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i129);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i131);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i134);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i136);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i139);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i141);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_r3 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i614);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,614)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i147);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i150);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i153);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i156);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i159);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i160);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i161);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i163);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i166);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i168);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i171);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i173);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i176);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i178);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i181);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i183);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i186);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i592);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i191);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,592)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module85)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instruction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_instruction_4_0);
	MR_init_label1(ll_backend__opt_util__replace_labels_instruction_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_instruction'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instruction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instr_4_0,
		ll_backend__opt_util__replace_labels_instruction_4_0_i2);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module86)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instruction_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_instruction_list_5_0);
	MR_init_label6(ll_backend__opt_util__replace_labels_instruction_list_5_0,46,8,7,4,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_instruction_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instruction_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tempr1;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i4);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i4);
	}
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(4) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(4) = MR_sv(6);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instr_4_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;
MR_decl_entry(bool__or_list_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module87)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0);
	MR_init_label3(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,3,25,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_component_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i25);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i25);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(bool__or_list_2_0);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module88)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0);
	MR_init_label1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_input_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module89)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0);
	MR_init_label1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_output_refers_stackvars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module90)
	MR_init_entry1(ll_backend__opt_util__replace_labels_lval_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__replace_labels_lval_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_labels_lval_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_lval_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__opt_util__replace_labels_lval_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module91)
	MR_init_entry1(__Unify___ll_backend__opt_util__instrmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__opt_util__instrmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__instrmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module92)
	MR_init_entry1(__Compare___ll_backend__opt_util__instrmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__opt_util__instrmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__instrmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module93)
	MR_init_entry1(__Unify___ll_backend__opt_util__lvalmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__opt_util__lvalmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__lvalmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module94)
	MR_init_entry1(__Compare___ll_backend__opt_util__lvalmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__opt_util__lvalmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__lvalmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module95)
	MR_init_entry1(__Unify___ll_backend__opt_util__succmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__opt_util__succmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__succmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module96)
	MR_init_entry1(__Compare___ll_backend__opt_util__succmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__opt_util__succmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__succmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module97)
	MR_init_entry1(__Unify___ll_backend__opt_util__tailmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__opt_util__tailmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__tailmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module98)
	MR_init_entry1(__Compare___ll_backend__opt_util__tailmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__opt_util__tailmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__tailmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module99)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2398__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2398__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__replace_labels_instr__2398__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2398__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module100)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2407__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2407__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__replace_labels_instr__2407__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2407__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module101)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2416__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2416__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__replace_labels_instr__2416__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2416__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module102)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2435__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2435__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__replace_labels_instr__2435__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2435__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module103)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_c_code_live_lvals__2522__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__opt_util_maybe_bunch_0(void)
{
	ll_backend__opt_util_module0();
	ll_backend__opt_util_module1();
	ll_backend__opt_util_module2();
	ll_backend__opt_util_module3();
	ll_backend__opt_util_module4();
	ll_backend__opt_util_module5();
	ll_backend__opt_util_module6();
	ll_backend__opt_util_module7();
	ll_backend__opt_util_module8();
	ll_backend__opt_util_module9();
	ll_backend__opt_util_module10();
	ll_backend__opt_util_module11();
	ll_backend__opt_util_module12();
	ll_backend__opt_util_module13();
	ll_backend__opt_util_module14();
	ll_backend__opt_util_module15();
	ll_backend__opt_util_module16();
	ll_backend__opt_util_module17();
	ll_backend__opt_util_module18();
	ll_backend__opt_util_module19();
	ll_backend__opt_util_module20();
	ll_backend__opt_util_module21();
	ll_backend__opt_util_module22();
	ll_backend__opt_util_module23();
	ll_backend__opt_util_module24();
	ll_backend__opt_util_module25();
	ll_backend__opt_util_module26();
	ll_backend__opt_util_module27();
	ll_backend__opt_util_module28();
	ll_backend__opt_util_module29();
	ll_backend__opt_util_module30();
	ll_backend__opt_util_module31();
	ll_backend__opt_util_module32();
	ll_backend__opt_util_module33();
	ll_backend__opt_util_module34();
	ll_backend__opt_util_module35();
	ll_backend__opt_util_module36();
	ll_backend__opt_util_module37();
	ll_backend__opt_util_module38();
	ll_backend__opt_util_module39();
}

static void mercury__ll_backend__opt_util_maybe_bunch_1(void)
{
	ll_backend__opt_util_module40();
	ll_backend__opt_util_module41();
	ll_backend__opt_util_module42();
	ll_backend__opt_util_module43();
	ll_backend__opt_util_module44();
	ll_backend__opt_util_module45();
	ll_backend__opt_util_module46();
	ll_backend__opt_util_module47();
	ll_backend__opt_util_module48();
	ll_backend__opt_util_module49();
	ll_backend__opt_util_module50();
	ll_backend__opt_util_module51();
	ll_backend__opt_util_module52();
	ll_backend__opt_util_module53();
	ll_backend__opt_util_module54();
	ll_backend__opt_util_module55();
	ll_backend__opt_util_module56();
	ll_backend__opt_util_module57();
	ll_backend__opt_util_module58();
	ll_backend__opt_util_module59();
	ll_backend__opt_util_module60();
	ll_backend__opt_util_module61();
	ll_backend__opt_util_module62();
	ll_backend__opt_util_module63();
	ll_backend__opt_util_module64();
	ll_backend__opt_util_module65();
	ll_backend__opt_util_module66();
	ll_backend__opt_util_module67();
	ll_backend__opt_util_module68();
	ll_backend__opt_util_module69();
	ll_backend__opt_util_module70();
	ll_backend__opt_util_module71();
	ll_backend__opt_util_module72();
	ll_backend__opt_util_module73();
	ll_backend__opt_util_module74();
	ll_backend__opt_util_module75();
	ll_backend__opt_util_module76();
	ll_backend__opt_util_module77();
	ll_backend__opt_util_module78();
	ll_backend__opt_util_module79();
}

static void mercury__ll_backend__opt_util_maybe_bunch_2(void)
{
	ll_backend__opt_util_module80();
	ll_backend__opt_util_module81();
	ll_backend__opt_util_module82();
	ll_backend__opt_util_module83();
	ll_backend__opt_util_module84();
	ll_backend__opt_util_module85();
	ll_backend__opt_util_module86();
	ll_backend__opt_util_module87();
	ll_backend__opt_util_module88();
	ll_backend__opt_util_module89();
	ll_backend__opt_util_module90();
	ll_backend__opt_util_module91();
	ll_backend__opt_util_module92();
	ll_backend__opt_util_module93();
	ll_backend__opt_util_module94();
	ll_backend__opt_util_module95();
	ll_backend__opt_util_module96();
	ll_backend__opt_util_module97();
	ll_backend__opt_util_module98();
	ll_backend__opt_util_module99();
	ll_backend__opt_util_module100();
	ll_backend__opt_util_module101();
	ll_backend__opt_util_module102();
	ll_backend__opt_util_module103();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__opt_util__init(void);
void mercury__ll_backend__opt_util__init_type_tables(void);
void mercury__ll_backend__opt_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__opt_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__opt_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__opt_util__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__opt_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__opt_util_maybe_bunch_0();
	mercury__ll_backend__opt_util_maybe_bunch_1();
	mercury__ll_backend__opt_util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0,
		ll_backend__opt_util__instrmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0,
		ll_backend__opt_util__lvalmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0,
		ll_backend__opt_util__succmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0,
		ll_backend__opt_util__tailmap_0_0);
	mercury__ll_backend__opt_util__init_debugger();
}

void mercury__ll_backend__opt_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0);
	}
}


void mercury__ll_backend__opt_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__opt_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__opt_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__opt_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__opt_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
