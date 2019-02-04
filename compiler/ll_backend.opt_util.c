/*
** Automatically generated from `opt_util.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__opt_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.opt_util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.opt_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.opt_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.opt_util.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.opt_util.c"
#line 44 "ll_backend.opt_util.c"
#include "ll_backend.opt_util.mh"

#line 47 "ll_backend.opt_util.c"
#line 48 "ll_backend.opt_util.c"
#ifndef LL_BACKEND__OPT_UTIL_DECL_GUARD
#define LL_BACKEND__OPT_UTIL_DECL_GUARD

#line 52 "ll_backend.opt_util.c"
#line 53 "ll_backend.opt_util.c"

#endif
#line 56 "ll_backend.opt_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0,
	mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0;
MR_decl_label4(ll_backend__opt_util__can_block_fall_through_2_0, 16,3,5,4)
MR_decl_label4(ll_backend__opt_util__count_incr_hp_2_3_0, 7,3,5,2)
MR_decl_label6(ll_backend__opt_util__count_temps_components_5_0, 26,7,9,10,21,3)
MR_decl_label2(ll_backend__opt_util__count_temps_inputs_5_0, 4,2)
MR_decl_label8(ll_backend__opt_util__count_temps_instr_5_0, 53,8,63,64,58,41,46,51)
MR_decl_label3(ll_backend__opt_util__count_temps_instr_list_5_0, 11,4,3)
MR_decl_label4(ll_backend__opt_util__count_temps_lval_5_0, 6,5,7,2)
MR_decl_label3(ll_backend__opt_util__count_temps_outputs_5_0, 11,4,3)
MR_decl_label4(ll_backend__opt_util__filter_in_livevals_2_0, 7,8,6,2)
MR_decl_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0, 4,8,12,13,14,15,16,17)
MR_decl_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0, 26,27,28,29,30,31,32,33)
MR_decl_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0, 34,35,36,37,38,39,40,41)
MR_decl_label4(ll_backend__opt_util__filter_out_bad_livevals_2_0, 42,5,6,3)
MR_decl_label4(ll_backend__opt_util__filter_out_labels_2_0, 7,8,6,2)
MR_decl_label4(ll_backend__opt_util__filter_out_livevals_2_0, 7,8,6,2)
MR_decl_label5(ll_backend__opt_util__filter_out_r1_3_0, 11,12,4,10,2)
MR_decl_label2(ll_backend__opt_util__find_first_label_2_0, 3,5)
MR_decl_label4(ll_backend__opt_util__find_label_code_addrs_3_0, 7,3,5,2)
MR_decl_label4(ll_backend__opt_util__find_no_fallthrough_2_0, 20,5,4,7)
MR_decl_label8(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0, 4,8,9,10,11,12,13,14)
MR_decl_label2(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0, 3,34)
MR_decl_label7(ll_backend__opt_util__foreign_proc_labels_5_0, 3,2,5,4,7,6,8)
MR_decl_label2(ll_backend__opt_util__gather_comments_3_0, 5,2)
MR_decl_label3(ll_backend__opt_util__gather_comments_livevals_3_0, 5,7,2)
MR_decl_label4(ll_backend__opt_util__get_prologue_4_0, 2,6,7,3)
MR_decl_label2(ll_backend__opt_util__has_both_incr_decr_sp_1_0, 2,1)
MR_decl_label5(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0, 10,3,5,8,2)
MR_decl_label7(ll_backend__opt_util__instr_labels_3_0, 2,3,4,5,6,7,8)
MR_decl_label8(ll_backend__opt_util__instr_labels_2_3_0, 9,12,13,59,15,17,18,20)
MR_decl_label8(ll_backend__opt_util__instr_labels_2_3_0, 33,35,37,36,39,38,41,40)
MR_decl_label3(ll_backend__opt_util__instr_labels_2_3_0, 43,45,46)
MR_decl_label5(ll_backend__opt_util__instr_list_labels_3_0, 4,5,6,7,3)
MR_decl_label5(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0, 4,5,6,7,3)
MR_decl_label8(ll_backend__opt_util__instr_rvals_and_lvals_3_0, 37,8,9,11,21,28,32,36)
MR_decl_label8(ll_backend__opt_util__is_const_condition_2_0, 20,13,15,17,5,6,73,2)
MR_decl_label2(ll_backend__opt_util__is_const_condition_2_0, 70,1)
MR_decl_label8(ll_backend__opt_util__is_forkproceed_next_3_0, 2,11,13,15,16,18,19,20)
MR_decl_label8(ll_backend__opt_util__is_forkproceed_next_3_0, 22,23,4,33,35,37,38,40)
MR_decl_label5(ll_backend__opt_util__is_forkproceed_next_3_0, 41,42,44,45,1)
MR_decl_label7(ll_backend__opt_util__is_proceed_next_2_0, 2,4,10,12,15,18,1)
MR_decl_label8(ll_backend__opt_util__is_sdproceed_next_sf_3_0, 2,4,10,12,15,23,25,28)
MR_decl_label1(ll_backend__opt_util__is_sdproceed_next_sf_3_0, 1)
MR_decl_label3(ll_backend__opt_util__is_succeed_next_2_0, 2,5,1)
MR_decl_label6(ll_backend__opt_util__is_this_label_next_3_0, 45,3,7,14,12,1)
MR_decl_label4(ll_backend__opt_util__lval_access_rvals_2_0, 22,23,24,25)
MR_decl_label3(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0, 2,4,1)
MR_decl_label8(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0, 71,3,35,13,14,15,17,1)
MR_decl_label8(ll_backend__opt_util__next_assign_to_redoip_6_0, 63,10,12,3,4,13,32,15)
MR_decl_label1(ll_backend__opt_util__next_assign_to_redoip_6_0, 17)
MR_decl_label2(ll_backend__opt_util__no_stack_straight_line_3_0, 2,3)
MR_decl_label8(ll_backend__opt_util__no_stack_straight_line_2_4_0, 44,3,21,8,10,12,6,4)
MR_decl_label1(ll_backend__opt_util__no_stack_straight_line_2_4_0, 5)
MR_decl_label8(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 157,42,38,39,5,6,10,7)
MR_decl_label8(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 8,19,14,15,22,24,26,30)
MR_decl_label5(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0, 31,33,35,37,1)
MR_decl_label8(ll_backend__opt_util__possible_targets_3_0, 47,8,9,12,18,22,24,25)
MR_decl_label4(ll_backend__opt_util__possible_targets_3_0, 40,80,43,46)
MR_decl_label3(ll_backend__opt_util__propagate_livevals_2_0, 2,3,4)
MR_decl_label8(ll_backend__opt_util__propagate_livevals_2_3_0, 6,4,7,11,13,10,17,3)
MR_decl_label8(ll_backend__opt_util__replace_labels_code_addr_3_0, 4,5,6,7,8,9,10,38)
MR_decl_label3(ll_backend__opt_util__replace_labels_code_addr_3_0, 13,12,39)
MR_decl_label8(ll_backend__opt_util__replace_labels_comps_3_0, 6,9,10,19,11,13,12,16)
MR_decl_label1(ll_backend__opt_util__replace_labels_comps_3_0, 3)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 4,5,8,230,10,11,14,15)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 231,17,18,240,23,232,26,28)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 25,233,32,234,35,36,37,235)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 41,42,43,44,47,48,51,52)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 55,56,57,60,61,64,65,68)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 69,72,73,76,77,80,81,84)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 236,90,91,92,89,96,97,94)
MR_decl_label8(ll_backend__opt_util__replace_labels_instr_4_0, 101,102,99,105,106,107,237,110)
MR_decl_label4(ll_backend__opt_util__replace_labels_instr_4_0, 238,112,113,227)
MR_decl_label1(ll_backend__opt_util__replace_labels_instruction_4_0, 2)
MR_decl_label6(ll_backend__opt_util__replace_labels_instruction_list_5_0, 8,7,4,11,13,3)
MR_decl_label2(ll_backend__opt_util__replace_labels_label_3_0, 3,2)
MR_decl_label4(ll_backend__opt_util__replace_labels_label_list_3_0, 5,4,8,3)
MR_decl_label8(ll_backend__opt_util__replace_labels_lval_3_0, 4,5,6,7,8,9,10,13)
MR_decl_label8(ll_backend__opt_util__replace_labels_lval_3_0, 57,18,58,20,59,22,60,24)
MR_decl_label8(ll_backend__opt_util__replace_labels_lval_3_0, 61,26,62,28,29,63,31,50)
MR_decl_label2(ll_backend__opt_util__replace_labels_mem_ref_3_0, 6,17)
MR_decl_label8(ll_backend__opt_util__replace_labels_rval_3_0, 66,5,68,8,9,27,24,25)
MR_decl_label8(ll_backend__opt_util__replace_labels_rval_3_0, 26,22,23,10,13,14,17,21)
MR_decl_label1(ll_backend__opt_util__replace_labels_rval_3_0, 67)
MR_decl_label8(ll_backend__opt_util__rval_free_of_lval_2_0, 4,7,9,12,14,17,23,19)
MR_decl_label2(ll_backend__opt_util__rval_free_of_lval_2_0, 35,1)
MR_decl_label4(ll_backend__opt_util__rvals_free_of_lval_2_0, 17,4,2,1)
MR_decl_label1(ll_backend__opt_util__skip_comments_2_0, 19)
MR_decl_label2(ll_backend__opt_util__skip_comments_labels_2_0, 2,34)
MR_decl_label2(ll_backend__opt_util__skip_comments_livevals_2_0, 2,34)
MR_decl_label3(ll_backend__opt_util__skip_comments_livevals_labels_2_0, 2,6,49)
MR_decl_label3(ll_backend__opt_util__skip_to_next_label_3_0, 19,4,6)
MR_decl_label3(ll_backend__opt_util__straight_alternative_3_0, 2,4,1)
MR_decl_label8(ll_backend__opt_util__straight_alternative_2_4_0, 62,24,3,5,11,13,10,17)
MR_decl_label6(fn__ll_backend__opt_util__block_refers_to_stack_1_0, 21,11,3,4,7,6)
MR_decl_label4(fn__ll_backend__opt_util__can_components_branch_away_1_0, 3,13,22,15)
MR_decl_label4(fn__ll_backend__opt_util__can_instr_branch_away_1_0, 36,8,31,35)
MR_decl_label4(fn__ll_backend__opt_util__can_instr_fall_through_1_0, 36,8,9,35)
MR_decl_label4(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0, 22,23,20,17)
MR_decl_label1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0, 3)
MR_decl_label3(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0, 4,5,2)
MR_decl_label1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0, 3)
MR_decl_label3(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0, 4,5,2)
MR_decl_label8(fn__ll_backend__opt_util__format_proc_label_1_0, 4,5,6,7,8,3,10,11)
MR_decl_label6(fn__ll_backend__opt_util__format_proc_label_1_0, 12,13,14,15,16,17)
MR_decl_label8(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 9,106,12,18,21,30,87,88)
MR_decl_label8(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 107,37,40,49,89,90,108,58)
MR_decl_label5(fn__ll_backend__opt_util__instr_refers_to_stack_1_0, 59,73,109,104,84)
MR_decl_label4(fn__ll_backend__opt_util__livevals_addr_1_0, 4,11,18,24)
MR_decl_label7(fn__ll_backend__opt_util__lval_refers_stackvars_1_0, 21,42,23,24,26,28,29)
MR_decl_label4(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0, 10,18,6,7)
MR_decl_label8(fn__ll_backend__opt_util__rval_refers_stackvars_1_0, 4,6,8,10,14,15,16,12)
MR_decl_label1(fn__ll_backend__opt_util__rval_refers_stackvars_1_0, 11)
MR_decl_label5(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0, 24,3,6,7,4)
MR_decl_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0, 17,3,4,20)
MR_decl_label3(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0, 16,12,3)
MR_decl_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 72,8,9,84,14,23,31,32)
MR_decl_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 33,34,36,37,39,85,52,53)
MR_decl_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0, 55,57,67,71)
MR_decl_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0, 4,13,21,36,23,24,26,29)
MR_decl_label2(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0, 8,5)
MR_decl_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0, 4,7,16,24,25,26,29,34)
MR_decl_label6(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0, 36,40,41,42,38,37)
MR_def_extern_entry(ll_backend__opt_util__gather_comments_3_0)
MR_decl_static(fn__ll_backend__opt_util__this_file_0_0)
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
MR_def_extern_entry(ll_backend__opt_util__filter_out_bad_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__filter_in_livevals_2_0)
MR_def_extern_entry(ll_backend__opt_util__is_const_condition_2_0)
MR_def_extern_entry(fn__ll_backend__opt_util__livevals_addr_1_0)
MR_decl_static(ll_backend__opt_util__find_label_code_addrs_3_0)
MR_decl_static(ll_backend__opt_util__foreign_proc_labels_5_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0)
MR_decl_static(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0)
MR_decl_static(ll_backend__opt_util__instr_rvals_and_lvals_3_0)
MR_decl_static(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0)
MR_def_extern_entry(ll_backend__opt_util__instr_labels_3_0)
MR_def_extern_entry(ll_backend__opt_util__instr_list_labels_3_0)
MR_decl_static(ll_backend__opt_util__instr_labels_2_3_0)
MR_def_extern_entry(ll_backend__opt_util__possible_targets_3_0)
MR_decl_static(ll_backend__opt_util__count_temps_inputs_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_lval_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_outputs_5_0)
MR_decl_static(ll_backend__opt_util__count_temps_components_5_0)
MR_def_extern_entry(ll_backend__opt_util__count_temps_instr_5_0)
MR_def_extern_entry(ll_backend__opt_util__count_temps_instr_list_5_0)
MR_def_extern_entry(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0)
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
MR_def_extern_entry(ll_backend__opt_util__replace_labels_label_list_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_lval_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_rval_3_0)
MR_decl_static(ll_backend__opt_util__replace_labels_mem_ref_3_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instr_4_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instruction_4_0)
MR_def_extern_entry(ll_backend__opt_util__replace_labels_instruction_list_5_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0)
MR_decl_static(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__instrmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__instrmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__lvalmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__lvalmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__succmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__succmap_0_0)
MR_def_extern_entry(__Unify___ll_backend__opt_util__tailmap_0_0)
MR_def_extern_entry(__Compare___ll_backend__opt_util__tailmap_0_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2088__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2097__1_2_0)
MR_decl_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2106__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_111_112_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_116_101_109_112_115_95_114_118_97_108_95_95_91_49_93_95_48_5_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_string_const("no succip restoration", 21)
},
{
MR_string_const("no sp restoration", 17)
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_TAG_COMMON(1,0,0),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,0,1),
MR_string_const("", 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
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
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_util__instr_refers_to_stack_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_BOOL_CTOR_ADDR
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

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_tbmkword(0, 1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0 = {
	0,
	13,
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
	13,
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

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0 = {
	0,
	13,
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
924,
"d1;c3;d22;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2088",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2088,
"d30;c5;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2097",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2097,
"d30;c6;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_util__replace_labels_instr_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.opt_util",
"ll_backend.opt_util",
"lambda_opt_util_m_2106",
2,
0
},
"ll_backend.opt_util",
"opt_util.m",
2106,
"d30;c7;d2;c3;"
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
942,
"d1;c3;d1;c3;"
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
946,
"d1;c3;d2;c3;"
};


MR_BEGIN_MODULE(ll_backend__opt_util_module0)
	MR_init_entry1(ll_backend__opt_util__gather_comments_3_0);
	MR_init_label2(ll_backend__opt_util__gather_comments_3_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__gather_comments_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module1)
	MR_init_entry1(fn__ll_backend__opt_util__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module2)
	MR_init_entry1(ll_backend__opt_util__get_prologue_4_0);
	MR_init_label4(ll_backend__opt_util__get_prologue_4_0,2,6,7,3)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__get_prologue_4_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__opt_util__get_prologue_4_0_i6);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__get_prologue_4_0_i7);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__get_prologue_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("procedure does not begin with label", 35);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module3)
	MR_init_entry1(ll_backend__opt_util__gather_comments_livevals_3_0);
	MR_init_label3(ll_backend__opt_util__gather_comments_livevals_3_0,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__gather_comments_livevals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i2);
	}
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ll_backend__opt_util__gather_comments_livevals_3_0,
		ll_backend__opt_util__gather_comments_livevals_3_0_i7);
MR_def_label(ll_backend__opt_util__gather_comments_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__gather_comments_livevals_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module4)
	MR_init_entry1(ll_backend__opt_util__skip_comments_2_0);
	MR_init_label1(ll_backend__opt_util__skip_comments_2_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_2_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_2_0_i19);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module5)
	MR_init_entry1(ll_backend__opt_util__skip_comments_livevals_2_0);
	MR_init_label2(ll_backend__opt_util__skip_comments_livevals_2_0,2,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__skip_comments_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_2_0_i34);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_livevals_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module6)
	MR_init_entry1(ll_backend__opt_util__skip_comments_labels_2_0);
	MR_init_label2(ll_backend__opt_util__skip_comments_labels_2_0,2,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_labels_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_labels_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_labels_2_0_i34);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_labels_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_labels_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module7)
	MR_init_entry1(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	MR_init_label3(ll_backend__opt_util__skip_comments_livevals_labels_2_0,2,6,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_comments_livevals_labels_2_0_i49);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__opt_util__skip_comments_livevals_labels_2_0);
	}
MR_def_label(ll_backend__opt_util__skip_comments_livevals_labels_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module8)
	MR_init_entry1(fn__ll_backend__opt_util__can_components_branch_away_1_0);
	MR_init_label4(fn__ll_backend__opt_util__can_components_branch_away_1_0,3,13,22,15)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i22);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i13);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
	}
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_components_branch_away_1_0_i15);
	}
	}
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_components_branch_away_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module9)
	MR_init_entry1(fn__ll_backend__opt_util__can_instr_branch_away_1_0);
	MR_init_label4(fn__ll_backend__opt_util__can_instr_branch_away_1_0,36,8,31,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__can_instr_branch_away_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i8);
	}
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_branch_away_1_0_i35));
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__can_components_branch_away_1_0);
MR_def_label(fn__ll_backend__opt_util__can_instr_branch_away_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module10)
	MR_init_entry1(ll_backend__opt_util__next_assign_to_redoip_6_0);
	MR_init_label8(ll_backend__opt_util__next_assign_to_redoip_6_0,63,10,12,3,4,13,32,15)
	MR_init_label1(ll_backend__opt_util__next_assign_to_redoip_6_0,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__next_assign_to_redoip_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_tempr4 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr4,3,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i4);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i10);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i3);
	}
	MR_sv(1) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i12);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i13);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i15);
	}
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__opt_util__next_assign_to_redoip_6_0_i17);
MR_def_label(ll_backend__opt_util__next_assign_to_redoip_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__opt_util__next_assign_to_redoip_6_0_i63);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module11)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
	MR_init_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,4,13,21,36,23,24,26,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i13));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i26) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i29));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i23);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module12)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
	MR_init_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,4,7,16,24,25,26,29,34)
	MR_init_label6(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,36,40,41,42,38,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i36));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i7) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i16));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i25) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i26);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i42);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i36));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i36));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i38);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i40);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i41);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i42);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0_i36));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module13)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0);
	MR_init_label2(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0_i8);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0_i5);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_mem_ref_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module14)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0);
	MR_init_label3(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,16,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i16);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i16);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i12);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0_i12);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module15)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0);
	MR_init_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,72,8,9,84,14,23,31,32)
	MR_init_label8(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,33,34,36,37,39,85,52,53)
	MR_init_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,55,57,67,71)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i8);
	}
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i85) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i55) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i57) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i72) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i67) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i71));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("touches_nondet_ctrl_instr: block", 32);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i14) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i23));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i32) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i39));
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i53);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i33);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i34);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bool__or_3_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i37);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i37);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i53);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i53);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i52);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0_i53);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bool__or_3_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_lval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_rval_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_components_1_0);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module16)
	MR_init_entry1(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
	MR_init_label4(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,17,3,4,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_instr_1_0,
		fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0_i17);
MR_def_label(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module17)
	MR_init_entry1(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
	MR_init_label4(fn__ll_backend__opt_util__can_instr_fall_through_1_0,36,8,9,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__can_instr_fall_through_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i8);
	}
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__can_instr_fall_through_1_0_i35));
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__can_block_fall_through_2_0);
MR_def_label(fn__ll_backend__opt_util__can_instr_fall_through_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module18)
	MR_init_entry1(ll_backend__opt_util__can_block_fall_through_2_0);
	MR_init_label4(ll_backend__opt_util__can_block_fall_through_2_0,16,3,5,4)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module19)
	MR_init_entry1(ll_backend__opt_util__find_no_fallthrough_2_0);
	MR_init_label4(ll_backend__opt_util__find_no_fallthrough_2_0,20,5,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__find_no_fallthrough_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_no_fallthrough_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
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
		ll_backend__opt_util__find_no_fallthrough_2_0_i7);
MR_def_label(ll_backend__opt_util__find_no_fallthrough_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module20)
	MR_init_entry1(ll_backend__opt_util__find_first_label_2_0);
	MR_init_label2(ll_backend__opt_util__find_first_label_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__find_first_label_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_first_label_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("cannot find first label", 23);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__opt_util__find_first_label_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_first_label_2_0_i5);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__find_first_label_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(ll_backend__opt_util__find_first_label_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module21)
	MR_init_entry1(ll_backend__opt_util__skip_to_next_label_3_0);
	MR_init_label3(ll_backend__opt_util__skip_to_next_label_3_0,19,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__skip_to_next_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_to_next_label_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__skip_to_next_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__skip_to_next_label_3_0_i4);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
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

MR_BEGIN_MODULE(ll_backend__opt_util_module22)
	MR_init_entry1(ll_backend__opt_util__is_this_label_next_3_0);
	MR_init_label6(ll_backend__opt_util__is_this_label_next_3_0,45,3,7,14,12,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i3);
	}
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(3);
	continue;
	}
	break; } /* end while */
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
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_this_label_next_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module23)
	MR_init_entry1(ll_backend__opt_util__is_proceed_next_2_0);
	MR_init_label7(ll_backend__opt_util__is_proceed_next_2_0,2,4,10,12,15,18,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i4);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i10);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i12);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i15);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,1);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_proceed_next_2_0_i18);
MR_def_label(ll_backend__opt_util__is_proceed_next_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_proceed_next_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
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


MR_BEGIN_MODULE(ll_backend__opt_util_module24)
	MR_init_entry1(ll_backend__opt_util__is_sdproceed_next_sf_3_0);
	MR_init_label8(ll_backend__opt_util__is_sdproceed_next_sf_3_0,2,4,10,12,15,23,25,28)
	MR_init_label1(ll_backend__opt_util__is_sdproceed_next_sf_3_0,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i4);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i10);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,0);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i12);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i15);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,1);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i23);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i25);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i25);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_sdproceed_next_sf_3_0_i28);
MR_def_label(ll_backend__opt_util__is_sdproceed_next_sf_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_sdproceed_next_sf_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
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
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
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


MR_BEGIN_MODULE(ll_backend__opt_util_module25)
	MR_init_entry1(ll_backend__opt_util__is_sdproceed_next_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ll_backend__opt_util_module26)
	MR_init_entry1(ll_backend__opt_util__is_succeed_next_2_0);
	MR_init_label3(ll_backend__opt_util__is_succeed_next_2_0,2,5,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_succeed_next_2_0_i5);
MR_def_label(ll_backend__opt_util__is_succeed_next_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_succeed_next_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
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


MR_BEGIN_MODULE(ll_backend__opt_util_module27)
	MR_init_entry1(ll_backend__opt_util__filter_out_r1_3_0);
	MR_init_label5(ll_backend__opt_util__filter_out_r1_3_0,11,12,4,10,2)
MR_BEGIN_CODE

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
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i10);
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
MR_def_label(ll_backend__opt_util__filter_out_r1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_r1_3_0_i12);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module28)
	MR_init_entry1(ll_backend__opt_util__filter_out_livevals_2_0);
	MR_init_label4(ll_backend__opt_util__filter_out_livevals_2_0,7,8,6,2)
MR_BEGIN_CODE

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
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_livevals_2_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__filter_out_livevals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_livevals_2_0_i8);
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_const_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module29)
	MR_init_entry1(ll_backend__opt_util__is_forkproceed_next_3_0);
	MR_init_label8(ll_backend__opt_util__is_forkproceed_next_3_0,2,11,13,15,16,18,19,20)
	MR_init_label8(ll_backend__opt_util__is_forkproceed_next_3_0,22,23,4,33,35,37,38,40)
	MR_init_label5(ll_backend__opt_util__is_forkproceed_next_3_0,41,42,44,45,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_forkproceed_next_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_labels_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i2);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_ctfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r6;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i11);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_sf_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i13);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i15);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval_const);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i16);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i18);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i19);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i20);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i22);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i23);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r6;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i33);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_sf_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i35);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i37);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval_const);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i38);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i40);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i41);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i42);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i44);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__opt_util__is_forkproceed_next_3_0_i45);
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_forkproceed_next_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_forkproceed_next_3_0,1)
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


MR_BEGIN_MODULE(ll_backend__opt_util_module30)
	MR_init_entry1(ll_backend__opt_util__straight_alternative_2_4_0);
	MR_init_label8(ll_backend__opt_util__straight_alternative_2_4_0,62,24,3,5,11,13,10,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__straight_alternative_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i3);
	}
	}
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(3), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i62);
	}
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i24);
	}
	MR_r3 = MR_ctfield(3, MR_sv(3), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i62);
	}
MR_def_label(ll_backend__opt_util__straight_alternative_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__straight_alternative_2_4_0_i62);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module31)
	MR_init_entry1(ll_backend__opt_util__straight_alternative_3_0);
	MR_init_label3(ll_backend__opt_util__straight_alternative_3_0,2,4,1)
MR_BEGIN_CODE

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

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module32)
	MR_init_entry1(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	MR_init_label7(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,21,42,23,24,26,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i28);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i42) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i26) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i28) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i29));
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i23);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__lval_refers_stackvars_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("found lvar in lval_refers_stackvars", 35);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module33)
	MR_init_entry1(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	MR_init_label8(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,4,6,8,10,14,15,16,12)
	MR_init_label1(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i8) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i10));
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("found var in rval_refers_stackvars", 34);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i8) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i10));
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i11);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i12);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i14);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i15);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i16);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i8) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__rval_refers_stackvars_1_0_i10));
MR_def_label(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module34)
	MR_init_entry1(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0);
	MR_init_label4(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,10,18,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i10);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i18);
	}
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i6);
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__mem_ref_refers_stackvars_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module35)
	MR_init_entry1(ll_backend__opt_util__no_stack_straight_line_2_4_0);
	MR_init_label8(ll_backend__opt_util__no_stack_straight_line_2_4_0,44,3,21,8,10,12,6,4)
	MR_init_label1(ll_backend__opt_util__no_stack_straight_line_2_4_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__no_stack_straight_line_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i8);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i21);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i5);
	}
	}
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i6);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__opt_util__no_stack_straight_line_2_4_0_i44);
	}
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ll_backend__opt_util__no_stack_straight_line_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module36)
	MR_init_entry1(ll_backend__opt_util__no_stack_straight_line_3_0);
	MR_init_label2(ll_backend__opt_util__no_stack_straight_line_3_0,2,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module37)
	MR_init_entry1(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0);
	MR_init_label8(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,71,3,35,13,14,15,17,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_tempr4 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i3);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r5),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i13);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i71);
	}
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1));
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i15);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i17);
MR_def_label(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_2_5_0_i71);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module38)
	MR_init_entry1(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
	MR_init_label3(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,2,4,1)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ll_backend__opt_util_module39)
	MR_init_entry1(ll_backend__opt_util__filter_out_labels_2_0);
	MR_init_label4(ll_backend__opt_util__filter_out_labels_2_0,7,8,6,2)
MR_BEGIN_CODE

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
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TEST(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_labels_2_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__filter_out_labels_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_labels_2_0_i8);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module40)
	MR_init_entry1(ll_backend__opt_util__filter_out_bad_livevals_2_0);
	MR_init_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0,4,8,12,13,14,15,16,17)
	MR_init_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0,18,19,20,21,22,23,24,25)
	MR_init_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0,26,27,28,29,30,31,32,33)
	MR_init_label8(ll_backend__opt_util__filter_out_bad_livevals_2_0,34,35,36,37,38,39,40,41)
	MR_init_label4(ll_backend__opt_util__filter_out_bad_livevals_2_0,42,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__filter_out_bad_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__filter_out_bad_livevals_2_0,
		ll_backend__opt_util__filter_out_bad_livevals_2_0_i4);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__opt_util__filter_out_bad_livevals_2_0_i8);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i16));
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i13);
	}
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i27) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__filter_out_bad_livevals_2_0_i42));
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_out_bad_livevals_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__opt_util__filter_out_bad_livevals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module41)
	MR_init_entry1(ll_backend__opt_util__filter_in_livevals_2_0);
	MR_init_label4(ll_backend__opt_util__filter_in_livevals_2_0,7,8,6,2)
MR_BEGIN_CODE

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
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_in_livevals_2_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__filter_in_livevals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__opt_util__filter_in_livevals_2_0_i8);
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
	MR_init_label8(ll_backend__opt_util__is_const_condition_2_0,20,13,15,17,5,6,73,2)
	MR_init_label2(ll_backend__opt_util__is_const_condition_2_0,70,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__is_const_condition_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i70);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i5);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i13);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,12)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__opt_util__is_const_condition_2_0_i20);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,8)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_localcall_lab(ll_backend__opt_util__is_const_condition_2_0,
		ll_backend__opt_util__is_const_condition_2_0_i15);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(bool__not_2_0,
		ll_backend__opt_util__is_const_condition_2_0_i17);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__is_const_condition_2_0_i73);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("non-boolean constant as if-then-else condition", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__opt_util__is_const_condition_2_0_i2);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__is_const_condition_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
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
	MR_init_label4(fn__ll_backend__opt_util__livevals_addr_1_0,4,11,18,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__livevals_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__livevals_addr_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__livevals_addr_1_0_i11) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__livevals_addr_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__livevals_addr_1_0_i24));
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i24);
	}
	MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i18);
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__livevals_addr_1_0_i24);
	}
	}
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__livevals_addr_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module44)
	MR_init_entry1(ll_backend__opt_util__find_label_code_addrs_3_0);
	MR_init_label4(ll_backend__opt_util__find_label_code_addrs_3_0,7,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__find_label_code_addrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i2);
	}
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i5);
	}
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
MR_def_label(ll_backend__opt_util__find_label_code_addrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__find_label_code_addrs_3_0_i7);
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


MR_BEGIN_MODULE(ll_backend__opt_util_module45)
	MR_init_entry1(ll_backend__opt_util__foreign_proc_labels_5_0);
	MR_init_label7(ll_backend__opt_util__foreign_proc_labels_5_0,3,2,5,4,7,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__foreign_proc_labels_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i2);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i5);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i4);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i7);
	}
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i6);
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_labels_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__foreign_proc_labels_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module46)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0);
	MR_init_label3(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 4);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module47)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0);
	MR_init_label3(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

MR_BEGIN_MODULE(ll_backend__opt_util_module48)
	MR_init_entry1(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0);
	MR_init_label8(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,4,8,9,10,11,12,13,14)
	MR_init_label2(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,3,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,
		ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i4);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i14));
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__foreign_proc_inputs_get_rvals_1_0,
		ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i9);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i10);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__foreign_proc_outputs_get_lvals_1_0,
		ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i12);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i13);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i34);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0_i34);
	}
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module49)
	MR_init_entry1(ll_backend__opt_util__instr_rvals_and_lvals_3_0);
	MR_init_label8(ll_backend__opt_util__instr_rvals_and_lvals_3_0,37,8,9,11,21,28,32,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__instr_rvals_and_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i8);
	}
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_rvals_and_lvals_3_0_i36));
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0);
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__opt_util__foreign_proc_components_get_rvals_and_lvals_3_0);
MR_def_label(ll_backend__opt_util__instr_rvals_and_lvals_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module50)
	MR_init_entry1(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0);
	MR_init_label5(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__instr_rvals_and_lvals_3_0,
		ll_backend__opt_util__instr_list_rvals_and_lvals_3_0_i4);
MR_def_label(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_localcall_lab(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,
		ll_backend__opt_util__instr_list_rvals_and_lvals_3_0_i5);
MR_def_label(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_rvals_and_lvals_3_0_i6);
MR_def_label(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_rvals_and_lvals_3_0_i7);
MR_def_label(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__instr_list_rvals_and_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__rval_list_addrs_3_0);
MR_decl_entry(ll_backend__exprn_aux__lval_list_addrs_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;

MR_BEGIN_MODULE(ll_backend__opt_util_module51)
	MR_init_entry1(ll_backend__opt_util__instr_labels_3_0);
	MR_init_label7(ll_backend__opt_util__instr_labels_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__instr_rvals_and_lvals_3_0,
		ll_backend__opt_util__instr_labels_3_0_i3);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_list_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i4);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__lval_list_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i5);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__instr_labels_3_0_i6);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__opt_util__instr_labels_3_0_i7);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__find_label_code_addrs_3_0,
		ll_backend__opt_util__instr_labels_3_0_i8);
MR_def_label(ll_backend__opt_util__instr_labels_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module52)
	MR_init_entry1(ll_backend__opt_util__instr_list_labels_3_0);
	MR_init_label5(ll_backend__opt_util__instr_list_labels_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__instr_list_labels_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_list_labels_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__instr_labels_3_0,
		ll_backend__opt_util__instr_list_labels_3_0_i4);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_localcall_lab(ll_backend__opt_util__instr_list_labels_3_0,
		ll_backend__opt_util__instr_list_labels_3_0_i5);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_labels_3_0_i6);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__opt_util__instr_list_labels_3_0_i7);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__opt_util__instr_list_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module53)
	MR_init_entry1(ll_backend__opt_util__instr_labels_2_3_0);
	MR_init_label8(ll_backend__opt_util__instr_labels_2_3_0,9,12,13,59,15,17,18,20)
	MR_init_label8(ll_backend__opt_util__instr_labels_2_3_0,33,35,37,36,39,38,41,40)
	MR_init_label3(ll_backend__opt_util__instr_labels_2_3_0,43,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__instr_labels_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i59);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i45) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__instr_labels_2_3_0_i46));
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__opt_util__instr_list_labels_3_0);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i15);
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("instr_labels_2: decr_sp_and_return", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i37);
	}
	MR_r2 = MR_ctfield(3, MR_r1, 5);
	MR_r3 = MR_ctfield(3, MR_r1, 6);
	MR_r4 = MR_ctfield(3, MR_r1, 7);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i36);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(3, MR_r1, 5);
	MR_r3 = MR_ctfield(3, MR_r1, 6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_tempr2, 7);
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i39);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i38);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i41);
	}
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i40);
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__instr_labels_2_3_0_i43);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__instr_labels_2_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module54)
	MR_init_entry1(ll_backend__opt_util__possible_targets_3_0);
	MR_init_label8(ll_backend__opt_util__possible_targets_3_0,47,8,9,12,18,22,24,25)
	MR_init_label4(ll_backend__opt_util__possible_targets_3_0,40,80,43,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__possible_targets_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i8);
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__possible_targets_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i80) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__possible_targets_3_0_i46));
MR_def_label(ll_backend__opt_util__possible_targets_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("block in possible_targets", 25);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__possible_targets_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__possible_targets_3_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__possible_targets_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("possible_targets: decr_sp_and_return", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 4);
	MR_r2 = MR_ctfield(3, MR_tempr1, 5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__foreign_proc_labels_5_0,
		ll_backend__opt_util__possible_targets_3_0_i43);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__opt_util__possible_targets_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module55)
	MR_init_entry1(ll_backend__opt_util__count_temps_inputs_5_0);
	MR_init_label2(ll_backend__opt_util__count_temps_inputs_5_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_inputs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_inputs_5_0_i2);
	}
MR_def_label(ll_backend__opt_util__count_temps_inputs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	break; } /* end while */
MR_def_label(ll_backend__opt_util__count_temps_inputs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module56)
	MR_init_entry1(ll_backend__opt_util__count_temps_lval_5_0);
	MR_init_label4(ll_backend__opt_util__count_temps_lval_5_0,6,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_lval_5_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__opt_util__count_temps_lval_5_0_i6);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__opt_util__count_temps_lval_5_0_i7);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__count_temps_lval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module57)
	MR_init_entry1(ll_backend__opt_util__count_temps_outputs_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_outputs_5_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_outputs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_outputs_5_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_outputs_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_outputs_5_0_i11);
MR_def_label(ll_backend__opt_util__count_temps_outputs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module58)
	MR_init_entry1(ll_backend__opt_util__count_temps_components_5_0);
	MR_init_label6(ll_backend__opt_util__count_temps_components_5_0,26,7,9,10,21,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__count_temps_components_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i3);
	}
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__opt_util__count_temps_components_5_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_components_5_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_components_5_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_components_5_0_i21));
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_inputs_5_0,
		ll_backend__opt_util__count_temps_components_5_0_i10);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_outputs_5_0,
		ll_backend__opt_util__count_temps_components_5_0_i10);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i26);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_components_5_0_i26);
MR_def_label(ll_backend__opt_util__count_temps_components_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module59)
	MR_init_entry1(ll_backend__opt_util__count_temps_instr_5_0);
	MR_init_label8(ll_backend__opt_util__count_temps_instr_5_0,53,8,63,64,58,41,46,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__count_temps_instr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_5_0_i8);
	}
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i46) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__count_temps_instr_5_0_i51));
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i58);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_lval_5_0,
		ll_backend__opt_util__count_temps_instr_5_0_i58);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_111_112_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_116_101_109_112_115_95_114_118_97_108_95_95_91_49_93_95_48_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_111_112_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_116_101_109_112_115_95_114_118_97_108_95_95_91_49_93_95_48_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_components_5_0);
MR_def_label(ll_backend__opt_util__count_temps_instr_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__opt_util__count_temps_lval_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module60)
	MR_init_entry1(ll_backend__opt_util__count_temps_instr_list_5_0);
	MR_init_label3(ll_backend__opt_util__count_temps_instr_list_5_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__count_temps_instr_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_list_5_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_instr_5_0,
		ll_backend__opt_util__count_temps_instr_list_5_0_i4);
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__opt_util__count_temps_instr_list_5_0_i11);
MR_def_label(ll_backend__opt_util__count_temps_instr_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module61)
	MR_init_entry1(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0);
	MR_init_label5(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,24,3,6,7,4)
MR_BEGIN_CODE

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
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0_i24);
MR_def_label(fn__ll_backend__opt_util__rvals_refer_stackvars_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
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

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__bool__or_list_1_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module62)
	MR_init_entry1(fn__ll_backend__opt_util__instr_refers_to_stack_1_0);
	MR_init_label8(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,9,106,12,18,21,30,87,88)
	MR_init_label8(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,107,37,40,49,89,90,108,58)
	MR_init_label5(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,59,73,109,104,84)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__instr_refers_to_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i106) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i18) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i73) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i107) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i108) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i73) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i73) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i73) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i73) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i84));
	}
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 3);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i12);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i59);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i30));
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88));
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i88);
	}
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i37);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i40) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i49));
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i90));
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i90);
	}
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i58);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i59);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__instr_refers_to_stack_1_0_i104);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_list_1_0);
MR_def_label(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module63)
	MR_init_entry1(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
	MR_init_label6(fn__ll_backend__opt_util__block_refers_to_stack_1_0,21,11,3,4,7,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__block_refers_to_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i3);
	}
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__instr_refers_to_stack_1_0,
		fn__ll_backend__opt_util__block_refers_to_stack_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i6);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		fn__ll_backend__opt_util__block_refers_to_stack_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__block_refers_to_stack_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ll_backend__opt_util__block_refers_to_stack_1_0_i21);
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
	MR_init_label8(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,157,42,38,39,5,6,10,7)
	MR_init_label8(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,8,19,14,15,22,24,26,30)
	MR_init_label5(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,31,33,35,37,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i38);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i42);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,42)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i39);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,39)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1));
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(4) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i8);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i10);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i157);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i15);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i15);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i15);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i19);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,20)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i14);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_sv(3) != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i14);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i22);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i24);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i26);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,26)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i31);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i33);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i35);
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,35)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
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
	MR_init_label8(fn__ll_backend__opt_util__format_proc_label_1_0,4,5,6,7,8,3,10,11)
	MR_init_label6(fn__ll_backend__opt_util__format_proc_label_1_0,12,13,14,15,16,17)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i4);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i5);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i6);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i7);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i8);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 2);
	MR_sv(3) = MR_ctfield(1, MR_r1, 3);
	MR_sv(4) = MR_ctfield(1, MR_r1, 4);
	MR_sv(5) = MR_ctfield(1, MR_r1, 5);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i10);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i11);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i12);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i13);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i14);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i15);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i16);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		fn__ll_backend__opt_util__format_proc_label_1_0_i17);
MR_def_label(fn__ll_backend__opt_util__format_proc_label_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_util__format_label_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__format_proc_label_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module67)
	MR_init_entry1(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0);
	MR_init_label5(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,10,3,5,8,2)
MR_BEGIN_CODE

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
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,19)) {
		MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0_i5);
	}
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r4 = MR_r5;
MR_def_label(ll_backend__opt_util__has_both_incr_decr_sp_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,20)) {
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
	MR_init_label2(ll_backend__opt_util__has_both_incr_decr_sp_1_0,2,1)
MR_BEGIN_CODE

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
	MR_init_label4(ll_backend__opt_util__lval_access_rvals_2_0,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__lval_access_rvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__opt_util__lval_access_rvals_2_0_i24);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__lval_access_rvals_2_0_i25));
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__lval_access_rvals_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("lvar detected in lval_access_rvals", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module70)
	MR_init_entry1(ll_backend__opt_util__rval_free_of_lval_2_0);
	MR_init_label8(ll_backend__opt_util__rval_free_of_lval_2_0,4,7,9,12,14,17,23,19)
	MR_init_label2(ll_backend__opt_util__rval_free_of_lval_2_0,35,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__rval_free_of_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i17));
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i7);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i9);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__opt_util__rvals_free_of_lval_2_0);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_util.m", 10);
	MR_r2 = (MR_Word) MR_string_const("found var in rval_free_of_lval", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i35);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i17));
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i35);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i19);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__rval_free_of_lval_2_0,
		ll_backend__opt_util__rval_free_of_lval_2_0_i23);
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__rval_free_of_lval_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i17));
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__rval_free_of_lval_2_0_i17));
MR_def_label(ll_backend__opt_util__rval_free_of_lval_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
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
	MR_init_label4(ll_backend__opt_util__rvals_free_of_lval_2_0,17,4,2,1)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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
	MR_init_label4(ll_backend__opt_util__count_incr_hp_2_3_0,7,3,5,2)
MR_BEGIN_CODE

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
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,11)) {
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
MR_BEGIN_CODE

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
	MR_init_label8(ll_backend__opt_util__propagate_livevals_2_3_0,6,4,7,11,13,10,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__propagate_livevals_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i4);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
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
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i17);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i7);
	}
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i13);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i11);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__propagate_livevals_2_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i13);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i17);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_3_0_i17);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__propagate_livevals_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module75)
	MR_init_entry1(ll_backend__opt_util__propagate_livevals_2_0);
	MR_init_label3(ll_backend__opt_util__propagate_livevals_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__propagate_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__propagate_livevals_2_3_0,
		ll_backend__opt_util__propagate_livevals_2_0_i4);
MR_def_label(ll_backend__opt_util__propagate_livevals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__reverse_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module76)
	MR_init_entry1(ll_backend__opt_util__replace_labels_label_3_0);
	MR_init_label2(ll_backend__opt_util__replace_labels_label_3_0,3,2)
MR_BEGIN_CODE

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
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_sv(1);
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
	MR_init_label8(ll_backend__opt_util__replace_labels_comps_3_0,6,9,10,19,11,13,12,16)
	MR_init_label1(ll_backend__opt_util__replace_labels_comps_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_comps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_comps_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_comps_3_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_comps_3_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_comps_3_0_i9));
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i10);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r5;
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i11);
	}
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r5;
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_comps_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_comps_3_0_i16);
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_comps_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module78)
	MR_init_entry1(ll_backend__opt_util__replace_labels_code_addr_3_0);
	MR_init_label8(ll_backend__opt_util__replace_labels_code_addr_3_0,4,5,6,7,8,9,10,38)
	MR_init_label3(ll_backend__opt_util__replace_labels_code_addr_3_0,13,12,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_code_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i39));
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_code_addr_3_0_i10));
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_code_addr_3_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_code_addr_3_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__opt_util__replace_labels_code_addr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module79)
	MR_init_entry1(ll_backend__opt_util__replace_labels_label_list_3_0);
	MR_init_label4(ll_backend__opt_util__replace_labels_label_list_3_0,5,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_label_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_label_list_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_label_list_3_0_i5);
MR_def_label(ll_backend__opt_util__replace_labels_label_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_label_list_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_label_list_3_0,
		ll_backend__opt_util__replace_labels_label_list_3_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_label_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_label_list_3_0,
		ll_backend__opt_util__replace_labels_label_list_3_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_label_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_label_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module80)
	MR_init_entry1(ll_backend__opt_util__replace_labels_lval_3_0);
	MR_init_label8(ll_backend__opt_util__replace_labels_lval_3_0,4,5,6,7,8,9,10,13)
	MR_init_label8(ll_backend__opt_util__replace_labels_lval_3_0,57,18,58,20,59,22,60,24)
	MR_init_label8(ll_backend__opt_util__replace_labels_lval_3_0,61,26,62,28,29,63,31,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i13));
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i10));
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_lval_3_0_i50));
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i18);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i20);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i22);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i24);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i26);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i28);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i29);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_lval_3_0_i31);
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_lval_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module81)
	MR_init_entry1(ll_backend__opt_util__replace_labels_rval_3_0);
	MR_init_label8(ll_backend__opt_util__replace_labels_rval_3_0,66,5,68,8,9,27,24,25)
	MR_init_label8(ll_backend__opt_util__replace_labels_rval_3_0,26,22,23,10,13,14,17,21)
	MR_init_label1(ll_backend__opt_util__replace_labels_rval_3_0,67)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i9));
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i5);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i8);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i22);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i24);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_mem_ref_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i27);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i25);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i26);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i23);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_rval_3_0_i17));
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,1);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i67);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i67);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_rval_3_0_i67);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_rval_3_0_i21);
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__opt_util__replace_labels_rval_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module82)
	MR_init_entry1(ll_backend__opt_util__replace_labels_mem_ref_3_0);
	MR_init_label2(ll_backend__opt_util__replace_labels_mem_ref_3_0,6,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__replace_labels_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_mem_ref_3_0_i17);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_mem_ref_3_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_mem_ref_3_0_i6);
MR_def_label(ll_backend__opt_util__replace_labels_mem_ref_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__opt_util__replace_labels_mem_ref_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module83)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instr_4_0);
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,4,5,8,230,10,11,14,15)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,231,17,18,240,23,232,26,28)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,25,233,32,234,35,36,37,235)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,41,42,43,44,47,48,51,52)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,55,56,57,60,61,64,65,68)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,69,72,73,76,77,80,81,84)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,236,90,91,92,89,96,97,94)
	MR_init_label8(ll_backend__opt_util__replace_labels_instr_4_0,101,102,99,105,106,107,237,110)
	MR_init_label4(ll_backend__opt_util__replace_labels_instr_4_0,238,112,113,227)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i8));
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i230) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i231) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i232) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i233) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i234) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i235) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i65) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i69) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i73) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i77) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i81) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i236) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i237) MR_AND
		MR_LABEL_AP(ll_backend__opt_util__replace_labels_instr_4_0_i238));
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i10);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i14);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i15);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i17);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_r3 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i240);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i23);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_ctfield(3, MR_sv(1), 1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i26);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i25);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__this_file_0_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i28);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("eliminated label in replace_labels_instr", 40);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i32);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_list_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i37);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i36);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_list_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i37);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i43);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i42);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i43);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i47);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i51);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_sv(5) = MR_ctfield(3, MR_r1, 5);
	MR_sv(6) = MR_ctfield(3, MR_r1, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i55);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i56);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i60);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i64);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i68);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i72);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i76);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i80);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i227);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_rval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i84);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 4);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i90);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(3, MR_r1, 5);
	MR_sv(7) = MR_ctfield(3, MR_r1, 6);
	MR_sv(8) = MR_ctfield(3, MR_r1, 7);
	MR_sv(9) = MR_ctfield(3, MR_r1, 8);
	MR_sv(10) = MR_ctfield(3, MR_r1, 9);
	MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i89);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(3, MR_r1, 5);
	MR_sv(7) = MR_ctfield(3, MR_r1, 6);
	MR_sv(8) = MR_ctfield(3, MR_r1, 7);
	MR_sv(9) = MR_ctfield(3, MR_r1, 8);
	MR_sv(10) = MR_ctfield(3, MR_r1, 9);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i91);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2088__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__this_file_0_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i92);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = (MR_Word) MR_string_const("trying to replace Mercury label in C code", 41);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i89);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i94);
	}
	MR_sv(11) = MR_ctfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i96);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2097__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__this_file_0_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i97);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = (MR_Word) MR_string_const("trying to replace Mercury label with layout", 43);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i94);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i99);
	}
	MR_sv(11) = MR_ctfield(1, MR_sv(7), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i101);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2106__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__this_file_0_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i102);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = (MR_Word) MR_string_const("trying to replace Mercury label with layout", 43);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i99);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instr_4_0_i105);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(4);
	MR_tfield(3, MR_r1, 4) = MR_sv(5);
	MR_tfield(3, MR_r1, 5) = MR_sv(6);
	MR_tfield(3, MR_r1, 6) = MR_sv(7);
	MR_tfield(3, MR_r1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 8) = MR_sv(9);
	MR_tfield(3, MR_r1, 9) = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(8), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i106);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i107);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i110);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i112);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_lval_3_0,
		ll_backend__opt_util__replace_labels_instr_4_0_i113);
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instr_4_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module84)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instruction_4_0);
	MR_init_label1(ll_backend__opt_util__replace_labels_instruction_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instruction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instr_4_0,
		ll_backend__opt_util__replace_labels_instruction_4_0_i2);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module85)
	MR_init_entry1(ll_backend__opt_util__replace_labels_instruction_list_5_0);
	MR_init_label6(ll_backend__opt_util__replace_labels_instruction_list_5_0,8,7,4,11,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_util__replace_labels_instruction_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i4);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__opt_util__replace_labels_instruction_list_5_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
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
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_sv(4);
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instr_4_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i11);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__opt_util__replace_labels_instruction_list_5_0_i13);
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__opt_util__replace_labels_instruction_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;
MR_decl_entry(bool__or_list_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module86)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0);
	MR_init_label4(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,22,23,20,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i17) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i22) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i23) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i17));
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i20);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0_i20);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(bool__or_list_2_0);
MR_def_label(fn__ll_backend__opt_util__foreign_proc_component_refers_stackvars_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module87)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0);
	MR_init_label1(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);
	}
MR_def_label(fn__ll_backend__opt_util__foreign_proc_input_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module88)
	MR_init_entry1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0);
	MR_init_label1(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
	}
MR_def_label(fn__ll_backend__opt_util__foreign_proc_output_refers_stackvars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module89)
	MR_init_entry1(__Unify___ll_backend__opt_util__instrmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__instrmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__opt_util_module90)
	MR_init_entry1(__Compare___ll_backend__opt_util__instrmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__instrmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module91)
	MR_init_entry1(__Unify___ll_backend__opt_util__lvalmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__lvalmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module92)
	MR_init_entry1(__Compare___ll_backend__opt_util__lvalmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__lvalmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module93)
	MR_init_entry1(__Unify___ll_backend__opt_util__succmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__succmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module94)
	MR_init_entry1(__Compare___ll_backend__opt_util__succmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__succmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module95)
	MR_init_entry1(__Unify___ll_backend__opt_util__tailmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__opt_util__tailmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module96)
	MR_init_entry1(__Compare___ll_backend__opt_util__tailmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__opt_util__tailmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module97)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2088__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2088__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module98)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2097__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2097__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module99)
	MR_init_entry1(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2106__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_util__IntroducedFrom__pred__replace_labels_instr__2106__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_util_module100)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_111_112_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_116_101_109_112_115_95_114_118_97_108_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_111_112_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_116_101_109_112_115_95_114_118_97_108_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__opt_util__init(void);
void mercury__ll_backend__opt_util__init_type_tables(void);
void mercury__ll_backend__opt_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__opt_util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__opt_util__init_complexity_procs(void);
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
		mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0,
		ll_backend__opt_util__tailmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0,
		ll_backend__opt_util__succmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0,
		ll_backend__opt_util__lvalmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0,
		ll_backend__opt_util__instrmap_0_0);
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
		&mercury_data_ll_backend__opt_util__type_ctor_info_tailmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_succmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_lvalmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__opt_util__type_ctor_info_instrmap_0);
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

void mercury__ll_backend__opt_util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__opt_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
