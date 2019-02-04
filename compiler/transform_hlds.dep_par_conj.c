/*
** Automatically generated from `dep_par_conj.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__dep_par_conj__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.dep_par_conj.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.dep_par_conj.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.dep_par_conj.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.dep_par_conj.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.dep_par_conj.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.dep_par_conj.c"
#line 48 "transform_hlds.dep_par_conj.c"
#include "transform_hlds.dep_par_conj.mh"

#line 51 "transform_hlds.dep_par_conj.c"
#line 52 "transform_hlds.dep_par_conj.c"
#ifndef TRANSFORM_HLDS__DEP_PAR_CONJ_DECL_GUARD
#define TRANSFORM_HLDS__DEP_PAR_CONJ_DECL_GUARD

#line 56 "transform_hlds.dep_par_conj.c"
#line 57 "transform_hlds.dep_par_conj.c"

#endif
#line 60 "transform_hlds.dep_par_conj.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[14];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_map_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_dep_par_info_0,
	mercury_data_transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0;
MR_decl_label3(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0, 2,5,1)
MR_decl_label3(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0, 2,5,1)
MR_decl_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0, 18,19,20,23,21,25,26,27)
MR_decl_label4(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0, 28,29,30,31)
MR_decl_label4(transform_hlds__dep_par_conj__add_pending_par_procs_7_0, 12,4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__allocate_future_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(transform_hlds__dep_par_conj__allocate_future_9_0, 10,11,12)
MR_decl_label4(transform_hlds__dep_par_conj__any_output_arguments_2_0, 19,6,3,1)
MR_decl_label4(transform_hlds__dep_par_conj__changed_var_3_0, 3,4,6,2)
MR_decl_label8(transform_hlds__dep_par_conj__create_new_pred_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__dep_par_conj__create_new_pred_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__dep_par_conj__create_new_pred_6_0, 18,19,20,21,22,23,24,25)
MR_decl_label7(transform_hlds__dep_par_conj__create_new_pred_6_0, 26,27,28,29,30,31,32)
MR_decl_label4(transform_hlds__dep_par_conj__dependent_par_conj_4_0, 2,3,4,5)
MR_decl_label8(transform_hlds__dep_par_conj__find_shared_variables_2_7_0, 16,4,5,6,7,8,9,3)
MR_decl_label4(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0, 2,3,4,5)
MR_decl_label7(transform_hlds__dep_par_conj__futurise_argtypes_4_0, 3,7,8,9,6,10,5)
MR_decl_label2(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0, 2,3)
MR_decl_label8(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0, 2,3,4,5,6,9,13,10)
MR_decl_label7(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0, 14,15,16,17,18,19,20)
MR_decl_label3(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0, 4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0, 4,3,6,7,9,13,10,14)
MR_decl_label8(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0, 15,5,21,22,25,29,26,30)
MR_decl_label6(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0, 31,32,33,34,35,36)
MR_decl_label3(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0, 3,4,2)
MR_decl_label8(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0, 67,13,74,17,68,19,69,22)
MR_decl_label8(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0, 24,21,26,70,29,30,71,32)
MR_decl_label7(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0, 72,34,35,36,37,73,39)
MR_decl_label3(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0, 4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0, 2,3,4,5,6,9,13,10)
MR_decl_label7(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0, 14,15,16,17,18,19,20)
MR_decl_label3(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0, 4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0, 4,3,6,7,9,13,10,14)
MR_decl_label8(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0, 15,5,21,22,25,29,26,30)
MR_decl_label6(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0, 31,32,33,34,35,36)
MR_decl_label3(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0, 3,4,2)
MR_decl_label8(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0, 75,13,82,17,76,19,77,22)
MR_decl_label8(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0, 21,25,78,28,79,30,80,34)
MR_decl_label5(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0, 32,37,38,81,41)
MR_decl_label3(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0, 4,5,3)
MR_decl_label3(transform_hlds__dep_par_conj__is_future_type_1_0, 2,3,1)
MR_decl_label3(transform_hlds__dep_par_conj__is_signal_goal_1_0, 4,5,1)
MR_decl_label3(transform_hlds__dep_par_conj__is_wait_goal_1_0, 4,5,1)
MR_decl_label8(transform_hlds__dep_par_conj__make_future_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__dep_par_conj__make_future_9_0, 10)
MR_decl_label2(transform_hlds__dep_par_conj__make_get_goal_3_0, 2,3)
MR_decl_label8(transform_hlds__dep_par_conj__maybe_replace_call_7_0, 2,4,5,7,8,9,10,25)
MR_decl_label8(transform_hlds__dep_par_conj__maybe_replace_call_7_0, 11,14,15,16,17,18,19,20)
MR_decl_label8(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0, 2,3,4,6,7,8,9,10)
MR_decl_label5(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0, 17,16,20,5,22)
MR_decl_label5(transform_hlds__dep_par_conj__number_future_args_5_0, 20,5,7,4,3)
MR_decl_label2(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0, 2,3)
MR_decl_label4(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0, 2,3,5,6)
MR_decl_label8(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0, 2,3,4,5,6,7,8,10)
MR_decl_label8(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0, 11,12,13,14,19,20,9,22)
MR_decl_label3(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0, 23,24,25)
MR_decl_label2(transform_hlds__dep_par_conj__relevant_signal_goal_3_0, 6,1)
MR_decl_label2(transform_hlds__dep_par_conj__relevant_wait_goal_3_0, 6,1)
MR_decl_label3(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0, 4,5,3)
MR_decl_label4(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0, 4,5,6,3)
MR_decl_label8(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0, 48,11,13,14,15,16,49,18)
MR_decl_label8(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0, 50,20,51,22,52,24,53,26)
MR_decl_label3(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0, 27,28,29)
MR_decl_label3(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0, 4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(transform_hlds__dep_par_conj__replace_args_with_futures_3_0, 16,3,5,4)
MR_decl_label8(transform_hlds__dep_par_conj__replace_call_6_0, 2,3,4,5,9,8,11,13)
MR_decl_label6(transform_hlds__dep_par_conj__replace_call_6_0, 6,14,15,16,18,19)
MR_decl_label8(transform_hlds__dep_par_conj__replace_head_vars_6_0, 3,10,14,12,18,16,9,23)
MR_decl_label2(transform_hlds__dep_par_conj__replace_head_vars_6_0, 24,8)
MR_decl_label3(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0, 4,5,3)
MR_decl_label8(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0, 62,11,12,7,8,19,20,15)
MR_decl_label7(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0, 16,63,4,5,25,3,28)
MR_decl_label8(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0, 49,12,13,11,14,50,16,51)
MR_decl_label8(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0, 18,52,20,53,22,54,24,25)
MR_decl_label3(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0, 26,27,48)
MR_decl_label3(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0, 4,5,3)
MR_decl_label4(transform_hlds__dep_par_conj__reproduce_future_map_10_0, 2,3,4,5)
MR_decl_label4(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0, 4,5,6,3)
MR_decl_label4(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0, 4,5,6,3)
MR_decl_label2(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0, 2,3)
MR_decl_label8(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0, 8,9,12,13,11,49,16,50)
MR_decl_label8(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0, 18,51,20,52,22,53,24,25)
MR_decl_label2(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0, 26,27)
MR_decl_label4(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0, 4,5,6,3)
MR_decl_label8(transform_hlds__dep_par_conj__transform_conjunct_14_0, 2,3,6,4,8,9,10,11)
MR_decl_label4(transform_hlds__dep_par_conj__transform_conjunct_14_0, 12,13,14,15)
MR_decl_label8(transform_hlds__dep_par_conj__transform_conjunction_13_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__dep_par_conj__var_in_nonlocals_2_0, 2)
MR_decl_label3(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0, 3,4,1)
MR_decl_label2(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0, 2,3)
MR_decl_label6(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0, 4,6,8,10,14,1)
MR_decl_label3(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0, 4,8,1)
MR_decl_label3(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0, 4,8,1)
MR_decl_label3(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0, 4,8,1)
MR_decl_label3(__Unify___transform_hlds__dep_par_conj__par_procs_0_0, 4,8,1)
MR_decl_label7(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0, 3,2,5,21)
MR_decl_label4(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0, 3,2,5,21)
MR_decl_label4(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0, 3,2,5,21)
MR_decl_label4(__Compare___transform_hlds__dep_par_conj__par_procs_0_0, 3,2,5,21)
MR_decl_static(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0)
MR_decl_static(transform_hlds__dep_par_conj__find_shared_variables_2_7_0)
MR_def_extern_entry(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0)
MR_decl_static(transform_hlds__dep_par_conj__transform_conjunction_13_0)
MR_decl_static(fn__transform_hlds__dep_par_conj__this_file_0_0)
MR_decl_static(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0)
MR_decl_static(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0)
MR_decl_static(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0)
MR_decl_static(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0)
MR_decl_static(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0)
MR_decl_static(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0)
MR_decl_static(transform_hlds__dep_par_conj__queue_par_proc_4_0)
MR_decl_static(transform_hlds__dep_par_conj__number_future_args_5_0)
MR_decl_static(transform_hlds__dep_par_conj__futurise_argtypes_4_0)
MR_decl_static(transform_hlds__dep_par_conj__create_new_pred_6_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_call_6_0)
MR_decl_static(transform_hlds__dep_par_conj__maybe_replace_call_7_0)
MR_decl_static(transform_hlds__dep_par_conj__is_wait_goal_1_0)
MR_decl_static(transform_hlds__dep_par_conj__is_signal_goal_1_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_sequences_in_conj_4_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0)
MR_decl_static(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0)
MR_decl_static(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0)
MR_decl_static(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0)
MR_decl_static(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0)
MR_decl_static(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_head_vars_6_0)
MR_decl_static(transform_hlds__dep_par_conj__any_output_arguments_2_0)
MR_decl_static(transform_hlds__dep_par_conj__transform_conjunct_14_0)
MR_decl_static(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0)
MR_decl_static(transform_hlds__dep_par_conj__add_pending_par_procs_7_0)
MR_def_extern_entry(transform_hlds__dep_par_conj__dependent_par_conj_4_0)
MR_decl_static(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0)
MR_decl_static(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0)
MR_decl_static(transform_hlds__dep_par_conj__make_future_9_0)
MR_decl_static(transform_hlds__dep_par_conj__reproduce_future_map_10_0)
MR_decl_static(transform_hlds__dep_par_conj__allocate_future_9_0)
MR_decl_static(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0)
MR_decl_static(transform_hlds__dep_par_conj__changed_var_3_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0)
MR_decl_static(transform_hlds__dep_par_conj__var_in_nonlocals_2_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0)
MR_decl_static(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0)
MR_decl_static(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0)
MR_decl_static(fn__transform_hlds__dep_par_conj__fvp_var_1_0)
MR_decl_static(transform_hlds__dep_par_conj__relevant_wait_goal_3_0)
MR_decl_static(transform_hlds__dep_par_conj__relevant_signal_goal_3_0)
MR_decl_static(transform_hlds__dep_par_conj__replace_args_with_futures_3_0)
MR_decl_static(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0)
MR_decl_static(transform_hlds__dep_par_conj__is_future_type_1_0)
MR_decl_static(transform_hlds__dep_par_conj__make_get_goal_3_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__arg_pos_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__arg_pos_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__done_par_procs_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__done_par_procs_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__future_map_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__future_map_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__par_procs_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__par_procs_0_0)
MR_decl_static(__Unify___transform_hlds__dep_par_conj__pending_par_procs_0_0)
MR_decl_static(__Compare___transform_hlds__dep_par_conj__pending_par_procs_0_0)
MR_decl_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__dependent_par_conj__190__1_1_0)
MR_decl_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__1_2_0)
MR_decl_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__2_2_0)
MR_decl_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0)
MR_decl_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair)
}
},
{
{
MR_TAG_COMMON(3,9,0),
MR_TAG_COMMON(3,9,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__dep_par_conj__find_shared_variables_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_5;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__dep_par_conj__find_shared_variables_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const struct mercury_type_2 mercury_common_2[6] =
{
{
MR_COMMON(1,2),
MR_ENTRY_AP(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__transform_hlds__dep_par_conj__fvp_var_1_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__transform_hlds__dep_par_conj__fvp_var_1_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(transform_hlds__dep_par_conj__is_wait_goal_1_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(transform_hlds__dep_par_conj__is_signal_goal_1_0),
0
},
{
MR_COMMON(12,0),
MR_ENTRY_AP(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_3;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,1),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,1),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_2,
(MR_Word *) (MR_Integer) 0
},
14,
{
MR_COMMON(0,5),
MR_COMMON(3,1),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_2;
static const struct mercury_type_6 mercury_common_6[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,5),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,0),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,0),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(0,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_2;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(3,4)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(0,5),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0_1;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs),
MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__pending_par_procs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__pending_par_procs_0_0)),
	"transform_hlds.dep_par_conj",
	"pending_par_procs",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__dep_par_conj__field_types_par_procs_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_procs_0_0 = {
	"par_procs",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dep_par_conj__field_types_par_procs_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_par_procs_0_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_procs_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_par_procs_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_par_procs_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_name_ordered_par_procs_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_procs_0_0
};

const MR_Integer mercury_data_transform_hlds__dep_par_conj__functor_number_map_par_procs_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__par_procs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__par_procs_0_0)),
	"transform_hlds.dep_par_conj",
	"par_procs",
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_name_ordered_par_procs_0 },
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_par_procs_0 },
	1,
	4,
	mercury_data_transform_hlds__dep_par_conj__functor_number_map_par_procs_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__dep_par_conj__field_types_par_proc_call_pattern_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__dep_par_conj__field_names_par_proc_call_pattern_0_0[] = {
	"old_ppid",
	"future_args"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0 = {
	"par_proc_call_pattern",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dep_par_conj__field_types_par_proc_call_pattern_0_0,
	mercury_data_transform_hlds__dep_par_conj__field_names_par_proc_call_pattern_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0
};

const MR_Integer mercury_data_transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)),
	"transform_hlds.dep_par_conj",
	"par_proc_call_pattern",
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0 },
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0 },
	1,
	4,
	mercury_data_transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__dep_par_conj__field_types_new_par_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_transform_hlds__dep_par_conj__field_names_new_par_proc_0_0[] = {
	"new_ppid",
	"new_name"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0 = {
	"new_par_proc",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dep_par_conj__field_types_new_par_proc_0_0,
	mercury_data_transform_hlds__dep_par_conj__field_names_new_par_proc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0
};

const MR_Integer mercury_data_transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0)),
	"transform_hlds.dep_par_conj",
	"new_par_proc",
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0 },
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0 },
	1,
	4,
	mercury_data_transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__dep_par_conj__field_types_future_var_pair_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_transform_hlds__dep_par_conj__field_names_future_var_pair_0_0[] = {
	"fvp_future",
	"fvp_var"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0 = {
	"future_var_pair",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dep_par_conj__field_types_future_var_pair_0_0,
	mercury_data_transform_hlds__dep_par_conj__field_names_future_var_pair_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0
};

const MR_Integer mercury_data_transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0)),
	"transform_hlds.dep_par_conj",
	"future_var_pair",
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0 },
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0 },
	1,
	4,
	mercury_data_transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__future_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__future_map_0_0)),
	"transform_hlds.dep_par_conj",
	"future_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__done_par_procs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__done_par_procs_0_0)),
	"transform_hlds.dep_par_conj",
	"done_par_procs",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__dep_par_conj__field_types_dep_par_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_transform_hlds__dep_par_conj__field_names_dep_par_info_0_0[] = {
	"dp_par_procs",
	"dp_module_info",
	"dp_varset",
	"dp_vartypes",
	"dp_ignore_vars"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dep_par_conj__du_functor_desc_dep_par_info_0_0 = {
	"dep_par_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dep_par_conj__field_types_dep_par_info_0_0,
	mercury_data_transform_hlds__dep_par_conj__field_names_dep_par_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_dep_par_info_0_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_dep_par_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_dep_par_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dep_par_conj__du_stag_ordered_dep_par_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dep_par_conj__du_name_ordered_dep_par_info_0[] = {
	&mercury_data_transform_hlds__dep_par_conj__du_functor_desc_dep_par_info_0_0
};

const MR_Integer mercury_data_transform_hlds__dep_par_conj__functor_number_map_dep_par_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_dep_par_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0)),
	"transform_hlds.dep_par_conj",
	"dep_par_info",
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_name_ordered_dep_par_info_0 },
	{ (void *)mercury_data_transform_hlds__dep_par_conj__du_ptag_ordered_dep_par_info_0 },
	1,
	4,
	mercury_data_transform_hlds__dep_par_conj__functor_number_map_dep_par_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dep_par_conj__arg_pos_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dep_par_conj__arg_pos_0_0)),
	"transform_hlds.dep_par_conj",
	"arg_pos",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"lambda_dep_par_conj_m_711",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
711,
"d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__find_shared_variables_2_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"changed_var",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
716,
"d2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__dep_par_conj__find_shared_variables_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"get_nonlocals_and_instmaps",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
689,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"allocate_future",
9,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
607,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunction_13_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"transform_conjunct",
14,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
609,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"lambda_dep_par_conj_m_549",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
549,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"lambda2_dep_par_conj_m_549",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
549,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"fvp_var",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1249,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_2 = {
{
MR_FUNCTION,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"fvp_var",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1250,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__replace_call_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"replace_args_with_futures",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1277,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"is_wait_goal",
1,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1176,
"d1;c12;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"is_signal_goal",
1,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1177,
"d1;c12;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"relevant_wait_goal",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1183,
"d1;c12;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_4 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"relevant_signal_goal",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1185,
"d1;c12;t;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__maybe_replace_call_7_0_5 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"make_get_goal",
3,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1205,
"d1;c12;t;c9;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"lambda_dep_par_conj_m_1449",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1449,
"d1;c10;d1;c2;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"rename_apart_in_par_conjunct",
9,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
1455,
"d1;c10;d1;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"var_is_bound_in_instmap_delta",
4,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
657,
"d1;c17;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"insert_wait_in_goal",
9,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
662,
"d1;c17;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__transform_conjunct_14_0_3 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"insert_signal_in_goal",
9,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
667,
"d1;c17;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"reproduce_future_map",
10,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
342,
"d1;c11;q;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"process_pred_for_dep_par_conj",
7,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
186,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__dependent_par_conj_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"lambda_dep_par_conj_m_190",
1,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
190,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"process_proc_for_dep_par_conj",
8,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
222,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"var_not_in_nonlocals",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
954,
"d1;c11;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dep_par_conj",
"transform_hlds.dep_par_conj",
"var_not_in_nonlocals",
2,
0
},
"transform_hlds.dep_par_conj",
"dep_par_conj.m",
944,
"d1;c11;d4;c2;"
};

MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);
MR_decl_entry(check_hlds__purity__repuritycheck_proc_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module0)
	MR_init_entry1(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0);
	MR_init_label4(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0_i2);
MR_def_label(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0_i3);
MR_def_label(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0_i4);
MR_def_label(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__purity__repuritycheck_proc_4_0,
		transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0_i5);
MR_def_label(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0;
MR_decl_entry(list__det_split_list_4_0);
MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__set__filter_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module1)
	MR_init_entry1(transform_hlds__dep_par_conj__find_shared_variables_2_7_0);
	MR_init_label8(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,16,4,5,6,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__find_shared_variables_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i4);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i5);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i6);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i7);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__changed_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i8);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i9);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__find_shared_variables_2_7_0_i16);
MR_def_label(transform_hlds__dep_par_conj__find_shared_variables_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module2)
	MR_init_entry1(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0);
	MR_init_label2(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__dep_par_conj__find_shared_variables_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__map2_4_0,
		fn__transform_hlds__dep_par_conj__find_shared_variables_3_0_i2);
MR_def_label(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__transform_hlds__dep_par_conj__find_shared_variables_3_0_i3);
MR_def_label(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__find_shared_variables_2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__map_foldl3_9_1);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
MR_decl_entry(list__map_foldl5_13_1);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module3)
	MR_init_entry1(transform_hlds__dep_par_conj__transform_conjunction_13_0);
	MR_init_label8(transform_hlds__dep_par_conj__transform_conjunction_13_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__transform_conjunction_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i2);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__allocate_future_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i3);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r9 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r6 = MR_sv(10);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i4);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__transform_conjunct_14_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r12 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r11 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r7 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(4);
	MR_r13 = MR_sv(8);
	MR_r14 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__map_foldl5_13_1,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i5);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i6);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i7);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		transform_hlds__dep_par_conj__transform_conjunction_13_0_i8);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__transform_conjunction_13_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunction_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module4)
	MR_init_entry1(fn__transform_hlds__dep_par_conj__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dep_par_conj__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module5)
	MR_init_entry1(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0);
	MR_init_label2(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0_i2);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0_i3);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module6)
	MR_init_entry1(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0);
	MR_init_label8(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,8,9,12,13,11,49,16,50)
	MR_init_label8(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,18,51,20,52,22,53,24,25)
	MR_init_label2(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i49) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i50) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i51) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i52) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i53) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i27));
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i11);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i12);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i13);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i16);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i18);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i20);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i22);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i24);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i25);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_6_0,
		transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0_i26);
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during dependent parallel conjunction transformation.", 80);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module7)
	MR_init_entry1(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0);
	MR_init_label4(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,
		transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0_i4);
MR_def_label(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0_i5);
MR_def_label(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0_i6);
MR_def_label(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module8)
	MR_init_entry1(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0);
	MR_init_label4(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,
		transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0_i4);
MR_def_label(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0_i5);
MR_def_label(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0_i6);
MR_def_label(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__search_disj_for_par_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module9)
	MR_init_entry1(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0);
	MR_init_label4(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,
		transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0_i4);
MR_def_label(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0_i5);
MR_def_label(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,
		transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0_i6);
MR_def_label(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__search_cases_for_par_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module10)
	MR_init_entry1(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0);
	MR_init_label8(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,2,3,4,6,7,8,9,10)
	MR_init_label5(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,17,16,20,5,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goals_for_par_conj_5_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i2);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i3);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(10), 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__2_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i4);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i6);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i7);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 195;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i8);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 169;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i9);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_r2 = (MR_Integer) 170;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i10);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i5);
	}
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i5);
	}
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i5);
	}
	if (MR_INT_NE(MR_sv(12),1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i5);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i17);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i22);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__transform_conjunction_13_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i20);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0_i22);
MR_def_label(transform_hlds__dep_par_conj__maybe_transform_par_conj_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module11)
	MR_init_entry1(transform_hlds__dep_par_conj__queue_par_proc_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__queue_par_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__cons_3_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module12)
	MR_init_entry1(transform_hlds__dep_par_conj__number_future_args_5_0);
	MR_init_label5(transform_hlds__dep_par_conj__number_future_args_5_0,20,5,7,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__number_future_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__number_future_args_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__number_future_args_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__number_future_args_5_0_i5);
MR_def_label(transform_hlds__dep_par_conj__number_future_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__number_future_args_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__dep_par_conj__number_future_args_5_0_i7);
MR_def_label(transform_hlds__dep_par_conj__number_future_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__number_future_args_5_0_i20);
MR_def_label(transform_hlds__dep_par_conj__number_future_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__number_future_args_5_0_i20);
MR_def_label(transform_hlds__dep_par_conj__number_future_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__reverse_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module13)
	MR_init_entry1(transform_hlds__dep_par_conj__futurise_argtypes_4_0);
	MR_init_label7(transform_hlds__dep_par_conj__futurise_argtypes_4_0,3,7,8,9,6,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__futurise_argtypes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__futurise_argtypes_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__futurise_argtypes_4_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__futurise_argtypes_4_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__futurise_argtypes_4_0_i7);
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("future", 6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__dep_par_conj__futurise_argtypes_4_0_i8);
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__futurise_argtypes_4_0,
		transform_hlds__dep_par_conj__futurise_argtypes_4_0_i9);
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__futurise_argtypes_4_0,
		transform_hlds__dep_par_conj__futurise_argtypes_4_0_i10);
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__futurise_argtypes_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r2 = (MR_Word) MR_string_const("futurise_argtypes: more future arguments than argument types", 60);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_6_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__prog_util__add_sym_name_suffix_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
MR_decl_entry(hlds__hlds_pred__pred_info_init_18_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module14)
	MR_init_entry1(transform_hlds__dep_par_conj__create_new_pred_6_0);
	MR_init_label8(transform_hlds__dep_par_conj__create_new_pred_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__dep_par_conj__create_new_pred_6_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__dep_par_conj__create_new_pred_6_0,18,19,20,21,22,23,24,25)
	MR_init_label7(transform_hlds__dep_par_conj__create_new_pred_6_0,26,27,28,29,30,31,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__create_new_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i2);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i3);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i4);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i5);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i6);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i7);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("Parallel", 8);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_6_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i8);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i9);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i10);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i11);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_util__add_sym_name_suffix_3_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i12);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i13);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i14);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__futurise_argtypes_4_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i15);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i16);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i17);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i18);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i19);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i20);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i21);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i22);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i23);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(6);
	MR_r15 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(15);
	MR_r7 = (MR_Word) MR_tbmkword(0, 8);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(12);
	MR_r13 = MR_sv(2);
	MR_r14 = MR_sv(20);
	MR_r16 = MR_sv(16);
	MR_r17 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_init_18_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i24);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i25);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i26);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i27);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i28);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i29);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i30);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i31);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__dep_par_conj__create_new_pred_6_0_i32);
MR_def_label(transform_hlds__dep_par_conj__create_new_pred_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module15)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_call_6_0);
	MR_init_label8(transform_hlds__dep_par_conj__replace_call_6_0,2,3,4,5,9,8,11,13)
	MR_init_label6(transform_hlds__dep_par_conj__replace_call_6_0,6,14,15,16,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(9) = MR_r4;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i2);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i3);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i4);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__number_future_args_5_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i5);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_ctfield(0, MR_sv(9), 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i9);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_call_6_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_call_6_0_i13);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i11);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_call_6_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i18);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_sv(9);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tempr3;
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__create_new_pred_6_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i14);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i15);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__queue_par_proc_4_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i16);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_sv(14);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i18);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__replace_args_with_futures_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__dep_par_conj__replace_call_6_0_i19);
MR_def_label(transform_hlds__dep_par_conj__replace_call_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(list__filter_map_4_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module16)
	MR_init_entry1(transform_hlds__dep_par_conj__maybe_replace_call_7_0);
	MR_init_label8(transform_hlds__dep_par_conj__maybe_replace_call_7_0,2,4,5,7,8,9,10,25)
	MR_init_label8(transform_hlds__dep_par_conj__maybe_replace_call_7_0,11,14,15,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__maybe_replace_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr3 = MR_r4;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i2);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i4);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i5);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_replace_call_7_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i7);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i8);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__relevant_wait_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	}
	MR_np_call_localret_ent(list__filter_map_4_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i9);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__relevant_signal_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	}
	MR_np_call_localret_ent(list__filter_map_4_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i10);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_replace_call_7_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__maybe_replace_call_7_0_i11);
	}
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_call_6_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i14);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__make_get_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i15);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, future_var_pair);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i16);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i17);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i18);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i19);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__maybe_replace_call_7_0_i20);
MR_def_label(transform_hlds__dep_par_conj__maybe_replace_call_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module17)
	MR_init_entry1(transform_hlds__dep_par_conj__is_wait_goal_1_0);
	MR_init_label3(transform_hlds__dep_par_conj__is_wait_goal_1_0,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__is_wait_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_wait_goal_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_wait_goal_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__is_wait_goal_1_0_i4);
MR_def_label(transform_hlds__dep_par_conj__is_wait_goal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dep_par_conj__is_wait_goal_1_0_i5);
MR_def_label(transform_hlds__dep_par_conj__is_wait_goal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_wait_goal_1_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("wait", 4)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dep_par_conj__is_wait_goal_1_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module18)
	MR_init_entry1(transform_hlds__dep_par_conj__is_signal_goal_1_0);
	MR_init_label3(transform_hlds__dep_par_conj__is_signal_goal_1_0,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__is_signal_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_signal_goal_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_signal_goal_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__is_signal_goal_1_0_i4);
MR_def_label(transform_hlds__dep_par_conj__is_signal_goal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dep_par_conj__is_signal_goal_1_0_i5);
MR_def_label(transform_hlds__dep_par_conj__is_signal_goal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_signal_goal_1_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("signal", 6)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dep_par_conj__is_signal_goal_1_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module19)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0);
	MR_init_label8(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,49,12,13,11,14,50,16,51)
	MR_init_label8(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,18,52,20,53,22,54,24,25)
	MR_init_label3(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,26,27,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i48);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i49) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i50) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i51) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i52) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i53) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i54) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i27));
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i11);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_conj_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i12);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i13);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i14);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i16);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i18);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i20);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i22);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i24);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i25);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0_i26);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during dependent parallel conjunction transformation.", 80);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module20)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_sequences_in_conj_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_sequences_in_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module21)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0);
	MR_init_label8(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,62,11,12,7,8,19,20,15)
	MR_init_label7(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,16,63,4,5,25,3,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i8);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 5);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i11);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i12);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i7);
	}
	if ((strcmp((char *)MR_sv(6), (char *)(MR_Word) MR_string_const("wait", 4)) == 0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i4);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i16);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 5);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i19);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i20);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i15);
	}
	if ((strcmp((char *)MR_sv(6), (char *)(MR_Word) MR_string_const("signal", 6)) == 0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i4);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__maybe_replace_call_7_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i63);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i62);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i25);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i62);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0_i28);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_conj_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module22)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0);
	MR_init_label3(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0_i4);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0_i5);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_goals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module23)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0);
	MR_init_label3(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0_i4);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,
		transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0_i5);
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_sequences_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module24)
	MR_init_entry1(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0);
	MR_init_label8(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,48,11,13,14,15,16,49,18)
	MR_init_label8(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,50,20,51,22,52,24,53,26)
	MR_init_label3(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i29);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i49) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i50) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i51) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i52) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i53) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i29));
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i11);
	}
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i16);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_ctfield(3, MR_r6, 2);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i13);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i14);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_ctfield(0, MR_tempr1, 3);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i15);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i16);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r6, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i18);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i20);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r6, 1);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i22);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i24);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i26);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i27);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goal_8_0_i28);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module25)
	MR_init_entry1(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0);
	MR_init_label4(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_conj_8_0_i4);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__rename_apart_in_conj_8_0_i5);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_conj_8_0_i6);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module26)
	MR_init_entry1(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0);
	MR_init_label3(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goals_8_0_i4);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_goals_8_0_i5);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_goals_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module27)
	MR_init_entry1(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0);
	MR_init_label3(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_cases_8_0_i4);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,
		transform_hlds__dep_par_conj__rename_apart_in_cases_8_0_i5);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_cases_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module28)
	MR_init_entry1(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,2,3,4,5,6,7,8,10)
	MR_init_label8(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,11,12,13,14,19,20,9,22)
	MR_init_label3(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__search_goal_for_par_conj_2_5_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i8);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i10);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i11);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 195;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i12);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 169;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i13);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 170;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i14);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i9);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i9);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i9);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i9);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_sequences_in_goal_4_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i19);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__rename_apart_in_goal_8_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i20);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i22);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_sv(7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i22);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i23);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i24);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0_i25);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module29)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_head_vars_6_0);
	MR_init_label8(transform_hlds__dep_par_conj__replace_head_vars_6_0,3,10,14,12,18,16,9,23)
	MR_init_label2(transform_hlds__dep_par_conj__replace_head_vars_6_0,24,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_head_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i10);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i9);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i14);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_head_vars_6_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i24);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i18);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_head_vars_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_head_vars_6_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i24);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r2 = (MR_Word) MR_string_const("dependent parallel conjunction transformation only understands input and output modes", 85);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i23);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(transform_hlds__dep_par_conj__replace_head_vars_6_0,
		transform_hlds__dep_par_conj__replace_head_vars_6_0_i24);
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__dep_par_conj__replace_head_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r2 = (MR_Word) MR_string_const("replace_head_vars: length mismatch", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module30)
	MR_init_entry1(transform_hlds__dep_par_conj__any_output_arguments_2_0);
	MR_init_label4(transform_hlds__dep_par_conj__any_output_arguments_2_0,19,6,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__any_output_arguments_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__any_output_arguments_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__any_output_arguments_2_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__dep_par_conj__any_output_arguments_2_0_i6);
MR_def_label(transform_hlds__dep_par_conj__any_output_arguments_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__any_output_arguments_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__any_output_arguments_2_0_i19);
MR_def_label(transform_hlds__dep_par_conj__any_output_arguments_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dep_par_conj__any_output_arguments_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_get_nonlocals_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__var_is_bound_in_instmap_delta_4_0);
MR_decl_entry(set__divide_4_0);
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module31)
	MR_init_entry1(transform_hlds__dep_par_conj__transform_conjunct_14_0);
	MR_init_label8(transform_hlds__dep_par_conj__transform_conjunct_14_0,2,3,6,4,8,9,10,11)
	MR_init_label4(transform_hlds__dep_par_conj__transform_conjunct_14_0,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__transform_conjunct_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i2);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i3);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i6);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__transform_conjunct_14_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_sv(2) = MR_sv(5);
	MR_sv(3) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__transform_conjunct_14_0_i14);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i8);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_bound_in_instmap_delta_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__divide_4_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i9);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i10);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r9 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r5 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r6 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i11);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i12);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i13);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(3) = MR_r3;
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__dep_par_conj__transform_conjunct_14_0_i15);
MR_def_label(transform_hlds__dep_par_conj__transform_conjunct_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module32)
	MR_init_entry1(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0);
	MR_init_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,18,19,20,23,21,25,26,27)
	MR_init_label4(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i2);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i3);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i4);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i5);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i6);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i7);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i8);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__reproduce_future_map_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i9);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(3);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(8);
	MR_np_call_localret_ent(list__foldl4_10_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i10);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__replace_head_vars_6_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i11);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i12);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i13);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__transform_conjunct_14_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i14);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i15);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i16);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i17);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i18);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i19);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i20);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__any_output_arguments_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i23);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i28);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i25);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i26);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i27);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_r4 = MR_sv(5);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i29);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__keys_1_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i30);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0_i31);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module33)
	MR_init_entry1(transform_hlds__dep_par_conj__add_pending_par_procs_7_0);
	MR_init_label4(transform_hlds__dep_par_conj__add_pending_par_procs_7_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__add_pending_par_procs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_procs_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__add_pending_par_procs_7_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__dep_par_conj__add_pending_par_procs_7_0_i4);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_procs_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__add_pending_par_proc_2_10_0,
		transform_hlds__dep_par_conj__add_pending_par_procs_7_0_i5);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_procs_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__add_pending_par_procs_7_0_i12);
MR_def_label(transform_hlds__dep_par_conj__add_pending_par_procs_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_4);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module34)
	MR_init_entry1(transform_hlds__dep_par_conj__dependent_par_conj_4_0);
	MR_init_label4(transform_hlds__dep_par_conj__dependent_par_conj_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dep_par_conj__dependent_par_conj_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dep_par_conj__dependent_par_conj_4_0_i2);
MR_def_label(transform_hlds__dep_par_conj__dependent_par_conj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__dep_par_conj__dependent_par_conj_4_0_i3);
MR_def_label(transform_hlds__dep_par_conj__dependent_par_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl3_8_4,
		transform_hlds__dep_par_conj__dependent_par_conj_4_0_i4);
MR_def_label(transform_hlds__dep_par_conj__dependent_par_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__IntroducedFrom__pred__dependent_par_conj__190__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dep_par_conj.m", 14);
	MR_r3 = (MR_Word) MR_string_const("DoneParProcs non empty", 22);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__dep_par_conj__dependent_par_conj_4_0_i5);
MR_def_label(transform_hlds__dep_par_conj__dependent_par_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__add_pending_par_procs_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module35)
	MR_init_entry1(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0);
	MR_init_label2(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0_i2);
MR_def_label(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0_i3);
MR_def_label(transform_hlds__dep_par_conj__process_pred_for_dep_par_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_procs);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module36)
	MR_init_entry1(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0);
	MR_init_label4(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0_i2);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0_i3);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0_i6);
MR_def_label(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__process_proc_for_dep_par_conj_with_ignores_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(svvarset__new_named_var_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module37)
	MR_init_entry1(transform_hlds__dep_par_conj__make_future_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__make_future_9_0,2,3,4,5,6,7,8,9)
	MR_init_label1(transform_hlds__dep_par_conj__make_future_9_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__make_future_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__make_future_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("future", 6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__dep_par_conj__make_future_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__dep_par_conj__make_future_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Future", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__make_future_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__dep_par_conj__make_future_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__dep_par_conj__make_future_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__make_future_9_0_i8);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__dep_par_conj__make_future_9_0_i9);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("new_future", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__dep_par_conj__make_future_9_0_i10);
MR_def_label(transform_hlds__dep_par_conj__make_future_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_index1_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module38)
	MR_init_entry1(transform_hlds__dep_par_conj__reproduce_future_map_10_0);
	MR_init_label4(transform_hlds__dep_par_conj__reproduce_future_map_10_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__reproduce_future_map_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__dep_par_conj__reproduce_future_map_10_0_i2);
MR_def_label(transform_hlds__dep_par_conj__reproduce_future_map_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__reproduce_future_map_10_0_i3);
MR_def_label(transform_hlds__dep_par_conj__reproduce_future_map_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__make_future_9_0,
		transform_hlds__dep_par_conj__reproduce_future_map_10_0_i4);
MR_def_label(transform_hlds__dep_par_conj__reproduce_future_map_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r6 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__dep_par_conj__reproduce_future_map_10_0_i5);
MR_def_label(transform_hlds__dep_par_conj__reproduce_future_map_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module39)
	MR_init_entry1(transform_hlds__dep_par_conj__allocate_future_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__allocate_future_9_0,2,3,4,5,6,7,8,9)
	MR_init_label3(transform_hlds__dep_par_conj__allocate_future_9_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__allocate_future_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("future", 6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Future", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i8);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i9);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i10);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("new_future", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i11);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__dep_par_conj__allocate_future_9_0_i12);
MR_def_label(transform_hlds__dep_par_conj__allocate_future_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module40)
	MR_init_entry1(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0);
	MR_init_label2(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0_i2);
MR_def_label(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0_i3);
MR_def_label(transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module41)
	MR_init_entry1(transform_hlds__dep_par_conj__changed_var_3_0);
	MR_init_label4(transform_hlds__dep_par_conj__changed_var_3_0,3,4,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__changed_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__dep_par_conj__changed_var_3_0_i2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__dep_par_conj__changed_var_3_0_i3);
MR_def_label(transform_hlds__dep_par_conj__changed_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		transform_hlds__dep_par_conj__changed_var_3_0_i4);
MR_def_label(transform_hlds__dep_par_conj__changed_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__dep_par_conj__changed_var_3_0_i6);
MR_def_label(transform_hlds__dep_par_conj__changed_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__changed_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module42)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,2,3,4,5,6,9,13,10)
	MR_init_label7(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,14,15,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("wait", 4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i6);
	}
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i6);
	}
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i9);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i13);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i14);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i15);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i16);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i17);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i18);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i19);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__dep_par_conj__insert_wait_before_goal_9_0_i20);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module43)
	MR_init_entry1(transform_hlds__dep_par_conj__var_in_nonlocals_2_0);
	MR_init_label1(transform_hlds__dep_par_conj__var_in_nonlocals_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__var_in_nonlocals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__var_in_nonlocals_2_0_i2);
MR_def_label(transform_hlds__dep_par_conj__var_in_nonlocals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module44)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module45)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,75,13,82,17,76,19,77,22)
	MR_init_label8(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,21,25,78,28,79,30,80,34)
	MR_init_label5(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,32,37,38,81,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 0);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i75);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i75) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i76) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i77) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i78) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i79) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i80) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i81));
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r8 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i82);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	MR_sv(1) = MR_r8;
	MR_r4 = MR_ctfield(3, MR_r7, 2);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i17);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	MR_r4 = MR_ctfield(3, MR_r7, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i19);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r7;
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i22);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i25);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	MR_r4 = MR_ctfield(3, MR_r7, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i28);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i30);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r7;
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__var_in_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i34);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_wait_before_goal_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i37);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i38);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__this_file_0_0,
		transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0_i41);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goal_2_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during dependent parallel conjunction transformation.", 80);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module46)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,4,3,6,7,9,13,10,14)
	MR_init_label8(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,15,5,21,22,25,29,26,30)
	MR_init_label6(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,31,32,33,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i3);
	}
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i9);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i10);
	}
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i13);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i14);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i15);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i32);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i21);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i22);
	}
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_ctfield(3, MR_r4, 2);
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i25);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i26);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i29);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i30);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i31);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i32);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i33);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i34);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i35);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__dep_par_conj__insert_wait_in_conj_9_0_i36);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_conj_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module47)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goals_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_goals_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_goals_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module48)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_wait_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_cases_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,
		transform_hlds__dep_par_conj__insert_wait_in_cases_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_wait_in_cases_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module49)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,2,3,4,5,6,9,13,10)
	MR_init_label7(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,14,15,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("signal", 6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i6);
	}
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i6);
	}
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i9);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i10);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i13);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i14);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i15);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i16);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i17);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i18);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i19);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__dep_par_conj__insert_signal_after_goal_9_0_i20);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module50)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module51)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,67,13,74,17,68,19,69,22)
	MR_init_label8(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,24,21,26,70,29,30,71,32)
	MR_init_label7(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,72,34,35,36,37,73,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 0);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i67);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i67) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i68) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i69) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i70) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i71) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i72) MR_AND
		MR_LABEL_AP(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i73));
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_signal_after_goal_9_0);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r8 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i74);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_sv(1) = MR_r8;
	MR_r4 = MR_ctfield(3, MR_r7, 2);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i17);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_r4 = MR_ctfield(3, MR_r7, 1);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i19);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_tempr1;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i22);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i21);
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__this_file_0_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i24);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("switch on unbound shared variable", 33);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i26);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(3, MR_r7, 1);
	MR_sv(1) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__this_file_0_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i29);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("negation binds shared variable", 30);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i30);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i32);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__this_file_0_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i34);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = (MR_Word) MR_string_const("condition binds shared variable", 31);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i35);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i36);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i37);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__this_file_0_0,
		transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0_i39);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goal_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during dependent parallel conjunction transformation.", 80);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module52)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,4,3,6,7,9,13,10,14)
	MR_init_label8(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,15,5,21,22,25,29,26,30)
	MR_init_label6(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,31,32,33,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i3);
	}
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i9);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i10);
	}
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i13);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i14);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i15);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i32);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i21);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i22);
	}
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_ctfield(3, MR_r4, 2);
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i25);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i26);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i29);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i30);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i31);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i32);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i33);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i34);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i35);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__dep_par_conj__insert_signal_in_conj_9_0_i36);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_conj_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module53)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goals_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_goals_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_goals_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module54)
	MR_init_entry1(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0);
	MR_init_label3(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__insert_signal_in_goal_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_cases_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,
		transform_hlds__dep_par_conj__insert_signal_in_cases_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__dep_par_conj__insert_signal_in_cases_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module55)
	MR_init_entry1(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0);
	MR_init_label3(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0_i3);
MR_def_label(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0_i4);
MR_def_label(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__var_not_in_nonlocals_2_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module56)
	MR_init_entry1(fn__transform_hlds__dep_par_conj__fvp_var_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dep_par_conj__fvp_var_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module57)
	MR_init_entry1(transform_hlds__dep_par_conj__relevant_wait_goal_3_0);
	MR_init_label2(transform_hlds__dep_par_conj__relevant_wait_goal_3_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__relevant_wait_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i6);
MR_def_label(transform_hlds__dep_par_conj__relevant_wait_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_wait_goal_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__relevant_wait_goal_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module58)
	MR_init_entry1(transform_hlds__dep_par_conj__relevant_signal_goal_3_0);
	MR_init_label2(transform_hlds__dep_par_conj__relevant_signal_goal_3_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__relevant_signal_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i6);
MR_def_label(transform_hlds__dep_par_conj__relevant_signal_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__relevant_signal_goal_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__relevant_signal_goal_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module59)
	MR_init_entry1(transform_hlds__dep_par_conj__replace_args_with_futures_3_0);
	MR_init_label4(transform_hlds__dep_par_conj__replace_args_with_futures_3_0,16,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__replace_args_with_futures_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dep_par_conj__replace_args_with_futures_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_args_with_futures_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__dep_par_conj__replace_args_with_futures_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__dep_par_conj__replace_args_with_futures_3_0_i5);
MR_def_label(transform_hlds__dep_par_conj__replace_args_with_futures_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_args_with_futures_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__dep_par_conj__replace_args_with_futures_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dep_par_conj__replace_args_with_futures_3_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__quantification__free_goal_vars_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__goal_util__create_variables_9_0);
MR_decl_entry(hlds__goal_util__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module60)
	MR_init_entry1(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0);
	MR_init_label8(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i2);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i3);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i4);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i5);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i6);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i7);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r5 = MR_r3;
	MR_np_call_localret_ent(hlds__goal_util__create_variables_9_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i8);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__goal_util__rename_some_vars_in_goal_3_0,
		transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0_i9);
MR_def_label(transform_hlds__dep_par_conj__rename_apart_in_par_conjunct_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module61)
	MR_init_entry1(transform_hlds__dep_par_conj__is_future_type_1_0);
	MR_init_label3(transform_hlds__dep_par_conj__is_future_type_1_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__is_future_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__is_future_type_1_0_i2);
MR_def_label(transform_hlds__dep_par_conj__is_future_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("future", 6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__dep_par_conj__is_future_type_1_0_i3);
MR_def_label(transform_hlds__dep_par_conj__is_future_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__is_future_type_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(transform_hlds__dep_par_conj__is_future_type_1_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module62)
	MR_init_entry1(transform_hlds__dep_par_conj__make_get_goal_3_0);
	MR_init_label2(transform_hlds__dep_par_conj__make_get_goal_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__make_get_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__dep_par_conj__make_get_goal_3_0_i2);
MR_def_label(transform_hlds__dep_par_conj__make_get_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__dep_par_conj__make_get_goal_3_0_i3);
MR_def_label(transform_hlds__dep_par_conj__make_get_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("get", 3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module63)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__arg_pos_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__arg_pos_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module64)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__arg_pos_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__arg_pos_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module65)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0);
	MR_init_label6(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i14);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__dep_par_conj__par_procs_0_0,
		__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dep_par_conj__dep_par_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module66)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0);
	MR_init_label7(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,
		__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__dep_par_conj__dep_par_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module67)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__done_par_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__done_par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module68)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__done_par_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__done_par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module69)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__future_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__future_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module70)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__future_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__future_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module71)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0);
	MR_init_label3(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0_i4);
MR_def_label(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dep_par_conj__future_var_pair_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module72)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0);
	MR_init_label4(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0_i2);
MR_def_label(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0_i5);
MR_def_label(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___transform_hlds__dep_par_conj__future_var_pair_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module73)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0);
	MR_init_label3(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0_i4);
MR_def_label(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dep_par_conj__new_par_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module74)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0);
	MR_init_label4(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0_i2);
MR_def_label(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0_i5);
MR_def_label(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___transform_hlds__dep_par_conj__new_par_proc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module75)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0);
	MR_init_label3(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i4);
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module76)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0);
	MR_init_label4(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i2);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i5);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_proc_call_pattern_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module77)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__par_procs_0_0);
	MR_init_label3(__Unify___transform_hlds__dep_par_conj__par_procs_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__par_procs_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__dep_par_conj__par_procs_0_0_i4);
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_procs_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dep_par_conj__par_procs_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_procs_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dep_par_conj__par_procs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module78)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__par_procs_0_0);
	MR_init_label4(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_procs_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_procs_0_0_i2);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__dep_par_conj__par_procs_0_0_i5);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dep_par_conj__par_procs_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__dep_par_conj__par_procs_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module79)
	MR_init_entry1(__Unify___transform_hlds__dep_par_conj__pending_par_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dep_par_conj__pending_par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module80)
	MR_init_entry1(__Compare___transform_hlds__dep_par_conj__pending_par_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dep_par_conj__pending_par_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module81)
	MR_init_entry1(transform_hlds__dep_par_conj__IntroducedFrom__pred__dependent_par_conj__190__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__dependent_par_conj__190__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, par_proc_call_pattern);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dep_par_conj, new_par_proc);
	MR_np_tailcall_ent(map__is_empty_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module82)
	MR_init_entry1(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module83)
	MR_init_entry1(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_transform_par_conj__549__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_tailcall_ent(std_util__isnt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_var_3_0);

MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module84)
	MR_init_entry1(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0);
	MR_init_label3(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0_i2);
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0_i5);
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__711__1_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__dep_par_conj_module85)
	MR_init_entry1(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0);
	MR_init_label3(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0_i2);
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__is_future_type_1_0,
		transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0_i5);
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__dep_par_conj__IntroducedFrom__pred__rename_apart_in_goal__1449__1_2_0,1)
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

static void mercury__transform_hlds__dep_par_conj_maybe_bunch_0(void)
{
	transform_hlds__dep_par_conj_module0();
	transform_hlds__dep_par_conj_module1();
	transform_hlds__dep_par_conj_module2();
	transform_hlds__dep_par_conj_module3();
	transform_hlds__dep_par_conj_module4();
	transform_hlds__dep_par_conj_module5();
	transform_hlds__dep_par_conj_module6();
	transform_hlds__dep_par_conj_module7();
	transform_hlds__dep_par_conj_module8();
	transform_hlds__dep_par_conj_module9();
	transform_hlds__dep_par_conj_module10();
	transform_hlds__dep_par_conj_module11();
	transform_hlds__dep_par_conj_module12();
	transform_hlds__dep_par_conj_module13();
	transform_hlds__dep_par_conj_module14();
	transform_hlds__dep_par_conj_module15();
	transform_hlds__dep_par_conj_module16();
	transform_hlds__dep_par_conj_module17();
	transform_hlds__dep_par_conj_module18();
	transform_hlds__dep_par_conj_module19();
	transform_hlds__dep_par_conj_module20();
	transform_hlds__dep_par_conj_module21();
	transform_hlds__dep_par_conj_module22();
	transform_hlds__dep_par_conj_module23();
	transform_hlds__dep_par_conj_module24();
	transform_hlds__dep_par_conj_module25();
	transform_hlds__dep_par_conj_module26();
	transform_hlds__dep_par_conj_module27();
	transform_hlds__dep_par_conj_module28();
	transform_hlds__dep_par_conj_module29();
	transform_hlds__dep_par_conj_module30();
	transform_hlds__dep_par_conj_module31();
	transform_hlds__dep_par_conj_module32();
	transform_hlds__dep_par_conj_module33();
	transform_hlds__dep_par_conj_module34();
	transform_hlds__dep_par_conj_module35();
	transform_hlds__dep_par_conj_module36();
	transform_hlds__dep_par_conj_module37();
	transform_hlds__dep_par_conj_module38();
	transform_hlds__dep_par_conj_module39();
}

static void mercury__transform_hlds__dep_par_conj_maybe_bunch_1(void)
{
	transform_hlds__dep_par_conj_module40();
	transform_hlds__dep_par_conj_module41();
	transform_hlds__dep_par_conj_module42();
	transform_hlds__dep_par_conj_module43();
	transform_hlds__dep_par_conj_module44();
	transform_hlds__dep_par_conj_module45();
	transform_hlds__dep_par_conj_module46();
	transform_hlds__dep_par_conj_module47();
	transform_hlds__dep_par_conj_module48();
	transform_hlds__dep_par_conj_module49();
	transform_hlds__dep_par_conj_module50();
	transform_hlds__dep_par_conj_module51();
	transform_hlds__dep_par_conj_module52();
	transform_hlds__dep_par_conj_module53();
	transform_hlds__dep_par_conj_module54();
	transform_hlds__dep_par_conj_module55();
	transform_hlds__dep_par_conj_module56();
	transform_hlds__dep_par_conj_module57();
	transform_hlds__dep_par_conj_module58();
	transform_hlds__dep_par_conj_module59();
	transform_hlds__dep_par_conj_module60();
	transform_hlds__dep_par_conj_module61();
	transform_hlds__dep_par_conj_module62();
	transform_hlds__dep_par_conj_module63();
	transform_hlds__dep_par_conj_module64();
	transform_hlds__dep_par_conj_module65();
	transform_hlds__dep_par_conj_module66();
	transform_hlds__dep_par_conj_module67();
	transform_hlds__dep_par_conj_module68();
	transform_hlds__dep_par_conj_module69();
	transform_hlds__dep_par_conj_module70();
	transform_hlds__dep_par_conj_module71();
	transform_hlds__dep_par_conj_module72();
	transform_hlds__dep_par_conj_module73();
	transform_hlds__dep_par_conj_module74();
	transform_hlds__dep_par_conj_module75();
	transform_hlds__dep_par_conj_module76();
	transform_hlds__dep_par_conj_module77();
	transform_hlds__dep_par_conj_module78();
	transform_hlds__dep_par_conj_module79();
}

static void mercury__transform_hlds__dep_par_conj_maybe_bunch_2(void)
{
	transform_hlds__dep_par_conj_module80();
	transform_hlds__dep_par_conj_module81();
	transform_hlds__dep_par_conj_module82();
	transform_hlds__dep_par_conj_module83();
	transform_hlds__dep_par_conj_module84();
	transform_hlds__dep_par_conj_module85();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__dep_par_conj__init(void);
void mercury__transform_hlds__dep_par_conj__init_type_tables(void);
void mercury__transform_hlds__dep_par_conj__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__dep_par_conj__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__dep_par_conj__init_complexity_procs(void);
#endif

void mercury__transform_hlds__dep_par_conj__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__dep_par_conj_maybe_bunch_0();
	mercury__transform_hlds__dep_par_conj_maybe_bunch_1();
	mercury__transform_hlds__dep_par_conj_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0,
		transform_hlds__dep_par_conj__pending_par_procs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0,
		transform_hlds__dep_par_conj__par_procs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0,
		transform_hlds__dep_par_conj__par_proc_call_pattern_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0,
		transform_hlds__dep_par_conj__new_par_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0,
		transform_hlds__dep_par_conj__future_var_pair_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_map_0,
		transform_hlds__dep_par_conj__future_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0,
		transform_hlds__dep_par_conj__done_par_procs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_dep_par_info_0,
		transform_hlds__dep_par_conj__dep_par_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0,
		transform_hlds__dep_par_conj__arg_pos_0_0);
	mercury__transform_hlds__dep_par_conj__init_debugger();
}

void mercury__transform_hlds__dep_par_conj__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_procs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_future_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_dep_par_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0);
	}
}


void mercury__transform_hlds__dep_par_conj__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__dep_par_conj__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__dep_par_conj__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
