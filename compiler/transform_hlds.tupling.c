/*
** Automatically generated from `tupling.m'
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
INIT mercury__transform_hlds__tupling__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.tupling.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.tupling.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.tupling.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.tupling.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.tupling.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.tupling.c"
#line 49 "transform_hlds.tupling.c"
#include "transform_hlds.tupling.mh"

#line 52 "transform_hlds.tupling.c"
#line 53 "transform_hlds.tupling.c"
#ifndef TRANSFORM_HLDS__TUPLING_DECL_GUARD
#define TRANSFORM_HLDS__TUPLING_DECL_GUARD

#line 57 "transform_hlds.tupling.c"
#line 58 "transform_hlds.tupling.c"

#endif
#line 61 "transform_hlds.tupling.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__[],
	mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvars_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_costs_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_count_info_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_count_state_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_transform_map_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0,
	mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__tupling__type_ctor_info_tupling_scheme_0;
MR_decl_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0, 4,10,12,11,17,6)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0, 19,7,9,5)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0, 10,3,4)
MR_decl_label10(transform_hlds__tupling__add_transformed_proc_8_0, 36,4,5,7,8,10,13,15,16,18)
MR_decl_label6(transform_hlds__tupling__add_transformed_proc_8_0, 19,20,21,22,23,25)
MR_decl_label2(transform_hlds__tupling__build_insert_map_4_0, 3,6)
MR_decl_label7(transform_hlds__tupling__build_insert_map_2_7_0, 3,6,4,8,12,14,10)
MR_decl_label10(transform_hlds__tupling__build_interval_info_3_0, 2,3,4,5,6,7,8,10,13,15)
MR_decl_label7(transform_hlds__tupling__build_interval_info_3_0, 16,17,18,19,20,21,23)
MR_decl_label5(transform_hlds__tupling__candidate_headvars_of_proc_3_0, 2,3,4,5,6)
MR_decl_label1(transform_hlds__tupling__cls_put_in_regs_3_0, 3)
MR_decl_label10(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0, 3,7,6,12,13,14,17,19,16,2)
MR_decl_label1(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0, 23)
MR_decl_label2(transform_hlds__tupling__cls_require_flushed_4_0, 3,2)
MR_decl_label10(transform_hlds__tupling__cls_require_flushed_2_5_0, 6,4,9,10,3,15,18,17,20,21)
MR_decl_label1(transform_hlds__tupling__cls_require_flushed_2_5_0, 13)
MR_decl_label4(transform_hlds__tupling__cls_require_flushed_with_cost_4_0, 4,2,7,8)
MR_decl_label10(transform_hlds__tupling__cls_require_in_reg_4_0, 5,4,7,8,10,13,12,15,16,18)
MR_decl_label4(transform_hlds__tupling__cls_require_in_reg_4_0, 20,17,24,2)
MR_decl_label4(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0, 4,2,7,8)
MR_decl_label5(transform_hlds__tupling__combine_inserts_3_0, 32,6,9,5,12)
MR_decl_label3(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0, 7,8,9)
MR_decl_label3(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0, 6,9,2)
MR_decl_label10(transform_hlds__tupling__count_load_stores_for_scc_2_10_0, 2,3,4,5,6,7,8,10,11,17)
MR_decl_label7(transform_hlds__tupling__count_load_stores_for_scc_2_10_0, 15,20,23,25,26,27,14)
MR_decl_label9(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0, 2,3,4,6,10,11,12,8,14)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0, 2,3,4,6,13,15,17,19,14,11)
MR_decl_label6(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0, 22,24,5,25,29,30)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_cases_4_0, 41,3,4,6,8,7,5,16,17,18)
MR_decl_label2(transform_hlds__tupling__count_load_stores_in_cases_4_0, 19,20)
MR_decl_label3(transform_hlds__tupling__count_load_stores_in_conj_4_0, 10,3,4)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_disj_4_0, 41,3,4,6,8,7,15,5,17,18)
MR_decl_label2(transform_hlds__tupling__count_load_stores_in_disj_4_0, 19,20)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0, 250,4,7,9,10,11,12,13,15,14)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0, 19,3,24,22,27,30,31,34,35,38)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0, 37,40,41,42,43,44,45,29,48,51)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0, 52,53,54,55,56,57,58,59,50,47)
MR_decl_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0, 63,66,65,261,62,74,70,71,69,80)
MR_decl_label9(transform_hlds__tupling__count_load_stores_in_goal_4_0, 79,85,90,89,94,93,97,99,87)
MR_decl_label7(transform_hlds__tupling__count_load_stores_in_proc_3_0, 2,4,6,7,8,9,11)
MR_decl_label10(transform_hlds__tupling__create_aux_pred_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__tupling__create_aux_pred_9_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label3(transform_hlds__tupling__create_aux_pred_9_0, 22,23,26)
MR_decl_label2(transform_hlds__tupling__extract_tupled_args_from_list_4_0, 4,5)
MR_decl_label5(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0, 24,3,5,4,8)
MR_decl_label6(transform_hlds__tupling__find_best_tupling_scheme_2_8_0, 3,4,6,10,9,8)
MR_decl_label3(transform_hlds__tupling__fix_calls_in_cases_9_0, 18,4,6)
MR_decl_label5(transform_hlds__tupling__fix_calls_in_conj_9_0, 35,4,5,9,6)
MR_decl_label10(transform_hlds__tupling__fix_calls_in_goal_9_0, 7,6,10,4,14,13,18,19,20,17)
MR_decl_label10(transform_hlds__tupling__fix_calls_in_goal_9_0, 24,23,31,33,35,36,37,40,38,47)
MR_decl_label10(transform_hlds__tupling__fix_calls_in_goal_9_0, 48,50,51,27,26,54,57,53,62,61)
MR_decl_label2(transform_hlds__tupling__fix_calls_in_goal_9_0, 157,156)
MR_decl_label3(transform_hlds__tupling__fix_calls_in_goal_list_9_0, 17,4,5)
MR_decl_label10(transform_hlds__tupling__fix_calls_in_proc_4_0, 2,3,4,7,8,9,10,11,12,13)
MR_decl_label4(transform_hlds__tupling__fix_calls_in_proc_4_0, 14,15,16,17)
MR_decl_label7(transform_hlds__tupling__get_case_relative_frequency_4_0, 2,5,4,10,11,13,14)
MR_decl_label10(transform_hlds__tupling__get_disjunct_relative_frequency_4_0, 2,10,9,14,16,15,18,19,21,22)
MR_decl_label1(transform_hlds__tupling__get_disjunct_relative_frequency_4_0, 3)
MR_decl_label10(transform_hlds__tupling__get_ite_relative_frequencies_6_0, 2,3,6,5,10,12,11,14,16,17)
MR_decl_label5(transform_hlds__tupling__get_ite_relative_frequencies_6_0, 18,19,20,21,15)
MR_decl_label3(transform_hlds__tupling__get_switch_total_count_2_5_0, 5,2,3)
MR_decl_label10(transform_hlds__tupling__make_transformed_proc_5_0, 2,3,7,8,10,11,12,14,15,16)
MR_decl_label10(transform_hlds__tupling__make_transformed_proc_5_0, 17,18,20,21,22,23,25,26,29,30)
MR_decl_label6(transform_hlds__tupling__make_transformed_proc_5_0, 31,32,33,34,35,36)
MR_decl_label8(transform_hlds__tupling__make_tupling_proposal_5_0, 2,3,4,10,12,11,13,14)
MR_decl_label10(transform_hlds__tupling__maybe_tuple_scc_10_0, 2,3,5,6,8,9,4,14,15,16)
MR_decl_label10(transform_hlds__tupling__maybe_tuple_scc_10_0, 19,13,21,22,25,31,45,33,27,11)
MR_decl_label1(transform_hlds__tupling__maybe_tuple_scc_10_0, 38)
MR_decl_label9(transform_hlds__tupling__maybe_tuple_scc_2_11_0, 3,6,7,9,23,12,11,18,22)
MR_decl_label8(transform_hlds__tupling__maybe_tuple_scc_3_13_0, 2,25,4,6,11,14,28,17)
MR_decl_label10(transform_hlds__tupling__prepare_proc_for_counting_5_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label7(transform_hlds__tupling__prepare_proc_for_counting_5_0, 14,15,17,18,20,21,22)
MR_decl_label3(transform_hlds__tupling__should_use_tupling_scheme_3_0, 2,3,5)
MR_decl_label10(transform_hlds__tupling__tuple_arguments_4_0, 2,3,4,7,10,11,12,13,14,9)
MR_decl_label10(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label9(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0, 13,14,15,16,17,19,20,23,25)
MR_decl_label2(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0, 4,1)
MR_decl_label3(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0, 3,5,1)
MR_decl_label6(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0, 2,5,8,10,12,1)
MR_decl_label2(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0, 3,2)
MR_decl_label2(fn__transform_hlds__tupling__get_tupling_proposal_2_0, 3,2)
MR_decl_label2(__Unify___transform_hlds__tupling__costs_0_0, 4,1)
MR_decl_label8(__Unify___transform_hlds__tupling__count_info_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label4(__Unify___transform_hlds__tupling__count_state_0_0, 5,7,9,1)
MR_decl_label5(__Unify___transform_hlds__tupling__transformed_proc_0_0, 4,6,8,12,1)
MR_decl_label2(__Unify___transform_hlds__tupling__tuning_params_0_0, 4,1)
MR_decl_label5(__Unify___transform_hlds__tupling__tupling_proposal_0_0, 18,5,8,10,1)
MR_decl_label4(__Compare___transform_hlds__tupling__costs_0_0, 3,2,5,21)
MR_decl_label9(__Compare___transform_hlds__tupling__count_info_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label6(__Compare___transform_hlds__tupling__count_state_0_0, 3,2,6,11,15,51)
MR_decl_label6(__Compare___transform_hlds__tupling__transformed_proc_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___transform_hlds__tupling__tuning_params_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label7(__Compare___transform_hlds__tupling__tupling_proposal_0_0, 33,7,5,9,11,16,24)
MR_decl_static(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0)
MR_def_extern_entry(transform_hlds__tupling__tuple_arguments_4_0)
MR_decl_static(transform_hlds__tupling__should_use_tupling_scheme_3_0)
MR_decl_static(transform_hlds__tupling__add_transformed_procs_7_0)
MR_decl_static(transform_hlds__tupling__maybe_tuple_scc_3_13_0)
MR_decl_static(transform_hlds__tupling__maybe_tuple_scc_2_11_0)
MR_decl_static(transform_hlds__tupling__candidate_headvars_of_proc_3_0)
MR_decl_static(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0)
MR_decl_static(transform_hlds__tupling__maybe_tuple_scc_10_0)
MR_decl_static(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0)
MR_decl_static(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0)
MR_decl_static(transform_hlds__tupling__find_best_tupling_scheme_2_8_0)
MR_decl_static(transform_hlds__tupling__make_tupling_proposal_5_0)
MR_decl_static(transform_hlds__tupling__make_transformed_proc_5_0)
MR_decl_static(transform_hlds__tupling__create_aux_pred_9_0)
MR_decl_static(transform_hlds__tupling__build_interval_info_3_0)
MR_decl_static(transform_hlds__tupling__build_insert_map_4_0)
MR_decl_static(transform_hlds__tupling__add_transformed_proc_8_0)
MR_decl_static(fn__transform_hlds__tupling__get_tupling_proposal_2_0)
MR_decl_static(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0)
MR_decl_static(transform_hlds__tupling__prepare_proc_for_counting_5_0)
MR_decl_static(transform_hlds__tupling__cls_require_in_regs_4_0)
MR_decl_static(transform_hlds__tupling__cls_require_flushed_4_0)
MR_decl_static(transform_hlds__tupling__cls_clobber_regs_3_0)
MR_decl_static(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0)
MR_decl_static(transform_hlds__tupling__cls_require_normal_var_in_reg_4_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0)
MR_decl_static(transform_hlds__tupling__cls_put_in_regs_3_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0)
MR_decl_static(transform_hlds__tupling__reset_count_state_counts_2_0)
MR_decl_static(transform_hlds__tupling__add_branch_costs_4_0)
MR_decl_static(transform_hlds__tupling__get_disjunct_relative_frequency_4_0)
MR_decl_static(transform_hlds__tupling__get_case_relative_frequency_4_0)
MR_decl_static(transform_hlds__tupling__cls_require_in_reg_4_0)
MR_decl_static(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0)
MR_decl_static(transform_hlds__tupling__get_ite_relative_frequencies_6_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_goal_4_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_conj_4_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_disj_4_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_cases_4_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_in_proc_3_0)
MR_decl_static(transform_hlds__tupling__count_load_stores_for_scc_2_10_0)
MR_decl_static(transform_hlds__tupling__cls_require_flushed_with_cost_4_0)
MR_decl_static(transform_hlds__tupling__cls_require_flushed_2_5_0)
MR_decl_static(transform_hlds__tupling__combine_inserts_3_0)
MR_decl_static(transform_hlds__tupling__build_insert_map_2_7_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_procs_4_0)
MR_decl_static(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0)
MR_decl_static(transform_hlds__tupling__extract_tupled_args_from_list_4_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_goal_9_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_conj_9_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_goal_list_9_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_cases_9_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_proc_4_0)
MR_decl_static(transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_0)
MR_decl_static(transform_hlds__tupling__get_switch_total_count_2_5_0)
MR_decl_static(__Unify___transform_hlds__tupling__candidate_headvar_origins_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__candidate_headvar_origins_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__candidate_headvars_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__candidate_headvars_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__costs_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__costs_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__count_info_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__count_info_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__count_state_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__count_state_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__opt_tuple_alloc_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__opt_tuple_alloc_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__transform_map_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__transform_map_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__transformed_proc_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__transformed_proc_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__tuning_params_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__tuning_params_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__tupling_proposal_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__tupling_proposal_0_0)
MR_decl_static(__Unify___transform_hlds__tupling__tupling_scheme_0_0)
MR_decl_static(__Compare___transform_hlds__tupling__tupling_scheme_0_0)
MR_decl_static(transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0)
MR_decl_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
MR_decl_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
MR_decl_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)
MR_decl_static(transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1_3_0)
MR_decl_static(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0)
MR_decl_static(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__642__1_3_0)
MR_decl_static(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__650__1_3_0)
MR_decl_static(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0)
MR_decl_static(transform_hlds__tupling__IntroducedFrom__pred__count_load_stores_in_goal__1057__1_3_0)
MR_decl_static(transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1876__1_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
static const struct mercury_type_0 mercury_common_0[23] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,12)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,12)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,3),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,5),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_COMMON(1,18)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_TAG_COMMON(0,1,19)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_key_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;
static const struct mercury_type_1 mercury_common_1[21] =
{
{
{
MR_CTOR1_ADDR(digraph, digraph),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,10)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,9)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,12)
}
},
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, interval_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,14)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__,
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(1,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, insert_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, insert_spec)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__,
MR_CTOR0_ADDR(transform_hlds__tupling, opt_tuple_alloc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_2;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,0),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_2,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,8),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_2,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,8),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__make_tupling_proposal_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__make_transformed_proc_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_in_regs_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_count_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_count_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_proc_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__fix_calls_in_procs_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_1;
static const struct mercury_type_3 mercury_common_3[13] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,10),
MR_COMMON(1,7),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__make_tupling_proposal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,12),
MR_COMMON(0,13),
MR_COMMON(0,17)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__make_transformed_proc_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,12),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(0,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_require_in_regs_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__tupling, count_info),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__tupling, count_info),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_proc_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__tupling, count_info),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__fix_calls_in_procs_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__tupling, count_info),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_3;
static const struct mercury_type_4 mercury_common_4[13] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,7),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(transform_hlds__tupling, tuning_params),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state),
MR_CTOR0_ADDR(transform_hlds__tupling, count_state)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_procs_7_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__add_transformed_procs_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_6 mercury_common_6[6] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__tupling__add_transformed_proc_8_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__tupling__prepare_proc_for_counting_5_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1_3_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(11,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__candidate_headvars_of_proc_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__build_insert_map_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__candidate_headvars_of_proc_3_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,4),
MR_COMMON(0,11),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__build_insert_map_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,6),
MR_COMMON(1,12),
MR_COMMON(1,17),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info),
MR_COMMON(0,20),
MR_COMMON(0,20)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__extract_tupled_args_from_list_4_0_1;
static const struct mercury_type_8 mercury_common_8[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,15),
MR_COMMON(0,15),
MR_COMMON(0,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,11),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,12),
MR_COMMON(1,6),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,11),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__extract_tupled_args_from_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,12),
MR_INT_CTOR_ADDR,
MR_COMMON(1,6)
}
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
4
},
{
1
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_string_const("{}", 2)
},
{
MR_string_const("TuplingCellVar", 14)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_2;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,6)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,6)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__candidate_headvar_origins_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__candidate_headvar_origins_0_0)),
	"transform_hlds.tupling",
	"candidate_headvar_origins",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__candidate_headvars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__candidate_headvars_0_0)),
	"transform_hlds.tupling",
	"candidate_headvars",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_costs_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_costs_0_0[] = {
	"avg_loads",
	"avg_stores"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_costs_0_0 = {
	"costs",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_costs_0_0,
	mercury_data_transform_hlds__tupling__field_names_costs_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_costs_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_costs_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_costs_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_costs_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_costs_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_costs_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_costs_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_costs_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__costs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__costs_0_0)),
	"transform_hlds.tupling",
	"costs",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_costs_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_costs_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_costs_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_count_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_count_info_0_0[] = {
	"ci_pred_proc_id",
	"ci_proc",
	"ci_module",
	"ci_proc_counts",
	"ci_params",
	"ci_tupling_scheme",
	"ci_rev_goal_path_map"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_count_info_0_0 = {
	"count_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_count_info_0_0,
	mercury_data_transform_hlds__tupling__field_names_count_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_count_info_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_count_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_count_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_count_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_count_info_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_count_info_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_count_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_count_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__count_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__count_info_0_0)),
	"transform_hlds.tupling",
	"count_info",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_count_info_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_count_info_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_count_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_count_state_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_count_state_0_0[] = {
	"cs_reg_vars",
	"cs_stack_vars",
	"cs_load_costs",
	"cs_store_costs"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_count_state_0_0 = {
	"count_state",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_count_state_0_0,
	mercury_data_transform_hlds__tupling__field_names_count_state_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_count_state_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_count_state_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_count_state_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_count_state_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_count_state_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_count_state_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_count_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_count_state_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__count_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__count_state_0_0)),
	"transform_hlds.tupling",
	"count_state",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_count_state_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_count_state_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_count_state_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0 = {
	"opt_tuple_alloc",
	0
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[] = {
	&mercury_data_transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[] = {
	&mercury_data_transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__opt_tuple_alloc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__opt_tuple_alloc_0_0)),
	"transform_hlds.tupling",
	"opt_tuple_alloc",
	{ (void *)mercury_data_transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0 },
	{ (void *)mercury_data_transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_transform_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__transform_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__transform_map_0_0)),
	"transform_hlds.tupling",
	"transform_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_transformed_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_transformed_proc_0_0[] = {
	"transformed_pred_proc_id",
	"tuple_cons_type",
	"args_to_tuple",
	"call_template"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_transformed_proc_0_0 = {
	"transformed_proc",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_transformed_proc_0_0,
	mercury_data_transform_hlds__tupling__field_names_transformed_proc_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_transformed_proc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_transformed_proc_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_transformed_proc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__transformed_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__transformed_proc_0_0)),
	"transform_hlds.tupling",
	"transformed_proc",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_transformed_proc_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_transformed_proc_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_transformed_proc_0
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_tuning_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_tuning_params_0_0[] = {
	"tp_normal_var_load_cost",
	"tp_normal_var_store_cost",
	"tp_cell_var_load_cost",
	"tp_cell_var_store_cost",
	"tp_field_var_load_cost",
	"tp_field_var_store_cost",
	"tp_costs_ratio",
	"tp_min_args_to_tuple"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_tuning_params_0_0 = {
	"tuning_params",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_tuning_params_0_0,
	mercury_data_transform_hlds__tupling__field_names_tuning_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_tuning_params_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_tuning_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_tuning_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_tuning_params_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_tuning_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__tuning_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__tuning_params_0_0)),
	"transform_hlds.tupling",
	"tuning_params",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_tuning_params_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_tuning_params_0 },
	1,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_tuning_params_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0 = {
	"no_tupling",
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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__tupling__field_types_tupling_proposal_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__tupling__field_names_tupling_proposal_0_1[] = {
	"cell_var",
	"field_vars",
	"field_var_arg_pos"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1 = {
	"tupling",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__tupling__field_types_tupling_proposal_0_1,
	mercury_data_transform_hlds__tupling__field_names_tupling_proposal_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__tupling__du_name_ordered_tupling_proposal_0[] = {
	&mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0,
	&mercury_data_transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

const MR_Integer mercury_data_transform_hlds__tupling__functor_number_map_tupling_proposal_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__tupling_proposal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__tupling_proposal_0_0)),
	"transform_hlds.tupling",
	"tupling_proposal",
	{ (void *)mercury_data_transform_hlds__tupling__du_name_ordered_tupling_proposal_0 },
	{ (void *)mercury_data_transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0 },
	2,
	4,
	mercury_data_transform_hlds__tupling__functor_number_map_tupling_proposal_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__tupling__type_ctor_info_tupling_scheme_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__tupling__tupling_scheme_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__tupling__tupling_scheme_0_0)),
	"transform_hlds.tupling",
	"tupling_scheme",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 },
	-1,
	0,
	NULL
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_in_reg",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1344,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__extract_tupled_args_from_list_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_1876",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
1876,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__fix_calls_in_procs_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"fix_calls_in_proc",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1654,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_proc_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_in_reg",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1344,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_cases_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_disj_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_1057",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
1057,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.tupling",
"tupling.m",
1087,
"82"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_goal_4_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.tupling",
"tupling.m",
1086,
"80"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_var_in_reg_with_cost",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1429,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_var_in_reg_with_cost",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1439,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_var_in_reg_with_cost",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1429,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"get_switch_total_count_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1983,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__get_case_relative_frequency_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"get_switch_total_count_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1983,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_in_reg",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1344,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_flushed_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_flushed_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1461,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__cls_require_in_regs_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"cls_require_in_reg",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
1344,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_650",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
650,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_proc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_642",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
642,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__build_insert_map_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"build_insert_map_2",
7,
0
},
"transform_hlds.tupling",
"tupling.m",
1575,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__make_transformed_proc_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_680",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
680,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__make_tupling_proposal_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_560",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
560,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"count_load_stores_for_scc_2",
10,
0
},
"transform_hlds.tupling",
"tupling.m",
941,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__find_best_tupling_scheme_2_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"make_tupling_proposal",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
532,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"lambda_tupling_m_486",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
486,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_10_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"write_pred_proc_id",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
260,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"common_candidate_headvars_of_procs_2",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
474,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"candidate_headvars_of_proc",
3,
0
},
"transform_hlds.tupling",
"tupling.m",
470,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__candidate_headvars_of_proc_3_0_1 = {
{
MR_FUNCTION,
"transform_hlds.tupling",
"transform_hlds.tupling",
"candidate_headvars_of_proc_2",
7,
0
},
"transform_hlds.tupling",
"tupling.m",
447,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"count_load_stores_for_scc_2",
10,
0
},
"transform_hlds.tupling",
"tupling.m",
941,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__maybe_tuple_scc_2_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"prepare_proc_for_counting",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
331,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__add_transformed_procs_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"add_transformed_proc",
8,
0
},
"transform_hlds.tupling",
"tupling.m",
620,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"fix_calls_in_transformed_procs_2",
5,
0
},
"transform_hlds.tupling",
"tupling.m",
1660,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"fix_calls_in_procs",
4,
0
},
"transform_hlds.tupling",
"tupling.m",
223,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.tupling",
"transform_hlds.tupling",
"maybe_tuple_scc",
10,
0
},
"transform_hlds.tupling",
"tupling.m",
217,
"27"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__int__min_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module0)
	MR_init_entry1(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0);
	MR_init_label10(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,2,3,4,5,6,7,8,9,10,12)
	MR_init_label9(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,13,14,15,16,17,19,20,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tuple_arguments_with_trace_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i2);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 361;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i3);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 360;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i4);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 363;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i5);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 362;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i6);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 385;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i7);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 386;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i8);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__int__min_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i9);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__min_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i10);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_sv(2);
	MR_tfield(0, MR_r2, 7) = MR_sv(7);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i12);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i13);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i14);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i15);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i16);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i17);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__maybe_tuple_scc_10_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i19);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i20);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i23);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__fix_calls_in_procs_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0_i25);
MR_def_label(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(libs__compiler_util__report_warning_4_0);
MR_decl_entry(mdbcomp__trace_counts__read_trace_counts_source_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module1)
	MR_init_entry1(transform_hlds__tupling__tuple_arguments_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__tuple_arguments_4_0);
	MR_init_label10(transform_hlds__tupling__tuple_arguments_4_0,2,3,4,7,10,11,12,13,14,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tuple_arguments'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__tupling__tuple_arguments_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__tupling__tuple_arguments_4_0_i2);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 384;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		transform_hlds__tupling__tuple_arguments_4_0_i3);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(transform_hlds__tupling__tuple_arguments_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Warning: --tuple requires --tuple-trace-counts-file to work.\n", 61);
	MR_np_call_localret_ent(libs__compiler_util__report_warning_4_0,
		transform_hlds__tupling__tuple_arguments_4_0_i14);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		transform_hlds__tupling__tuple_arguments_4_0_i7);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__tuple_arguments_4_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__tupling__tuple_arguments_4_0_i10);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__tupling__tuple_arguments_4_0_i11);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__tupling__tuple_arguments_4_0_i12);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Warning: unable to read trace count summary from ", 49);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__tupling__tuple_arguments_4_0_i13);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__compiler_util__report_warning_4_0,
		transform_hlds__tupling__tuple_arguments_4_0_i14);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__tupling__tuple_arguments_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__tupling__tuple_arguments_with_trace_counts_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module2)
	MR_init_entry1(transform_hlds__tupling__should_use_tupling_scheme_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__should_use_tupling_scheme_3_0);
	MR_init_label3(transform_hlds__tupling__should_use_tupling_scheme_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_use_tupling_scheme'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__should_use_tupling_scheme_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 6);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__should_use_tupling_scheme_3_0_i2);
MR_def_label(transform_hlds__tupling__should_use_tupling_scheme_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(3)) + MR_word_to_float(MR_sv(4))));
	MR_r3 = MR_float_to_word((MR_word_to_float(MR_sv(1)) + MR_word_to_float(MR_sv(2))));
	if ((MR_word_to_float(MR_r2) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(transform_hlds__tupling__should_use_tupling_scheme_3_0_i3);
	}
	MR_r1 = (MR_word_to_float(MR_r3) > (MR_Float) 0.0000000000000000);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__tupling__should_use_tupling_scheme_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r3) * (MR_Float) 100.00000000000000));
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		transform_hlds__tupling__should_use_tupling_scheme_3_0_i5);
MR_def_label(transform_hlds__tupling__should_use_tupling_scheme_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) >= MR_word_to_float(MR_sv(1)));
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl3_8_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module3)
	MR_init_entry1(transform_hlds__tupling__add_transformed_procs_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__add_transformed_procs_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_transformed_procs'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__add_transformed_procs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr4 = MR_r4;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(map__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);
MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module4)
	MR_init_entry1(transform_hlds__tupling__maybe_tuple_scc_3_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__maybe_tuple_scc_3_13_0);
	MR_init_label8(transform_hlds__tupling__maybe_tuple_scc_3_13_0,2,25,4,6,11,14,28,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_tuple_scc_3'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__maybe_tuple_scc_3_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r10;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r7;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tfield(0, MR_r2, 7);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0,
		transform_hlds__tupling__maybe_tuple_scc_3_13_0_i2);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_3_13_0_i4);
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_3_13_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__should_use_tupling_scheme_3_0,
		transform_hlds__tupling__maybe_tuple_scc_3_13_0_i14);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("%% SCC costs with tupling = {%g, %g}\n", 37);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(io__format_4_0,
		transform_hlds__tupling__maybe_tuple_scc_3_13_0_i11);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__tupling__should_use_tupling_scheme_3_0,
		transform_hlds__tupling__maybe_tuple_scc_3_13_0_i14);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_3_13_0_i25);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_3_13_0_i17);
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__tupling__add_transformed_procs_7_0);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_3_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("% Proceeding with tupling\n", 26);
	MR_np_call_localret_ent(io__print_3_0,
		transform_hlds__tupling__maybe_tuple_scc_3_13_0_i28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(transform_hlds__tupling_module5)
	MR_init_entry1(transform_hlds__tupling__maybe_tuple_scc_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__maybe_tuple_scc_2_11_0);
	MR_init_label9(transform_hlds__tupling__maybe_tuple_scc_2_11_0,3,6,7,9,23,12,11,18,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_tuple_scc_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__maybe_tuple_scc_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(7) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__maybe_tuple_scc_2_11_0_i3);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__tupling__maybe_tuple_scc_2_11_0_i6);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__maybe_tuple_scc_2_11_0_i7);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__count_load_stores_for_scc_2_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r7 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__tupling__maybe_tuple_scc_2_11_0_i9);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_2_11_0_i12);
	}
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_2_11_0_i11);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%% SCC costs without tupling = {%g, %g}\n", 40);
	}
	MR_np_call_localret_ent(io__format_4_0,
		transform_hlds__tupling__maybe_tuple_scc_2_11_0_i23);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_2_11_0_i18);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_tempr1) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_2_11_0_i22);
	}
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(transform_hlds__tupling__maybe_tuple_scc_3_13_0);
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__list__filter_map_corresponding_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module6)
	MR_init_entry1(transform_hlds__tupling__candidate_headvars_of_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__candidate_headvars_of_proc_3_0);
	MR_init_label5(transform_hlds__tupling__candidate_headvars_of_proc_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_headvars_of_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__candidate_headvars_of_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__candidate_headvars_of_proc_3_0_i2);
MR_def_label(transform_hlds__tupling__candidate_headvars_of_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__tupling__candidate_headvars_of_proc_3_0_i3);
MR_def_label(transform_hlds__tupling__candidate_headvars_of_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__candidate_headvars_of_proc_3_0_i4);
MR_def_label(transform_hlds__tupling__candidate_headvars_of_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__tupling__candidate_headvars_of_proc_3_0_i5);
MR_def_label(transform_hlds__tupling__candidate_headvars_of_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__tupling__candidate_headvars_of_proc_3_0_i6);
MR_def_label(transform_hlds__tupling__candidate_headvars_of_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(multi_map__from_flat_assoc_list_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module7)
	MR_init_entry1(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__common_candidate_headvars_of_procs_3_0);
	MR_init_label3(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_candidate_headvars_of_procs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__candidate_headvars_of_proc_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_i7);
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_i8);
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__from_flat_assoc_list_2_0,
		transform_hlds__tupling__common_candidate_headvars_of_procs_3_0_i9);
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(list__member_2_1);
MR_decl_entry(digraph__lookup_key_3_0);
MR_decl_entry(digraph__lookup_to_3_0);
MR_decl_entry(set__empty_1_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module8)
	MR_init_entry1(transform_hlds__tupling__maybe_tuple_scc_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__maybe_tuple_scc_10_0);
	MR_init_label10(transform_hlds__tupling__maybe_tuple_scc_10_0,2,3,5,6,8,9,4,14,15,16)
	MR_init_label10(transform_hlds__tupling__maybe_tuple_scc_10_0,19,13,21,22,25,31,45,33,27,11)
	MR_init_label1(transform_hlds__tupling__maybe_tuple_scc_10_0,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_tuple_scc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__maybe_tuple_scc_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i2);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i3);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i5);
	}
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i4);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Considering tupling in ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i6);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i8);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("...\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i9);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__tupling__maybe_tuple_scc_10_0_i13);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i14);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i15);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_to_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i16);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i19);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i21);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i11);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i22);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__candidate_headvars_of_proc_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i25);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__tupling__common_candidate_headvars_of_procs_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i25);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_sv(2), 7);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i31);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i27);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i33);
	}
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Too few candidate headvars.\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i45);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(transform_hlds__tupling__maybe_tuple_scc_2_11_0);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__maybe_tuple_scc_10_0_i38);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__tupling__maybe_tuple_scc_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% SCC has no local callers.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__tupling__maybe_tuple_scc_10_0_i45);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(fn__map__singleton_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module9)
	MR_init_entry1(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0);
	MR_init_label6(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,2,5,8,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_headvars_of_proc_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i2);
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i5);
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i8);
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__search_name_3_0,
		fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i10);
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0_i12);
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__tupling__candidate_headvars_of_proc_2_6_0,1)
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

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module10)
	MR_init_entry1(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0);
	MR_init_label3(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0,6,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_candidate_headvars_of_procs_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_i6);
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0_i9);
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module11)
	MR_init_entry1(transform_hlds__tupling__find_best_tupling_scheme_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__find_best_tupling_scheme_2_8_0);
	MR_init_label6(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,3,4,6,10,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_best_tupling_scheme_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__find_best_tupling_scheme_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__make_tupling_proposal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_r6;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i3);
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i4);
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__count_load_stores_for_scc_2_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r7 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i6);
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i10);
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i9);
	}
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr3, 0)) + MR_word_to_float(MR_tfield(0, MR_tempr3, 1))));
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(6), 0), 0);
	MR_tempr2 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 0)) + MR_word_to_float(MR_tfield(0, MR_tempr1, 1))));
	if ((MR_word_to_float(MR_r2) >= MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(transform_hlds__tupling__find_best_tupling_scheme_2_8_0_i8);
	}
	MR_r1 = MR_tempr3;
	}
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(fn__assoc_list__keys_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module12)
	MR_init_entry1(transform_hlds__tupling__make_tupling_proposal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__make_tupling_proposal_5_0);
	MR_init_label8(transform_hlds__tupling__make_tupling_proposal_5_0,2,3,4,10,12,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_tupling_proposal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__make_tupling_proposal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i2);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i3);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i4);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i10);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i12);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(transform_hlds__tupling__make_tupling_proposal_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("DummyCellVar", 12);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i13);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		transform_hlds__tupling__make_tupling_proposal_5_0_i14);
MR_def_label(transform_hlds__tupling__make_tupling_proposal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__keys_and_values_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(backend_libs__interval__record_decisions_in_goal_10_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_tuple_3_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(backend_libs__interval__make_inserted_goal_9_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
MR_decl_entry(map__old_merge_3_0);
MR_decl_entry(backend_libs__interval__apply_headvar_correction_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module13)
	MR_init_entry1(transform_hlds__tupling__make_transformed_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__make_transformed_proc_5_0);
	MR_init_label10(transform_hlds__tupling__make_transformed_proc_5_0,2,3,7,8,10,11,12,14,15,16)
	MR_init_label10(transform_hlds__tupling__make_transformed_proc_5_0,17,18,20,21,22,23,25,26,29,30)
	MR_init_label6(transform_hlds__tupling__make_transformed_proc_5_0,31,32,33,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_transformed_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__make_transformed_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i2);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i3);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_map_corresponding_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i7);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i8);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i10);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i11);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i12);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i14);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i15);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i16);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i17);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i18);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i20);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_10_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i21);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_tuple_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i22);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i23);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i25);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__interval__make_inserted_goal_9_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i26);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i29);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i30);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__old_merge_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i31);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i32);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__interval__apply_headvar_correction_4_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i33);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i34);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i35);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__tupling__make_transformed_proc_5_0_i36);
MR_def_label(transform_hlds__tupling__make_transformed_proc_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__quantification__requantify_proc_general_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(mdbcomp__prim_data__add_sym_name_suffix_3_0);
MR_decl_entry(hlds__hlds_pred__define_new_pred_19_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module14)
	MR_init_entry1(transform_hlds__tupling__create_aux_pred_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__create_aux_pred_9_0);
	MR_init_label10(transform_hlds__tupling__create_aux_pred_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__tupling__create_aux_pred_9_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label3(transform_hlds__tupling__create_aux_pred_9_0,22,23,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_aux_pred'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__create_aux_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i2);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i3);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__tupling__create_aux_pred_9_0_i4);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i5);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i6);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i7);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i8);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i9);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i10);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i11);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i12);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i13);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__tupling__create_aux_pred_9_0_i14);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__tupling__create_aux_pred_9_0_i15);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__tupling__create_aux_pred_9_0_i16);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__tupling__create_aux_pred_9_0_i17);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i18);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = (MR_Word) MR_string_const("tupling", 7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__tupling__create_aux_pred_9_0_i19);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i20);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__tupling__create_aux_pred_9_0_i21);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__tupling__create_aux_pred_9_0_i22);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__add_sym_name_suffix_3_0,
		transform_hlds__tupling__create_aux_pred_9_0_i23);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(17);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(16);
	MR_r13 = (MR_Integer) 1;
	MR_r14 = MR_sv(18);
	MR_r15 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__define_new_pred_19_0,
		transform_hlds__tupling__create_aux_pred_9_0_i26);
MR_def_label(transform_hlds__tupling__create_aux_pred_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__arg_info__partition_proc_args_5_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(fn__set__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0;
MR_decl_entry(fn__set__make_singleton_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0;
MR_decl_entry(backend_libs__interval__build_interval_info_in_goal_5_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module15)
	MR_init_entry1(transform_hlds__tupling__build_interval_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__build_interval_info_3_0);
	MR_init_label10(transform_hlds__tupling__build_interval_info_3_0,2,3,4,5,6,7,8,10,13,15)
	MR_init_label7(transform_hlds__tupling__build_interval_info_3_0,16,17,18,19,20,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_interval_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__build_interval_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__build_interval_info_3_0_i2);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__build_interval_info_3_0_i3);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_5_0,
		transform_hlds__tupling__build_interval_info_3_0_i4);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		transform_hlds__tupling__build_interval_info_3_0_i5);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__tupling__build_interval_info_3_0_i6);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		transform_hlds__tupling__build_interval_info_3_0_i7);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i8);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(17) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		transform_hlds__tupling__build_interval_info_3_0_i10);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		transform_hlds__tupling__build_interval_info_3_0_i13);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i15);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i16);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i17);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i18);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		transform_hlds__tupling__build_interval_info_3_0_i19);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i20);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i21);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_interval_info_3_0_i23);
MR_def_label(transform_hlds__tupling__build_interval_info_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 15) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(backend_libs__interval__build_interval_info_in_goal_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module16)
	MR_init_entry1(transform_hlds__tupling__build_insert_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__build_insert_map_4_0);
	MR_init_label2(transform_hlds__tupling__build_insert_map_4_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_insert_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__build_insert_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__build_insert_map_4_0_i3);
MR_def_label(transform_hlds__tupling__build_insert_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__build_insert_map_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_sv(3), 9);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__tupling__build_insert_map_4_0_i6);
MR_def_label(transform_hlds__tupling__build_insert_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_var_from_type_5_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module17)
	MR_init_entry1(transform_hlds__tupling__add_transformed_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__add_transformed_proc_8_0);
	MR_init_label10(transform_hlds__tupling__add_transformed_proc_8_0,36,4,5,7,8,10,13,15,16,18)
	MR_init_label6(transform_hlds__tupling__add_transformed_proc_8_0,19,20,21,22,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_transformed_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__add_transformed_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__add_transformed_proc_8_0_i36);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i4);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__tupling__build_interval_info_3_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i5);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i7);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i8);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__642__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i10);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i13);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,1);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i15);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i16);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__650__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i18);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__build_insert_map_4_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i19);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__make_transformed_proc_5_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i20);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i21);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i22);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__create_aux_pred_9_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i23);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__tupling__add_transformed_proc_8_0_i25);
MR_def_label(transform_hlds__tupling__add_transformed_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module18)
	MR_init_entry1(fn__transform_hlds__tupling__get_tupling_proposal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__tupling__get_tupling_proposal_2_0);
	MR_init_label2(fn__transform_hlds__tupling__get_tupling_proposal_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_tupling_proposal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__tupling__get_tupling_proposal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__transform_hlds__tupling__get_tupling_proposal_2_0_i3);
MR_def_label(fn__transform_hlds__tupling__get_tupling_proposal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__get_tupling_proposal_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__tupling__get_tupling_proposal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module19)
	MR_init_entry1(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__tupling__get_own_tupling_proposal_1_0);
	MR_init_label2(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_own_tupling_proposal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__transform_hlds__tupling__get_own_tupling_proposal_1_0_i3);
MR_def_label(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__arg_info__generate_proc_arg_info_4_0);
MR_decl_entry(ll_backend__liveness__detect_liveness_proc_4_0);
MR_decl_entry(ll_backend__liveness__initial_liveness_4_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(hlds__goal_path__fill_goal_id_slots_in_proc_4_0);
MR_decl_entry(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module20)
	MR_init_entry1(transform_hlds__tupling__prepare_proc_for_counting_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__prepare_proc_for_counting_5_0);
	MR_init_label10(transform_hlds__tupling__prepare_proc_for_counting_5_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label7(transform_hlds__tupling__prepare_proc_for_counting_5_0,14,15,17,18,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_proc_for_counting'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__prepare_proc_for_counting_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i2);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i3);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_arg_info_4_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i4);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_proc_4_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i5);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i6);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i7);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i8);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 307;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i9);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i11);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i12);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i14);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i15);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i17);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i18);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i20);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i21);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__tupling__prepare_proc_for_counting_5_0_i22);
MR_def_label(transform_hlds__tupling__prepare_proc_for_counting_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module21)
	MR_init_entry1(transform_hlds__tupling__cls_require_in_regs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_in_regs_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_in_regs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_in_regs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module22)
	MR_init_entry1(transform_hlds__tupling__cls_require_flushed_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_flushed_4_0);
	MR_init_label2(transform_hlds__tupling__cls_require_flushed_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_flushed'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_flushed_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__cls_require_flushed_4_0_i3);
MR_def_label(transform_hlds__tupling__cls_require_flushed_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__tupling__cls_require_flushed_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module23)
	MR_init_entry1(transform_hlds__tupling__cls_clobber_regs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_clobber_regs_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_clobber_regs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_clobber_regs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module24)
	MR_init_entry1(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
	MR_init_label4(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,4,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_var_in_reg_with_cost'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0_i4);
MR_def_label(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0_i7);
MR_def_label(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0_i8);
MR_def_label(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_float_to_word((MR_word_to_float(MR_sv(6)) + MR_word_to_float(MR_r1)));
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module25)
	MR_init_entry1(transform_hlds__tupling__cls_require_normal_var_in_reg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_normal_var_in_reg_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_normal_var_in_reg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_normal_var_in_reg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 4), 0);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__arg_info__partition_proc_call_args_7_0);
MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(list__nth_member_search_3_0);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module26)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0);
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,2,3,4,6,13,15,17,19,14,11)
	MR_init_label6(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,22,24,5,25,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_call_to_tupled'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i2);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i3);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__tupling__get_own_tupling_proposal_1_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i6);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i5);
	}
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(15));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i11);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i13);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i15);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i14);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i17);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__nth_member_search_3_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i19);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i14);
	}
	if ((MR_sv(9) == MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(15));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_normal_var_in_reg_4_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i22);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__delete_list_3_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i24);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i29);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(2), 4), 3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i25);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr2, 3)) + MR_word_to_float(MR_r1)));
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i29);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0_i30);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module27)
	MR_init_entry1(transform_hlds__tupling__cls_put_in_regs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_put_in_regs_3_0);
	MR_init_label1(transform_hlds__tupling__cls_put_in_regs_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_put_in_regs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_put_in_regs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__tupling__cls_put_in_regs_3_0_i3);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module28)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0);
	MR_init_label9(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,2,3,4,6,10,11,12,8,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_call_to_not_tupled'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(4) = MR_tfield(2, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_r4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i2);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i3);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i6);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i10);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i11);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i12);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0_i14);
MR_def_label(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module29)
	MR_init_entry1(transform_hlds__tupling__reset_count_state_counts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__reset_count_state_counts_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_count_state_counts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__reset_count_state_counts_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_r2, 3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module30)
	MR_init_entry1(transform_hlds__tupling__add_branch_costs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__add_branch_costs_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_branch_costs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__add_branch_costs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr2, 2)) + (MR_word_to_float(MR_r2) * MR_word_to_float(MR_tfield(0, MR_r1, 2)))));
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr2, 3)) + (MR_word_to_float(MR_r2) * MR_word_to_float(MR_tfield(0, MR_r1, 3)))));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module31)
	MR_init_entry1(transform_hlds__tupling__get_disjunct_relative_frequency_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__get_disjunct_relative_frequency_4_0);
	MR_init_label10(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,2,10,9,14,16,15,18,19,21,22)
	MR_init_label1(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_disjunct_relative_frequency'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__get_disjunct_relative_frequency_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i2);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,9,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i10);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i9);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i14);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i16);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i18);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i19);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i21);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_disjunct_relative_frequency_4_0_i22);
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
MR_def_label(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.get_disjunct_relative_frequency\'/4", 68);
	MR_r3 = (MR_Word) MR_string_const("did not see disj(N) at head of goal path", 40);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module32)
	MR_init_entry1(transform_hlds__tupling__get_case_relative_frequency_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__get_case_relative_frequency_4_0);
	MR_init_label7(transform_hlds__tupling__get_case_relative_frequency_4_0,2,5,4,10,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_case_relative_frequency'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__get_case_relative_frequency_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i2);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i5);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_case_relative_frequency_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__get_switch_total_count_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i10);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__get_switch_total_count_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i10);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_case_relative_frequency_4_0_i11);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i13);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_case_relative_frequency_4_0_i14);
MR_def_label(transform_hlds__tupling__get_case_relative_frequency_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module33)
	MR_init_entry1(transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_init_label10(transform_hlds__tupling__cls_require_in_reg_4_0,5,4,7,8,10,13,12,15,16,18)
	MR_init_label4(transform_hlds__tupling__cls_require_in_reg_4_0,20,17,24,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_in_reg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_in_reg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i5);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i4);
	}
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i7);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i8);
	}
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i2);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i10);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i13);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i15);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i16);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i18);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_in_reg_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i20);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_float_to_word((MR_word_to_float(MR_sv(8)) + MR_word_to_float(MR_sv(4))));
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__tupling__cls_require_in_reg_4_0_i24);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_float_to_word(((MR_word_to_float(MR_sv(8)) + MR_word_to_float(MR_sv(3))) + MR_word_to_float(MR_sv(4))));
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__tupling__cls_require_in_reg_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_require_normal_var_in_reg_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__non_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module34)
	MR_init_entry1(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0);
	MR_init_label10(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,3,7,6,12,13,14,17,19,16,2)
	MR_init_label1(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_put_in_regs_via_deconstruct'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i3);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i7);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i12);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i13);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i14);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__non_empty_1_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i17);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i19);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0,
		transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0_i23);
MR_def_label(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt50000000000000000 = 0.50000000000000000;

MR_BEGIN_MODULE(transform_hlds__tupling_module35)
	MR_init_entry1(transform_hlds__tupling__get_ite_relative_frequencies_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__get_ite_relative_frequencies_6_0);
	MR_init_label10(transform_hlds__tupling__get_ite_relative_frequencies_6_0,2,3,6,5,10,12,11,14,16,17)
	MR_init_label5(transform_hlds__tupling__get_ite_relative_frequencies_6_0,18,19,20,21,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_ite_relative_frequencies'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__get_ite_relative_frequencies_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i2);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i3);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i6);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_ite_relative_frequencies_6_0_i5);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__tupling__get_ite_relative_frequencies_6_0_i10);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i12);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_ite_relative_frequencies_6_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_GOTO_LAB(transform_hlds__tupling__get_ite_relative_frequencies_6_0_i14);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(2) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_ite_relative_frequencies_6_0_i15);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i16);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i17);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i18);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i19);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i20);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		transform_hlds__tupling__get_ite_relative_frequencies_6_0_i21);
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__tupling__get_ite_relative_frequencies_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt50000000000000000;
	MR_r2 = (MR_Word) &mercury_float_const_0pt50000000000000000;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0);
MR_decl_entry(require__sorry_3_0);
MR_decl_entry(hlds__arg_info__compute_in_and_out_vars_6_0);
MR_decl_entry(ll_backend__call_gen__generic_call_info_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module36)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_goal_4_0);
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0,250,4,7,9,10,11,12,13,15,14)
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0,19,3,24,22,27,30,31,34,35,38)
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0,37,40,41,42,43,44,45,29,48,51)
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0,52,53,54,55,56,57,58,59,50,47)
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_goal_4_0,63,66,65,261,62,74,70,71,69,80)
	MR_init_label9(transform_hlds__tupling__count_load_stores_in_goal_4_0,79,85,90,89,94,93,97,99,87)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_r3;
	MR_sv(6) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i7);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i9);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i10);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i11);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i12);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i13);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i15);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i14);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i14);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_in_regs_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i19);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_clobber_regs_3_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i24);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__count_load_stores_in_conj_4_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("tupling with parallel conjunctions", 34);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i27);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__count_load_stores_in_disj_4_0);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i29);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(7) = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i30);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i31);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__IntroducedFrom__pred__count_load_stores_in_goal__1057__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i34);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_6_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i35);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i37);
	}
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_in_regs_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i38);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_put_in_regs_3_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i40);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i41);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__generic_call_info_7_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i42);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i43);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i44);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i45);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i47);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i48);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_flushed_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i51);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i52);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__tupling__reset_count_state_counts_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i53);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i54);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i55);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(1), 3);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i56);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i57);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(1), 6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__get_ite_relative_frequencies_6_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i58);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__add_branch_costs_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i59);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__add_branch_costs_4_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("no_resume_point for if_then_else", 32);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i62);
	}
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_body((MR_Integer) MR_r4, (MR_Integer) 0);
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i63);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_flushed_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i66);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i250);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("no_resume_point for not", 23);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i261);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i250);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i69);
	}
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(2, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i71);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__tupling__get_tupling_proposal_2_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i74);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i70);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(7);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i80);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i80);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i250);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i85);
	}
	MR_r1 = MR_tfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__count_load_stores_in_cases_4_0);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i87);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 3);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i89);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_in_reg_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i90);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_put_in_regs_3_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i93);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__cls_require_in_regs_4_0,
		transform_hlds__tupling__count_load_stores_in_goal_4_0_i94);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_put_in_regs_3_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i97);
	}
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_goal_4_0_i99);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_require_in_regs_4_0);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__tupling__count_load_stores_in_goal_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module37)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_conj_4_0);
	MR_init_label3(transform_hlds__tupling__count_load_stores_in_conj_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__tupling__count_load_stores_in_conj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_conj_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__tupling__count_load_stores_in_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_conj_4_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_conj_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module38)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_disj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_disj_4_0);
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_disj_4_0,41,3,4,6,8,7,15,5,17,18)
	MR_init_label2(transform_hlds__tupling__count_load_stores_in_disj_4_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_disj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_disj_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_disj_4_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_disj_4_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i8);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_disj_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i15);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i15);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i17);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(1), 3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i18);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__get_disjunct_relative_frequency_4_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i19);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__add_branch_costs_4_0,
		transform_hlds__tupling__count_load_stores_in_disj_4_0_i20);
MR_def_label(transform_hlds__tupling__count_load_stores_in_disj_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_disj_4_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module39)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_cases_4_0);
	MR_init_label10(transform_hlds__tupling__count_load_stores_in_cases_4_0,41,3,4,6,8,7,5,16,17,18)
	MR_init_label2(transform_hlds__tupling__count_load_stores_in_cases_4_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_cases_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_sv(5) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_cases_4_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_cases_4_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i8);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_cases_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__tupling__reset_count_state_counts_2_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i16);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i17);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_sv(1), 3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i18);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_sv(1), 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__tupling__get_case_relative_frequency_4_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i19);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__add_branch_costs_4_0,
		transform_hlds__tupling__count_load_stores_in_cases_4_0_i20);
MR_def_label(transform_hlds__tupling__count_load_stores_in_cases_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_in_cases_4_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module40)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_in_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_in_proc_3_0);
	MR_init_label7(transform_hlds__tupling__count_load_stores_in_proc_3_0,2,4,6,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_in_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_in_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(1), 0), 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i2);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_r2, 3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i6);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__tupling__count_load_stores_in_goal_4_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i7);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_5_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i8);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i9);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__tupling__count_load_stores_in_proc_3_0_i11);
MR_def_label(transform_hlds__tupling__count_load_stores_in_proc_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;

MR_BEGIN_MODULE(transform_hlds__tupling_module41)
	MR_init_entry1(transform_hlds__tupling__count_load_stores_for_scc_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__count_load_stores_for_scc_2_10_0);
	MR_init_label10(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,2,3,4,5,6,7,8,10,11,17)
	MR_init_label7(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,15,20,23,25,26,27,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_load_stores_for_scc_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__count_load_stores_for_scc_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_r7;
	MR_sv(11) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i2);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i3);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i4);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i5);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i6);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i7);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i8);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(12);
	MR_tfield(0, MR_r2, 1) = MR_sv(13);
	MR_tfield(0, MR_r2, 2) = MR_sv(14);
	MR_tfield(0, MR_r2, 3) = MR_sv(15);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i10);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i11);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i17);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i20);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i14);
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i23);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__tupling__count_load_stores_in_proc_3_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i25);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i26);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(10)) + (MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(1)))));
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__count_load_stores_for_scc_2_10_0_i27);
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(11)) + (MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_sv(2)))));
	MR_decr_sp_and_return(16);
	}
MR_def_label(transform_hlds__tupling__count_load_stores_for_scc_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module42)
	MR_init_entry1(transform_hlds__tupling__cls_require_flushed_with_cost_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_flushed_with_cost_4_0);
	MR_init_label4(transform_hlds__tupling__cls_require_flushed_with_cost_4_0,4,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_flushed_with_cost'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_flushed_with_cost_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_with_cost_4_0_i4);
MR_def_label(transform_hlds__tupling__cls_require_flushed_with_cost_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_with_cost_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__tupling__cls_require_flushed_with_cost_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_with_cost_4_0_i7);
MR_def_label(transform_hlds__tupling__cls_require_flushed_with_cost_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_flushed_with_cost_4_0_i8);
MR_def_label(transform_hlds__tupling__cls_require_flushed_with_cost_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_float_to_word((MR_word_to_float(MR_sv(7)) + MR_word_to_float(MR_r1)));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module43)
	MR_init_entry1(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_init_label10(transform_hlds__tupling__cls_require_flushed_2_5_0,6,4,9,10,3,15,18,17,20,21)
	MR_init_label1(transform_hlds__tupling__cls_require_flushed_2_5_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cls_require_flushed_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__cls_require_flushed_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i6);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_2_5_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i9);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i10);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_float_to_word((MR_word_to_float(MR_sv(7)) + MR_word_to_float(MR_r1)));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(5) = MR_tfield(0, MR_r2, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i15);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_2_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i18);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__cls_require_flushed_2_5_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i20);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__tupling__cls_require_flushed_2_5_0_i21);
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word((MR_word_to_float(MR_sv(8)) + MR_word_to_float(MR_r1)));
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__tupling__cls_require_flushed_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_require_flushed_with_cost_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module44)
	MR_init_entry1(transform_hlds__tupling__combine_inserts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__combine_inserts_3_0);
	MR_init_label5(transform_hlds__tupling__combine_inserts_3_0,32,6,9,5,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_inserts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__combine_inserts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__combine_inserts_3_0_i32);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__tupling__combine_inserts_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		transform_hlds__tupling__combine_inserts_3_0_i6);
MR_def_label(transform_hlds__tupling__combine_inserts_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__combine_inserts_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__combine_inserts_3_0_i9);
MR_def_label(transform_hlds__tupling__combine_inserts_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__tupling__combine_inserts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__tupling__combine_inserts_3_0,
		transform_hlds__tupling__combine_inserts_3_0_i12);
MR_def_label(transform_hlds__tupling__combine_inserts_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module45)
	MR_init_entry1(transform_hlds__tupling__build_insert_map_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__build_insert_map_2_7_0);
	MR_init_label7(transform_hlds__tupling__build_insert_map_2_7_0,3,6,4,8,12,14,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_insert_map_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__build_insert_map_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_r5, 0);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__tupling__build_insert_map_2_7_0_i3);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__tupling__build_insert_map_2_7_0_i6);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__build_insert_map_2_7_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_tuple_3_0,
		transform_hlds__tupling__build_insert_map_2_7_0_i8);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__build_insert_map_2_7_0_i12);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__build_insert_map_2_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__tupling__combine_inserts_3_0,
		transform_hlds__tupling__build_insert_map_2_7_0_i14);
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(transform_hlds__tupling__build_insert_map_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module46)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_procs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_procs_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_procs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_procs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__fix_calls_in_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module47)
	MR_init_entry1(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__extract_tupled_args_from_list_2_4_0);
	MR_init_label5(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,24,3,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_tupled_args_from_list_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__tupling__extract_tupled_args_from_list_2_4_0_i5);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0_i24);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,
		transform_hlds__tupling__extract_tupled_args_from_list_2_4_0_i8);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module48)
	MR_init_entry1(transform_hlds__tupling__extract_tupled_args_from_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__extract_tupled_args_from_list_4_0);
	MR_init_label2(transform_hlds__tupling__extract_tupled_args_from_list_4_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_tupled_args_from_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__extract_tupled_args_from_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1876__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__tupling__extract_tupled_args_from_list_4_0_i4);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__extract_tupled_args_from_list_2_4_0,
		transform_hlds__tupling__extract_tupled_args_from_list_4_0_i5);
MR_def_label(transform_hlds__tupling__extract_tupled_args_from_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__construct_tuple_3_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_goal_general_11_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module49)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_goal_9_0);
	MR_init_label10(transform_hlds__tupling__fix_calls_in_goal_9_0,7,6,10,4,14,13,18,19,20,17)
	MR_init_label10(transform_hlds__tupling__fix_calls_in_goal_9_0,24,23,31,33,35,36,37,40,38,47)
	MR_init_label10(transform_hlds__tupling__fix_calls_in_goal_9_0,48,50,51,27,26,54,57,53,62,61)
	MR_init_label2(transform_hlds__tupling__fix_calls_in_goal_9_0,157,156)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i157);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i4);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r6;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_r7 = MR_tempr2;
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i6);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_list_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i7);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r7;
	MR_r1 = MR_tfield(3, MR_r6, 2);
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_conj_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i10);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i13);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_list_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i14);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,6)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i17);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i18);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i19);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i20);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,20)
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
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i23);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r6, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i24);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r6, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i157);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i31);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i27);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("TuplingCellVarForCall", 21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i33);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i35);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__tupling__extract_tupled_args_from_list_4_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i36);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_tuple_3_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i37);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i40);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tempr3 = MR_sv(5);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(2, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 5) = MR_tfield(2, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i48);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", 54);
	MR_r3 = (MR_Word) MR_string_const("not a call template", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i47);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i48);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i50);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_goal_general_11_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i51);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,5)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i53);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_r7 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i54);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i156);
	}
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i57);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,57)
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
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,4)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_9_0_i61);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_cases_9_0,
		transform_hlds__tupling__fix_calls_in_goal_9_0_i62);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", 54);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_9_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module50)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_conj_9_0);
	MR_init_label5(transform_hlds__tupling__fix_calls_in_conj_9_0,35,4,5,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_conj_9_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__tupling__fix_calls_in_conj_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_conj_9_0_i4);
MR_def_label(transform_hlds__tupling__fix_calls_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_conj_9_0,
		transform_hlds__tupling__fix_calls_in_conj_9_0_i5);
MR_def_label(transform_hlds__tupling__fix_calls_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_conj_9_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_conj_9_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__tupling__fix_calls_in_conj_9_0_i9);
MR_def_label(transform_hlds__tupling__fix_calls_in_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__tupling__fix_calls_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module51)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_goal_list_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_goal_list_9_0);
	MR_init_label3(transform_hlds__tupling__fix_calls_in_goal_list_9_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_goal_list'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_goal_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_goal_list_9_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_list_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_goal_list_9_0_i4);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_list_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_goal_list_9_0,
		transform_hlds__tupling__fix_calls_in_goal_list_9_0_i5);
MR_def_label(transform_hlds__tupling__fix_calls_in_goal_list_9_0,5)
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


MR_BEGIN_MODULE(transform_hlds__tupling_module52)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_cases_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_cases_9_0);
	MR_init_label3(transform_hlds__tupling__fix_calls_in_cases_9_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_cases'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_cases_9_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__tupling__fix_calls_in_cases_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_cases_9_0_i4);
MR_def_label(transform_hlds__tupling__fix_calls_in_cases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__tupling__fix_calls_in_cases_9_0,
		transform_hlds__tupling__fix_calls_in_cases_9_0_i6);
MR_def_label(transform_hlds__tupling__fix_calls_in_cases_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module53)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_proc_4_0);
	MR_init_label10(transform_hlds__tupling__fix_calls_in_proc_4_0,2,3,4,7,8,9,10,11,12,13)
	MR_init_label4(transform_hlds__tupling__fix_calls_in_proc_4_0,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i2);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i3);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_proc_4_0_i4);
	}
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__fix_calls_in_proc_4_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i7);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i8);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i9);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i10);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__fix_calls_in_goal_9_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i11);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i12);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i13);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i14);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i15);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i16);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__tupling__fix_calls_in_proc_4_0_i17);
MR_def_label(transform_hlds__tupling__fix_calls_in_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module54)
	MR_init_entry1(transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_transformed_procs_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module55)
	MR_init_entry1(transform_hlds__tupling__get_switch_total_count_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__get_switch_total_count_2_5_0);
	MR_init_label3(transform_hlds__tupling__get_switch_total_count_2_5_0,5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_switch_total_count_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__get_switch_total_count_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_switch_total_count_2_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,
		transform_hlds__tupling__get_switch_total_count_2_5_0_i5);
MR_def_label(transform_hlds__tupling__get_switch_total_count_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_switch_total_count_2_5_0_i2);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_switch_total_count_2_5_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__tupling__get_switch_total_count_2_5_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tfield(0, MR_sv(2), 1));
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__tupling__get_switch_total_count_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
MR_def_label(transform_hlds__tupling__get_switch_total_count_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module56)
	MR_init_entry1(__Unify___transform_hlds__tupling__candidate_headvar_origins_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__candidate_headvar_origins_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__candidate_headvar_origins_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
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

MR_BEGIN_MODULE(transform_hlds__tupling_module57)
	MR_init_entry1(__Compare___transform_hlds__tupling__candidate_headvar_origins_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__candidate_headvar_origins_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__candidate_headvar_origins_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module58)
	MR_init_entry1(__Unify___transform_hlds__tupling__candidate_headvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__candidate_headvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__candidate_headvars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module59)
	MR_init_entry1(__Compare___transform_hlds__tupling__candidate_headvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__candidate_headvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__candidate_headvars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
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


MR_BEGIN_MODULE(transform_hlds__tupling_module60)
	MR_init_entry1(__Unify___transform_hlds__tupling__costs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__costs_0_0);
	MR_init_label2(__Unify___transform_hlds__tupling__costs_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__costs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__costs_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__costs_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__tupling__costs_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__costs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module61)
	MR_init_entry1(__Compare___transform_hlds__tupling__costs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__costs_0_0);
	MR_init_label4(__Compare___transform_hlds__tupling__costs_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__costs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__costs_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__tupling__costs_0_0_i2);
MR_def_label(__Compare___transform_hlds__tupling__costs_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__tupling__costs_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___transform_hlds__tupling__costs_0_0_i5);
MR_def_label(__Compare___transform_hlds__tupling__costs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__costs_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___transform_hlds__tupling__costs_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module62)
	MR_init_entry1(__Unify___transform_hlds__tupling__count_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__count_info_0_0);
	MR_init_label8(__Unify___transform_hlds__tupling__count_info_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__count_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i18);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___transform_hlds__tupling__tuning_params_0_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__tupling__count_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__count_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module63)
	MR_init_entry1(__Compare___transform_hlds__tupling__count_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__count_info_0_0);
	MR_init_label9(__Compare___transform_hlds__tupling__count_info_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__count_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___transform_hlds__tupling__tuning_params_0_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__tupling__count_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__tupling__count_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module64)
	MR_init_entry1(__Unify___transform_hlds__tupling__count_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__count_state_0_0);
	MR_init_label4(__Unify___transform_hlds__tupling__count_state_0_0,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__count_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_state_0_0_i9);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__tupling__count_state_0_0_i5);
MR_def_label(__Unify___transform_hlds__tupling__count_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_state_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__tupling__count_state_0_0_i7);
MR_def_label(__Unify___transform_hlds__tupling__count_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_state_0_0_i1);
	}
	if ((MR_word_to_float(MR_sv(2)) != MR_word_to_float(MR_sv(5)))) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__count_state_0_0_i1);
	}
	MR_r1 = (MR_word_to_float(MR_sv(3)) == MR_word_to_float(MR_sv(6)));
	MR_decr_sp_and_return(8);
MR_def_label(__Unify___transform_hlds__tupling__count_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__count_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module65)
	MR_init_entry1(__Compare___transform_hlds__tupling__count_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__count_state_0_0);
	MR_init_label6(__Compare___transform_hlds__tupling__count_state_0_0,3,2,6,11,15,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__count_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_state_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_state_0_0_i2);
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__tupling__count_state_0_0_i6);
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_state_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__tupling__count_state_0_0_i11);
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_state_0_0_i51);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___transform_hlds__tupling__count_state_0_0_i15);
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__count_state_0_0_i51);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___transform_hlds__tupling__count_state_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module66)
	MR_init_entry1(__Unify___transform_hlds__tupling__opt_tuple_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__opt_tuple_alloc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__opt_tuple_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module67)
	MR_init_entry1(__Compare___transform_hlds__tupling__opt_tuple_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__opt_tuple_alloc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__opt_tuple_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module68)
	MR_init_entry1(__Unify___transform_hlds__tupling__transform_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__transform_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__transform_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module69)
	MR_init_entry1(__Compare___transform_hlds__tupling__transform_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__transform_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__transform_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, transformed_proc);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module70)
	MR_init_entry1(__Unify___transform_hlds__tupling__transformed_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__transformed_proc_0_0);
	MR_init_label5(__Unify___transform_hlds__tupling__transformed_proc_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__transformed_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__transformed_proc_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__tupling__transformed_proc_0_0_i4);
MR_def_label(__Unify___transform_hlds__tupling__transformed_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__transformed_proc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___transform_hlds__tupling__transformed_proc_0_0_i6);
MR_def_label(__Unify___transform_hlds__tupling__transformed_proc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__transformed_proc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__tupling__transformed_proc_0_0_i8);
MR_def_label(__Unify___transform_hlds__tupling__transformed_proc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__transformed_proc_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___transform_hlds__tupling__transformed_proc_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__transformed_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module71)
	MR_init_entry1(__Compare___transform_hlds__tupling__transformed_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__transformed_proc_0_0);
	MR_init_label6(__Compare___transform_hlds__tupling__transformed_proc_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__transformed_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__transformed_proc_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__tupling__transformed_proc_0_0_i2);
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__tupling__transformed_proc_0_0_i5);
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__transformed_proc_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___transform_hlds__tupling__transformed_proc_0_0_i9);
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__transformed_proc_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__tupling__transformed_proc_0_0_i13);
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__transformed_proc_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___transform_hlds__tupling__transformed_proc_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module72)
	MR_init_entry1(__Unify___transform_hlds__tupling__tuning_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__tuning_params_0_0);
	MR_init_label2(__Unify___transform_hlds__tupling__tuning_params_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__tuning_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tuning_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__tupling__tuning_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__tuning_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module73)
	MR_init_entry1(__Compare___transform_hlds__tupling__tuning_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__tuning_params_0_0);
	MR_init_label10(__Compare___transform_hlds__tupling__tuning_params_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__tuning_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i2);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i5);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i9);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i13);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i17);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i21);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i25);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__tupling__tuning_params_0_0_i29);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tuning_params_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__tupling__tuning_params_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module74)
	MR_init_entry1(__Unify___transform_hlds__tupling__tupling_proposal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__tupling_proposal_0_0);
	MR_init_label5(__Unify___transform_hlds__tupling__tupling_proposal_0_0,18,5,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__tupling_proposal_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tupling_proposal_0_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tupling_proposal_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__tupling__tupling_proposal_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__tupling__tupling_proposal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tupling_proposal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__tupling__tupling_proposal_0_0_i8);
MR_def_label(__Unify___transform_hlds__tupling__tupling_proposal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tupling_proposal_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__tupling__tupling_proposal_0_0_i10);
MR_def_label(__Unify___transform_hlds__tupling__tupling_proposal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__tupling__tupling_proposal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__tupling__tupling_proposal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module75)
	MR_init_entry1(__Compare___transform_hlds__tupling__tupling_proposal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__tupling_proposal_0_0);
	MR_init_label7(__Compare___transform_hlds__tupling__tupling_proposal_0_0,33,7,5,9,11,16,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__tupling_proposal_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__tupling__tupling_proposal_0_0_i11);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i24);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__tupling__tupling_proposal_0_0_i16);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__tupling__tupling_proposal_0_0_i24);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__tupling__tupling_proposal_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module76)
	MR_init_entry1(__Unify___transform_hlds__tupling__tupling_scheme_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__tupling__tupling_scheme_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__tupling__tupling_scheme_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module77)
	MR_init_entry1(__Compare___transform_hlds__tupling__tupling_scheme_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__tupling__tupling_scheme_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__tupling__tupling_scheme_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module78)
	MR_init_entry1(transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module79)
	MR_init_entry1(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module80)
	MR_init_entry1(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module81)
	MR_init_entry1(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module82)
	MR_init_entry1(transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__486__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__old_merge_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module83)
	MR_init_entry1(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0);
	MR_init_label3(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_tupling_proposal__560__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0_i3);
MR_def_label(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__nth_member_search_3_0,
		fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0_i5);
MR_def_label(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__560__1_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__tupling_module84)
	MR_init_entry1(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__642__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__642__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_transformed_proc__642__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__642__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__nth_member_lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module85)
	MR_init_entry1(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__650__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__650__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_transformed_proc__650__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__650__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__nth_member_lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module86)
	MR_init_entry1(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0);
	MR_init_label2(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_transformed_proc__680__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0_i4);
MR_def_label(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__680__1_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__tupling_module87)
	MR_init_entry1(transform_hlds__tupling__IntroducedFrom__pred__count_load_stores_in_goal__1057__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__IntroducedFrom__pred__count_load_stores_in_goal__1057__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__count_load_stores_in_goal__1057__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__IntroducedFrom__pred__count_load_stores_in_goal__1057__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_index1_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module88)
	MR_init_entry1(transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1876__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1876__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extract_tupled_args_from_list__1876__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1876__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__det_index1_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_list_1_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module89)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0);
	MR_init_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,4,10,12,11,17,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__count_load_stores_for_call__[5]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_in_reg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, tupling_proposal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tupling__cls_require_flushed_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__tupling, count_state);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__tupling__cls_clobber_regs_3_0);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.tupling", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.tupling.count_load_stores_for_call\'/7", 63);
	MR_r3 = (MR_Word) MR_string_const("no need across call", 19);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module90)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_calls_in_transformed_procs_2__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(transform_hlds__tupling__fix_calls_in_proc_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module91)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___transform_hlds__tupling__opt_tuple_alloc_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module92)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___transform_hlds__tupling__opt_tuple_alloc_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module93)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8__[1, 2, 3, 4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module94)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module95)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module96)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__tupling_module97)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_over_list_runs__ho1__[6]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_r6, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__take_3_0);

MR_BEGIN_MODULE(transform_hlds__tupling_module98)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,19,7,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_over_list_runs_2__ho2__[6]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__take_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0_i5);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__tupling__find_best_tupling_scheme_2_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0_i19);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__tupling_maybe_bunch_0(void)
{
	transform_hlds__tupling_module0();
	transform_hlds__tupling_module1();
	transform_hlds__tupling_module2();
	transform_hlds__tupling_module3();
	transform_hlds__tupling_module4();
	transform_hlds__tupling_module5();
	transform_hlds__tupling_module6();
	transform_hlds__tupling_module7();
	transform_hlds__tupling_module8();
	transform_hlds__tupling_module9();
	transform_hlds__tupling_module10();
	transform_hlds__tupling_module11();
	transform_hlds__tupling_module12();
	transform_hlds__tupling_module13();
	transform_hlds__tupling_module14();
	transform_hlds__tupling_module15();
	transform_hlds__tupling_module16();
	transform_hlds__tupling_module17();
	transform_hlds__tupling_module18();
	transform_hlds__tupling_module19();
	transform_hlds__tupling_module20();
	transform_hlds__tupling_module21();
	transform_hlds__tupling_module22();
	transform_hlds__tupling_module23();
	transform_hlds__tupling_module24();
	transform_hlds__tupling_module25();
	transform_hlds__tupling_module26();
	transform_hlds__tupling_module27();
	transform_hlds__tupling_module28();
	transform_hlds__tupling_module29();
	transform_hlds__tupling_module30();
	transform_hlds__tupling_module31();
	transform_hlds__tupling_module32();
	transform_hlds__tupling_module33();
	transform_hlds__tupling_module34();
	transform_hlds__tupling_module35();
	transform_hlds__tupling_module36();
	transform_hlds__tupling_module37();
	transform_hlds__tupling_module38();
	transform_hlds__tupling_module39();
}

static void mercury__transform_hlds__tupling_maybe_bunch_1(void)
{
	transform_hlds__tupling_module40();
	transform_hlds__tupling_module41();
	transform_hlds__tupling_module42();
	transform_hlds__tupling_module43();
	transform_hlds__tupling_module44();
	transform_hlds__tupling_module45();
	transform_hlds__tupling_module46();
	transform_hlds__tupling_module47();
	transform_hlds__tupling_module48();
	transform_hlds__tupling_module49();
	transform_hlds__tupling_module50();
	transform_hlds__tupling_module51();
	transform_hlds__tupling_module52();
	transform_hlds__tupling_module53();
	transform_hlds__tupling_module54();
	transform_hlds__tupling_module55();
	transform_hlds__tupling_module56();
	transform_hlds__tupling_module57();
	transform_hlds__tupling_module58();
	transform_hlds__tupling_module59();
	transform_hlds__tupling_module60();
	transform_hlds__tupling_module61();
	transform_hlds__tupling_module62();
	transform_hlds__tupling_module63();
	transform_hlds__tupling_module64();
	transform_hlds__tupling_module65();
	transform_hlds__tupling_module66();
	transform_hlds__tupling_module67();
	transform_hlds__tupling_module68();
	transform_hlds__tupling_module69();
	transform_hlds__tupling_module70();
	transform_hlds__tupling_module71();
	transform_hlds__tupling_module72();
	transform_hlds__tupling_module73();
	transform_hlds__tupling_module74();
	transform_hlds__tupling_module75();
	transform_hlds__tupling_module76();
	transform_hlds__tupling_module77();
	transform_hlds__tupling_module78();
	transform_hlds__tupling_module79();
}

static void mercury__transform_hlds__tupling_maybe_bunch_2(void)
{
	transform_hlds__tupling_module80();
	transform_hlds__tupling_module81();
	transform_hlds__tupling_module82();
	transform_hlds__tupling_module83();
	transform_hlds__tupling_module84();
	transform_hlds__tupling_module85();
	transform_hlds__tupling_module86();
	transform_hlds__tupling_module87();
	transform_hlds__tupling_module88();
	transform_hlds__tupling_module89();
	transform_hlds__tupling_module90();
	transform_hlds__tupling_module91();
	transform_hlds__tupling_module92();
	transform_hlds__tupling_module93();
	transform_hlds__tupling_module94();
	transform_hlds__tupling_module95();
	transform_hlds__tupling_module96();
	transform_hlds__tupling_module97();
	transform_hlds__tupling_module98();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__tupling__init(void);
void mercury__transform_hlds__tupling__init_type_tables(void);
void mercury__transform_hlds__tupling__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__tupling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__tupling__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__tupling__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__tupling__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__tupling_maybe_bunch_0();
	mercury__transform_hlds__tupling_maybe_bunch_1();
	mercury__transform_hlds__tupling_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0,
		transform_hlds__tupling__candidate_headvar_origins_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvars_0,
		transform_hlds__tupling__candidate_headvars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_costs_0,
		transform_hlds__tupling__costs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_count_info_0,
		transform_hlds__tupling__count_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_count_state_0,
		transform_hlds__tupling__count_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0,
		transform_hlds__tupling__opt_tuple_alloc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_transform_map_0,
		transform_hlds__tupling__transform_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0,
		transform_hlds__tupling__transformed_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0,
		transform_hlds__tupling__tuning_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0,
		transform_hlds__tupling__tupling_proposal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__tupling__type_ctor_info_tupling_scheme_0,
		transform_hlds__tupling__tupling_scheme_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__, 5) =
			MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__, 6) =
			MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__, 7) =
			MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__, 5) =
			MR_ENTRY_AP(transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__transform_hlds__tupling__init_debugger();
}

void mercury__transform_hlds__tupling__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_candidate_headvars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_costs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_count_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_count_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_transform_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_transformed_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_tuning_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_tupling_proposal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__tupling__type_ctor_info_tupling_scheme_0);
	}
}


void mercury__transform_hlds__tupling__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__tupling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__tupling);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__tupling__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__tupling__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
