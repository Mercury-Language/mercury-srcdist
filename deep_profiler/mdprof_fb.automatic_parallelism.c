/*
** Automatically generated from `mdprof_fb.automatic_parallelism.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 27 "mdprof_fb.automatic_parallelism.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 31 "mdprof_fb.automatic_parallelism.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 35 "mdprof_fb.automatic_parallelism.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 39 "mdprof_fb.automatic_parallelism.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 43 "mdprof_fb.automatic_parallelism.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdprof_fb.automatic_parallelism.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdprof_fb.automatic_parallelism.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 55 "mdprof_fb.automatic_parallelism.c"
#line 56 "mdprof_fb.automatic_parallelism.c"
#include "mdprof_fb.automatic_parallelism.mh"

#line 59 "mdprof_fb.automatic_parallelism.c"
#line 60 "mdprof_fb.automatic_parallelism.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM_DECL_GUARD

#line 64 "mdprof_fb.automatic_parallelism.c"
#line 65 "mdprof_fb.automatic_parallelism.c"

#endif
#line 68 "mdprof_fb.automatic_parallelism.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_callsite_cost_info_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_clique_is_recursive_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_implicit_parallelism_info_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_maybe_call_conjunct_0,
	mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0;
MR_decl_label2(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0, 3,2)
MR_decl_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0, 2)
MR_decl_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0, 2)
MR_decl_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0, 2)
MR_decl_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0, 2,3,4)
MR_decl_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0, 2,3,4)
MR_decl_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0, 2,3,4)
MR_decl_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0, 2,3,4,5,7,10,13,15,16,17)
MR_decl_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0, 12,18,20,22,25,24,27,28,30,31)
MR_decl_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0, 32,33,34,35,38,39,40,41,9,43)
MR_decl_label8(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0, 44,6,45,47,48,49,50,51)
MR_decl_label4(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0, 4,6,7,8)
MR_decl_label1(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0, 2)
MR_decl_label6(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0, 2,5,7,8,11,9)
MR_decl_label10(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0, 5,10,23,9,14,15,13,8,7,2)
MR_decl_label10(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0, 3,5,6,12,9,13,15,8,18,17)
MR_decl_label4(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0, 20,2,23,24)
MR_decl_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0, 4,3,6,7,9,10,11,12,13,8)
MR_decl_label4(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0, 18,19,22,23)
MR_decl_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0, 77,3,34,6,7,8,9,11,12,15)
MR_decl_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0, 14,16,17,13,20,22,24,19,18,10)
MR_decl_label3(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0, 30,36,37)
MR_decl_label10(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0, 2,3,7,4,9,13,14,17,20,11)
MR_decl_label8(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0, 21,24,25,26,27,28,30,32)
MR_decl_label2(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0, 2,3)
MR_decl_label3(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0, 4,5,6)
MR_decl_label2(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0, 4,2)
MR_decl_label10(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0, 3,5,7,9,10,11,2,14,16,15)
MR_decl_label3(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0, 3,2,5)
MR_decl_label6(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0, 2,3,4,5,6,8)
MR_decl_label4(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0, 7,8,10,11)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0, 4,6,3,8,9,10,2,13,15,16)
MR_decl_label3(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0, 14,18,19)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0, 2,5,7,8,9,11,12,23,24,25)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0, 27,20,28,19,15,32,33,34,4,36)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0, 2,3,5,6,9,8,10,11,7,12)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0, 13,16,18,14,20,25,26,28,29,30)
MR_decl_label3(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0, 31,4,32)
MR_decl_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0, 2,6,3,8,10,13,14,17,20,21)
MR_decl_label6(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0, 22,24,27,16,28,30)
MR_decl_label2(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0, 3,4)
MR_decl_label2(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0, 2,3)
MR_decl_label10(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0, 47,2,3,6,7,8,9,10,15,13)
MR_decl_label8(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0, 18,19,20,21,22,24,25,23)
MR_decl_label10(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0, 2,3,4,5,6,7,10,11,12,15)
MR_decl_label2(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0, 16,17)
MR_decl_label10(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0, 4,5,3,8,9,12,14,16,17,18)
MR_decl_label3(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0, 10,21,22)
MR_decl_label10(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0, 2,3,4,5,6,11,15,18,14,9)
MR_decl_label4(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0, 8,24,27,23)
MR_decl_label10(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0, 4,5,3,7,8,9,10,11,12,13)
MR_decl_label4(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0, 2,3,4,6)
MR_decl_label6(mdprof_fb__automatic_parallelism__css_to_call_3_0, 2,10,11,6,8,14)
MR_decl_label2(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0, 3,4)
MR_decl_label10(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0, 4,3,6,7,8,9,10,12,13,14)
MR_decl_label9(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0, 2,3,4,5,6,9,11,7,13)
MR_decl_label3(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0, 4,6,2)
MR_decl_label4(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0, 19,4,3,1)
MR_decl_label9(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0, 37,5,7,18,23,9,11,14,16)
MR_decl_label10(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0, 11,13,24,29,4,7,8,9,10,15)
MR_decl_label6(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0, 16,17,18,20,22,23)
MR_decl_label10(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0, 2,3,4,5,6,7,10,12,14,15)
MR_decl_label10(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0, 16,8,19,21,20,23,25,24,28,29)
MR_decl_label2(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0, 31,32)
MR_decl_label10(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0, 2,3,4,5,6,7,8,9,10,14)
MR_decl_label3(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0, 15,16,17)
MR_decl_label1(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0, 2)
MR_decl_label10(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0, 3,52,91,6,10,7,8,16,92,20)
MR_decl_label10(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0, 24,21,22,30,93,36,40,37,38,46)
MR_decl_label1(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0, 2)
MR_decl_label4(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0, 2,3,4,5)
MR_decl_label10(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0, 4,3,6,7,8,9,10,12,13,14)
MR_decl_label5(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0, 5,7,9,11,12)
MR_decl_label2(mdprof_fb__automatic_parallelism__var_get_mode_4_0, 2,3)
MR_decl_label2(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0, 3,2)
MR_decl_label3(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0, 3,2,5)
MR_decl_label5(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0, 3,2,6,5,8)
MR_decl_label2(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0, 2,5)
MR_decl_label2(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0, 4,1)
MR_decl_label3(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0, 4,8,1)
MR_decl_label2(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0, 4,1)
MR_decl_label7(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0, 4,6,8,10,12,16,1)
MR_decl_label6(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0, 5,8,10,15,21,1)
MR_decl_label3(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0, 4,8,1)
MR_decl_label4(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0, 3,2,5,21)
MR_decl_label6(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0, 3,2,5,9,13,37)
MR_decl_label7(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0, 3,2,5,9,13,17,45)
MR_decl_label8(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label10(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0, 69,5,7,10,14,18,36,76,38,40)
MR_decl_label2(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0, 42,51)
MR_decl_label5(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0, 3,2,5,9,29)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__this_file_0_0)
MR_decl_static(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0)
MR_decl_static(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0)
MR_decl_static(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0)
MR_decl_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0)
MR_decl_static(mdprof_fb__automatic_parallelism__add_call_site_to_map_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__multiply_probability_merge_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0)
MR_decl_static(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__var_get_mode_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__css_to_call_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__add_call_site_report_to_map_3_0)
MR_def_extern_entry(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0)
MR_def_extern_entry(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)
MR_def_extern_entry(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0)
MR_def_extern_entry(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__make_clique_proc_map__207__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__switch_get_callsite_cost_info__609__1_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0)
MR_decl_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0)
MR_decl_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0)
MR_decl_static(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pqueue__type_ctor_info_pqueue_2;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, proc_desc),
MR_CTOR0_ADDR(report, clique_proc_report)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, proc_desc),
MR_CTOR0_ADDR(report, clique_proc_report)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(report, clique_call_site_report)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(report, clique_call_site_report)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_COMMON(3,11)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_TAG_COMMON(0,3,12)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,3,15)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pqueue, pqueue, 2),
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, cost_until_var_use)
}
},
{
{
MR_CTOR_ADDR(pqueue, pqueue, 2),
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, cost_until_var_use)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_2;
static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(report, clique_proc_report),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use),
MR_COMMON(3,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use),
MR_COMMON(3,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use),
MR_COMMON(3,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static),
MR_CTOR0_ADDR(mdbcomp__program_representation, call_site)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
};

static const struct mercury_type_2 mercury_common_2[9] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__make_clique_proc_map__207__1_3_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__switch_get_callsite_cost_info__609__1_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__add_call_site_to_map_3_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__add_call_site_report_to_map_3_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1_3_0),
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1_3_0),
0
},
{
MR_COMMON(10,6),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_perf_row_data_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0;
static const struct mercury_type_3 mercury_common_3[19] =
{
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, clique_desc)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(report, clique_call_site_report)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(report, clique_call_site_report)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(report, proc_desc)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, clique_desc)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_program_representation_utils__type_ctor_info_inst_map_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_5;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,2),
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,8),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,3),
MR_COMMON(3,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_callsite_cost_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_1;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(0,4),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_COMMON(3,4),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(0,4),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_COMMON(3,4),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_2;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(coverage, coverage_info),
MR_COMMON(3,4),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(coverage, coverage_info),
MR_COMMON(3,4),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_4;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_proc_cost_csq_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_clique_is_recursive_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_desc_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(measurements, proc_cost_csq),
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(3,5),
MR_COMMON(3,5),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, candidate_parallel_conjunctions_opts),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(3,13),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, clique_is_recursive),
MR_COMMON(0,6),
MR_COMMON(0,1),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(report, call_site_desc),
MR_COMMON(3,16),
MR_COMMON(0,9),
MR_COMMON(3,14)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_1;
static const struct mercury_type_10 mercury_common_10[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,18),
MR_INT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, candidate_parallel_conjunctions_opts),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(3,13),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, clique_is_recursive),
MR_COMMON(0,6),
MR_COMMON(0,1),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,9),
MR_COMMON(3,14)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0;

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_calls_above_threshold_sorted_opts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_calls_above_threshold_sorted_opts_0_0[] = {
	"cats_measure",
	"cats_threshold"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_calls_above_threshold_sorted_opts_0_0 = {
	"calls_above_threshold_sorted_opts",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_calls_above_threshold_sorted_opts_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_calls_above_threshold_sorted_opts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_calls_above_threshold_sorted_opts_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_calls_above_threshold_sorted_opts_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_calls_above_threshold_sorted_opts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_calls_above_threshold_sorted_opts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_calls_above_threshold_sorted_opts_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_calls_above_threshold_sorted_opts_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_calls_above_threshold_sorted_opts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0)),
	"mdprof_fb.automatic_parallelism",
	"calls_above_threshold_sorted_opts",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_calls_above_threshold_sorted_opts_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_calls_above_threshold_sorted_opts_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_calls_above_threshold_sorted_opts_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1report__type_ctor_info_clique_call_site_report_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_call_site_report_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0builtin__type_ctor_info_float_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_callsite_cost_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1report__type_ctor_info_clique_call_site_report_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_callsite_cost_info_0_0[] = {
	"csci_non_rec_cs_cost",
	"csci_rec_calls",
	"csci_rec_cs",
	"csci_cs_prob_map"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_callsite_cost_info_0_0 = {
	"callsite_cost_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_callsite_cost_info_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_callsite_cost_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_callsite_cost_info_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_callsite_cost_info_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_callsite_cost_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_callsite_cost_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_callsite_cost_info_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_callsite_cost_info_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_callsite_cost_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_callsite_cost_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)),
	"mdprof_fb.automatic_parallelism",
	"callsite_cost_info",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_callsite_cost_info_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_callsite_cost_info_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_callsite_cost_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0list__ti_list_1mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)),
	"mdprof_fb.automatic_parallelism",
	"candidate_par_conjunctions",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0list__ti_list_1mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_candidate_parallel_conjunctions_opts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_candidate_parallel_conjunctions_opts_0_0[] = {
	"cpc_desired_parallelism",
	"cpc_sparking_cost",
	"cpc_locking_cost",
	"cpc_clique_threshold",
	"cpc_call_site_threshold"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_candidate_parallel_conjunctions_opts_0_0 = {
	"candidate_parallel_conjunctions_opts",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_candidate_parallel_conjunctions_opts_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_candidate_parallel_conjunctions_opts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_candidate_parallel_conjunctions_opts_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_candidate_parallel_conjunctions_opts_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_candidate_parallel_conjunctions_opts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_candidate_parallel_conjunctions_opts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_candidate_parallel_conjunctions_opts_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_candidate_parallel_conjunctions_opts_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_candidate_parallel_conjunctions_opts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0)),
	"mdprof_fb.automatic_parallelism",
	"candidate_parallel_conjunctions_opts",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_candidate_parallel_conjunctions_opts_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_candidate_parallel_conjunctions_opts_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_candidate_parallel_conjunctions_opts_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_0 = {
	"clique_is_recursive",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_1 = {
	"clique_is_not_recursive",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__enum_value_ordered_clique_is_recursive_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__enum_name_ordered_clique_is_recursive_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_1,
	&mercury_data_mdprof_fb__automatic_parallelism__enum_functor_desc_clique_is_recursive_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_clique_is_recursive_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_clique_is_recursive_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)),
	"mdprof_fb.automatic_parallelism",
	"clique_is_recursive",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__enum_name_ordered_clique_is_recursive_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__enum_value_ordered_clique_is_recursive_0 },
	2,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_clique_is_recursive_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
	&mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_1,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_clique_call_site_report_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_call_site_report_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_measurements__type_ctor_info_cs_cost_csq_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0;

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_implicit_parallelism_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_deep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0,
	(MR_PseudoTypeInfo) &mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_clique_call_site_report_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_implicit_parallelism_info_0_0[] = {
	"ipi_deep",
	"ipi_progrep",
	"ipi_opts",
	"ipi_call_sites",
	"ipi_rec_call_sites",
	"ipi_var_table"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_implicit_parallelism_info_0_0 = {
	"implicit_parallelism_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_implicit_parallelism_info_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_implicit_parallelism_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_implicit_parallelism_info_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_implicit_parallelism_info_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_implicit_parallelism_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_implicit_parallelism_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_implicit_parallelism_info_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_implicit_parallelism_info_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_implicit_parallelism_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_implicit_parallelism_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)),
	"mdprof_fb.automatic_parallelism",
	"implicit_parallelism_info",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_implicit_parallelism_info_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_implicit_parallelism_info_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_implicit_parallelism_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_maybe_call_conjunct_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_clique_call_site_report_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_maybe_call_conjunct_0_0[] = {
	"mccc_callee",
	"mccc_detism",
	"mccc_args",
	"mccc_call_site"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_0 = {
	"call",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_maybe_call_conjunct_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_maybe_call_conjunct_0_0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_maybe_call_conjunct_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_maybe_call_conjunct_0_1[] = {
	"mccag_detism",
	"mccag_bound_vars"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_1 = {
	"trivial_atomic_goal",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_maybe_call_conjunct_0_1,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_maybe_call_conjunct_0_1,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_2 = {
	"non_atomic_goal",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_1[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_2[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_1

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_maybe_call_conjunct_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_maybe_call_conjunct_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_maybe_call_conjunct_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_2,
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_maybe_call_conjunct_0_1
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_maybe_call_conjunct_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_maybe_call_conjunct_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)),
	"mdprof_fb.automatic_parallelism",
	"maybe_call_conjunct",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_maybe_call_conjunct_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_maybe_call_conjunct_0 },
	3,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_maybe_call_conjunct_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_mode_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_mode_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__field_types_var_mode_and_use_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_var_mode_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_info_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__field_names_var_mode_and_use_0_0[] = {
	"vmu_var",
	"vmu_mode",
	"vmu_use"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_var_mode_and_use_0_0 = {
	"var_mode_and_use",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__field_types_var_mode_and_use_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__field_names_var_mode_and_use_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_var_mode_and_use_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_var_mode_and_use_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_var_mode_and_use_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__du_stag_ordered_var_mode_and_use_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_var_mode_and_use_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__du_functor_desc_var_mode_and_use_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_var_mode_and_use_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)),
	"mdprof_fb.automatic_parallelism",
	"var_mode_and_use",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_name_ordered_var_mode_and_use_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__du_ptag_ordered_var_mode_and_use_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__functor_number_map_var_mode_and_use_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"get_var_use_add_to_queue",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1505,
"d1;c18;t;c1;t;c2;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_3 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"multiply_and_add",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
579,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"callsite_collect_branch_probabilities",
8,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
576,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"disj_get_callsite_cost_info2",
7,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
572,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_329",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
329,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"candidate_parallel_conjunctions_callee",
11,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
325,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"css_to_call",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1623,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"compare_csd_ptr",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1656,
"d1;c9;e;c6;e;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"sum_callseqs_csd_ptr",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1650,
"d1;c9;e;c6;e;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_298",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
298,
"q;c4;t;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"candidate_parallel_conjunctions_call_site",
10,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
293,
"q;c4;t;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_860",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
860,
"d1;c17;t;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"add_call_site_report_to_map",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
848,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_935",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
932,
"d1;c12;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_6 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda3_mdprof_fb_automatic_parallelism_m_1242",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1242,
"d1;c9;d2;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_5 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda3_mdprof_fb_automatic_parallelism_m_1235",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1235,
"d1;c9;d2;c6;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda2_mdprof_fb_automatic_parallelism_m_1242",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1242,
"d1;c9;d2;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda2_mdprof_fb_automatic_parallelism_m_1235",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1235,
"d1;c9;d2;c6;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_1242",
4,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1242,
"d1;c9;d2;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_1235",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1235,
"d1;c9;d2;c6;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"var_mode_use_to_var_in_par_conj",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1598,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"var_mode_use_to_var_in_par_conj",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1598,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"var_mode_use_to_var_in_par_conj",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1598,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"are_conjuncts_dependant_var",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1392,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"add_output_var_to_set",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
1390,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"build_recursive_call_site_cost_map_call_site",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
432,
"d1;c7;q;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"add_call_site_to_map",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
405,
"d1;c7;q;c10;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"get_callsite_cost_info",
11,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
414,
"d1;c7;q;c10;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"callsite_cost_merge_branches",
6,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
616,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"callsite_collect_branch_probabilities",
8,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
613,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"case_get_callsite_cost_info",
7,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
610,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_609",
2,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
609,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"multiply_probability_merge",
5,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
749,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"lambda_mdprof_fb_automatic_parallelism_m_207",
3,
0
},
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism.m",
207,
"d1;c3;"
};



MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module0)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: ", 35);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_clique_proc_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_is_recursive'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(fn__set__from_list_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,3,5,6,12,9,13,15,8,18,17)
	MR_init_label4(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,20,2,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_goal_get_callsite_cost_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(5) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i9);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if ((MR_sv(1) != MR_r3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(3), 0), 8);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 6);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique_call_site has \'no\' for perf_row_maybe_total", 50);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module4)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0);
	MR_init_label2(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multiply_and_add'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(4) = MR_float_to_word(((MR_word_to_float(MR_tfield(0, MR_tempr3, 0)) * MR_word_to_float(MR_tempr2)) + MR_word_to_float(MR_tfield(0, MR_tempr4, 0))));
	MR_sv(5) = MR_float_to_word(((MR_word_to_float(MR_tfield(0, MR_tempr3, 1)) * MR_word_to_float(MR_tempr2)) + MR_word_to_float(MR_tfield(0, MR_tempr4, 1))));
	MR_tempr1 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0_i2);
MR_def_label(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__multiply_probability_merge_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0_i5);
MR_def_label(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__map_corresponding_foldl2_8_0);
MR_decl_entry(list__foldl_corresponding_5_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,5,7,9,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_get_callsite_cost_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr3;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(1);
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r10 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'callsite_cost_merge_branches'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(set__empty_1_0,
		mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(4)) + (MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_sv(1)))));
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,37,5,7,18,23,9,11,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_get_callsite_cost_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i5) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i7) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i18) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i23));
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r5, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r3, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(1, MR_r5, 0);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r3, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(2, MR_r5, 2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__switch_get_callsite_cost_info_6_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i9);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i11);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i14);
	}
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__atomic_goal_get_callsite_cost_info_4_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_r5 = MR_tfield(3, MR_r5, 3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_r5, 1);
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_r5;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0_i37);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_and_after_3_0);
MR_decl_entry(fn__float__float_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module8)
	MR_init_entry1(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,4,5,3,8,9,12,14,16,17,18)
	MR_init_label3(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,10,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_get_callsite_cost_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_3_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i10);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_sv(1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: Expected complete coverage information", 73);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,
		mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_callsite_cost_info_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,2,3,4,5,6,7,10,12,14,15)
	MR_init_label10(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,16,8,19,21,20,23,25,24,28,29)
	MR_init_label2(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_get_callsite_cost_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_3_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i8);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i12);
	}
	MR_sv(3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_sv(5) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_float_to_word(((MR_Float) 1.0000000000000000 - MR_word_to_float(MR_tempr1)));
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i19);
	}
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: couldn\'t retrieve coverage information", 73);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(set__empty_1_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i20);
	}
	MR_sv(6) = MR_float_to_word(((MR_Float) 0.0000000000000000 + MR_word_to_float(MR_sv(3))));
	MR_sv(7) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_sv(7) = MR_float_to_word(((MR_Float) 0.0000000000000000 + MR_word_to_float(MR_sv(3))));
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(set__empty_1_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i24);
	}
	MR_sv(6) = MR_float_to_word((MR_word_to_float(MR_sv(6)) + MR_word_to_float(MR_sv(5))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_float_to_word((MR_word_to_float(MR_sv(7)) + MR_word_to_float(MR_sv(5))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__callsite_cost_merge_branches_6_0,
		mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_callsite_cost_info_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__mdprof_fb__automatic_parallelism__multiply_and_add_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_statics_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_label_from_proc_desc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(message__append_message_4_0);
MR_decl_entry(create_report__create_procrep_coverage_report_3_0);
MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(fn__measurements__proc_cost_get_total_1_0);
MR_decl_entry(fn__mdbcomp__program_representation__empty_goal_path_0_0);
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,2,3,7,4,9,13,14,17,20,11)
	MR_init_label8(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,21,24,25,26,27,28,30,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_site_cost_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tfield(0, MR_sv(2), 1), 1);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__create_procrep_coverage_report_3_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tfield(0, MR_sv(2), 1), 1);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(create_report__create_procrep_coverage_report_3_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(10) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r10 = MR_sv(7);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl4_10_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__proc_cost_get_total_1_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r1, 0), 1), 1), 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_sv(5);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__proc_cost_get_total_1_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(2))));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module12)
	MR_init_entry1(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,2,5,7,8,11,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'are_conjuncts_dependant'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__build_cs_cost_csq_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module13)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0);
	MR_init_label5(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,3,2,6,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_call_site_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_sv(1), 0), 8);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i3);
MR_def_label(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 8);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 4);
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i8);
MR_def_label(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: Could not retrieve total callseqs cost from call site", 88);
	MR_np_call_localret_ent(require__error_1_0,
		fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i5);
MR_def_label(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0_i8);
MR_def_label(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__measurements__build_cs_cost_csq_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__cs_cost_get_percall_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module14)
	MR_init_entry1(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_conj_to_candidate_par_conjunct'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_tempr2 = MR_tempr4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r4 = MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__max_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module15)
	MR_init_entry1(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,2,3,4,5,6,7,10,11,12,15)
	MR_init_label2(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_independent_parallelisation_speedup'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(3), 3);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_tempr3 = MR_r1;
	MR_sv(4) = MR_float_to_word((MR_word_to_float(MR_tempr1) + MR_word_to_float(MR_tempr3)));
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__float__max_2_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 5);
	MR_sv(4) = MR_float_to_word((MR_word_to_float(MR_sv(4)) - (MR_word_to_float(MR_sv(5)) + MR_word_to_float(MR_r1))));
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_sv(1), 5);
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__false_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module16)
	MR_init_entry1(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,19,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_var_use_from_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0_i1);
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__cord__length_1_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
static const MR_Float mercury_float_const_neg1pt0000000000000000 = -1.0000000000000000;
MR_decl_entry(pqueue__insert_4_0);
MR_decl_entry(fn__cord__snoc_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module17)
	MR_init_entry1(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,77,3,34,6,7,8,9,11,12,15)
	MR_init_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,14,16,17,13,20,22,24,19,18,10)
	MR_init_label3(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,30,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_candidate_conjunctions_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i3);
	}
	MR_sv(7) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_tfield(1, MR_r7, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r9);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i36);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_sv(7) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(9)) <= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_4_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__compute_independent_parallelisation_speedup_6_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(6) = MR_sv(10);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(8)) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_np_call_localret_ent(fn__cord__length_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i19);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_float_to_word((MR_word_to_float(MR_tempr2) * (MR_Float) -1.0000000000000000));
	}
	MR_np_call_localret_ent(pqueue__insert_4_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(12);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(12);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r8;
	MR_sv(6) = MR_tfield(1, MR_r7, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_r2 = MR_r6;
	MR_r3 = MR_r9;
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i37);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0_i77);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__cs_cost_get_calls_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module18)
	MR_init_entry1(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,4,3,6,7,9,10,11,12,13,8)
	MR_init_label4(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,18,19,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_candidate_conjunctions'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i3);
	}
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r7 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tag(MR_r7);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i18);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(1, MR_r5, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(8)) <= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_2_10_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(create_report__create_proc_var_use_dump_report_3_0);
MR_decl_entry(list__map_corresponding_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module19)
	MR_init_entry1(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,3,52,91,6,10,7,8,16,92,20)
	MR_init_label10(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,24,21,22,30,93,36,40,37,38,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_call_site_conjunct'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i52);
	}
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = MR_r7;
	MR_proceed();
	}
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i91) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i92) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i93) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i3));
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_r3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i8);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(create_report__create_proc_var_use_dump_report_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_r3, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i22);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(create_report__create_proc_var_use_dump_report_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i38);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(create_report__create_proc_var_use_dump_report_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i40);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i46);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0_i46);
MR_def_label(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__atomic_goal_get_vars_2_0);
MR_decl_entry(program_representation_utils__inst_map_ground_vars_5_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module20)
	MR_init_entry1(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,11,13,24,29,4,7,8,9,10,15)
	MR_init_label6(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,16,17,18,20,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_get_conjunctions_worth_parallelising'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i11) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i13) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i24) MR_AND
		MR_LABEL_AP(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i29));
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r6, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r6, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r6, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i15);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i17);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_get_vars_2_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_ground_vars_5_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__maybe_call_site_conjunct_8_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_r1 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_tfield(3, MR_r6, 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_r6;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(fn__pqueue__init_0_0);
MR_decl_entry(pqueue__remove_4_0);
MR_decl_entry(fn__pqueue__length_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module21)
	MR_init_entry1(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,2,3,4,5,6,11,15,18,14,9)
	MR_init_label4(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,8,24,27,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_get_conjunctions_worth_parallelising'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__pqueue__init_0_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__build_candidate_conjunctions_8_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i8);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(pqueue__remove_4_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(fn__pqueue__length_1_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pqueue__length_1_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__cord__cons_2_0);
MR_decl_entry(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module22)
	MR_init_entry1(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,4,5,3,7,8,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_get_conjunctions_worth_parallelising_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i3);
	}
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr4 = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, maybe_call_conjunct);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__cord__cons_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__conj_get_conjunctions_worth_parallelising_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__program_representation_utils__merge_inst_map_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module23)
	MR_init_entry1(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,4,3,6,7,8,9,10,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_get_conjunctions_worth_parallelising'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i3);
	}
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr4 = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i12);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_conjunctions_worth_parallelising_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module24)
	MR_init_entry1(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,4,3,6,7,8,9,10,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_case_get_conjunctions_worth_parallelising'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i3);
	}
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr4 = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(7) = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 2);
	MR_sv(8) = MR_tfield(0, MR_sv(7), 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i12);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__switch_case_get_conjunctions_worth_parallelising_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module25)
	MR_init_entry1(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,2,3,4,5,6,7,8,9,10,14)
	MR_init_label3(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_get_conjunctions_worth_parallelising'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_tempr4 = MR_sv(9);
	MR_sv(9) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i10);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i10);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__ite_get_conjunctions_worth_parallelising_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_get_progrep_det_2_0);
MR_decl_entry(program_representation_utils__progrep_search_proc_3_0);
MR_decl_entry(fn__program_representation_utils__initial_inst_map_1_0);
MR_decl_entry(fn__multi_map__init_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module26)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,2,6,3,8,10,13,14,17,20,21)
	MR_init_label6(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,22,24,27,16,28,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tempr2, 1), 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i3);
	}
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_sv(6), 0) = MR_tempr3;
	MR_sv(3) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_get_progrep_det_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(program_representation_utils__progrep_search_proc_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__program_representation_utils__initial_inst_map_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_conjunctions_worth_parallelising_10_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__cs_cost_get_total_1_0);
MR_decl_entry(measurements__cs_cost_to_proc_cost_3_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__multi_map__merge_2_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module27)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,2,3,5,6,9,8,10,11,7,12)
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,13,16,18,14,20,25,26,28,29,30)
	MR_init_label3(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,31,4,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_clique_proc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_total_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(9)) <= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(8), 0), 1);
	MR_np_call_localret_ent(measurements__cs_cost_to_proc_cost_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_r5;
	MR_sv(9) = MR_sv(10);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_6_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_proc_6_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i14);
	}
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__proc_label_from_proc_desc_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(8), 1), 1);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_np_call_localret_ent(set__insert_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(8), 1), 1);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(cord, cord);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(12);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__multi_map__merge_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(create_report__create_clique_report_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0;

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module28)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,2,5,7,8,9,11,12,23,24,25)
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,27,20,28,19,15,32,33,34,4,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_clique'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(create_report__create_clique_report_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 2);
	MR_r2 = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i5);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_sv(5), 2);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("A clique must have et least one procedure in ", 45);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: ", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i12);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i15);
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i20);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_sv(5), 0);
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i23);
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	}
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_dynamic_report);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if ((MR_sv(7) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Integer) 1;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: Clique must have at least one procedure", 74);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__make_clique_proc_map_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: ", 35);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(multi_map__to_flat_assoc_list_2_0);
MR_decl_entry(mdbcomp__feedback__put_feedback_data_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module29)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,2,3,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_r1, 4);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 8);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_tempr1) + (MR_Float) 1.0000000000000000));
	}
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__to_flat_assoc_list_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__put_feedback_data_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module30)
	MR_init_entry1(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_callseqs_csd_ptr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 18);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__lookup_csd_desc_3_0,
		mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
MR_decl_entry(array__size_2_0);
MR_decl_entry(fn__array__lookup_2_0);
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__foldr_4_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(list__index0_det_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module31)
	MR_init_entry1(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,47,2,3,6,7,8,9,10,15,13)
	MR_init_label8(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,18,19,20,21,22,24,25,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_css_list_above_threshold'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_r2, 7);
	MR_np_call_localret_ent(array__size_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i3);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r2 = MR_tfield(0, MR_sv(2), 15);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i10);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldr_4_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(0, MR_sv(2), 7);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i47);
	}
MR_def_label(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module32)
	MR_init_entry1(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'css_list_above_threshold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__compute_css_list_above_threshold_6_0,
		mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__css_to_call_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, call_site);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdbcomp__feedback__put_feedback_data_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module33)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_call_site'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_tfield(0, MR_tempr1, 8) = MR_r6;
	MR_tfield(0, MR_tempr1, 9) = MR_r7;
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 0);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_call_site_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module34)
	MR_init_entry1(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,4,6,3,8,9,10,2,13,15,16)
	MR_init_label3(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,14,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_callee'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r9, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r7 != MR_sv(3))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__member_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(8), 8);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_proc_10_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r9;
	MR_np_call_localret_ent(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_total_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) <= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_clique_6_0);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_callee_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module35)
	MR_init_entry1(mdprof_fb__automatic_parallelism__add_call_site_to_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__add_call_site_to_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_site_to_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__add_call_site_to_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0), 8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module36)
	MR_init_entry1(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_get_callsite_cost_info2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r5;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module37)
	MR_init_entry1(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_get_callsite_cost_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__goal_get_callsite_cost_info_5_0,
		mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__case_get_callsite_cost_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module38)
	MR_init_entry1(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,3,5,7,9,10,11,2,14,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'callsite_collect_branch_probabilities'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i2);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i7);
	}
	MR_sv(1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: could not retrieve coverage information", 74);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(set__empty_1_0,
		mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(3)) + MR_word_to_float(MR_r1)));
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_float_to_word((MR_word_to_float(MR_sv(4)) + MR_word_to_float(MR_r1)));
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module39)
	MR_init_entry1(mdprof_fb__automatic_parallelism__multiply_probability_merge_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__multiply_probability_merge_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multiply_probability_merge'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__multiply_probability_merge_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_float_to_word((MR_word_to_float(MR_tempr3) * MR_word_to_float(MR_tempr1)));
	MR_r5 = MR_tempr4;
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__proc_cost_get_calls_total_1_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module40)
	MR_init_entry1(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,2,3,4,5,6,9,11,7,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_callsite_cost_info'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 8);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__proc_cost_get_calls_total_1_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__call_site_is_recursive_2_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i7);
	}
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(7)) + MR_word_to_float(MR_sv(2))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(svset__insert_3_0,
		mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 8);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0_i13);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(6)) + MR_word_to_float(MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 6))));
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdprof_fb__automatic_parallelism__get_callsite_cost_info_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique_call_site has \'no\' for perf_row_maybe_total", 50);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__build_cs_cost_csq_percall_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module41)
	MR_init_entry1(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_site_cost_map_call_site'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r3, 0), 0), 8);
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_percall_2_0,
		mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__build_recursive_call_site_cost_map_call_site_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__inst_map_get_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module42)
	MR_init_entry1(mdprof_fb__automatic_parallelism__var_get_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__var_get_mode_4_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__var_get_mode_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_get_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__var_get_mode_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_4_0,
		mdprof_fb__automatic_parallelism__var_get_mode_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__var_get_mode_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_4_0,
		mdprof_fb__automatic_parallelism__var_get_mode_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__var_get_mode_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__inst_map_get_var_deps_3_0);
MR_decl_entry(set__contains_2_0);
MR_decl_entry(set__member_2_1);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module43)
	MR_init_entry1(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,5,10,23,9,14,15,13,8,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'are_conjuncts_dependant_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_var_deps_3_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__contains_2_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_1,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svset__insert_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(mdprof_fb__automatic_parallelism__are_conjuncts_dependant_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module44)
	MR_init_entry1(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_output_var_to_set'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0_i2);
	}
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(svset__insert_3_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__add_output_var_to_set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__var_use_analysis__cost_until_to_cost_before_end_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module45)
	MR_init_entry1(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_var_use_add_to_queue'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,
		mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0_i2);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,
		mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, cost_until_var_use);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(pqueue__insert_4_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__search_var_name_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module46)
	MR_init_entry1(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_mode_use_to_var_in_par_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(mdbcomp__program_representation__search_var_name_3_0,
		mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdprof_fb__automatic_parallelism__var_mode_use_to_var_in_par_conj_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module47)
	MR_init_entry1(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_csd_ptr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,
		mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__sum_callseqs_csd_ptr_4_0,
		mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__compare_csd_ptr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_statics_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module48)
	MR_init_entry1(mdprof_fb__automatic_parallelism__css_to_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__css_to_call_3_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__css_to_call_3_0,2,10,11,6,8,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'css_to_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__css_to_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_fb__automatic_parallelism__css_to_call_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__css_to_call_3_0_i10);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__css_to_call_3_0_i14);
	}
	if (MR_INT_EQ(MR_tempr3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__css_to_call_3_0_i6);
	}
	if (MR_INT_EQ(MR_tempr3,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__css_to_call_3_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr4;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_sv(2), 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_fb__automatic_parallelism__css_to_call_3_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_fb__automatic_parallelism__css_to_call_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module49)
	MR_init_entry1(mdprof_fb__automatic_parallelism__add_call_site_report_to_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__add_call_site_report_to_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_site_report_to_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__add_call_site_report_to_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0), 8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module50)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_init_label2(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module51)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_init_label4(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module52)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0);
	MR_init_label3(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_tfield(0, MR_tempr3, 2);
	MR_r3 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i4);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module53)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0);
	MR_init_label6(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i9);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i13);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__callsite_cost_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module54)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module55)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module56)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_init_label2(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_tempr3))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module57)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_init_label7(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i9);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i13);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i17);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module58)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module59)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__clique_is_recursive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__deep_0_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__prog_rep_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_table_0;
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module60)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0);
	MR_init_label7(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__deep_0_0,
		__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i4);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__prog_rep_1_0,
		__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i6);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,
		__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i8);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i10);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i12);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, var_table);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__deep_0_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__prog_rep_1_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module61)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0);
	MR_init_label8(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___profile__deep_0_0,
		__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__prog_rep_1_0,
		__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i9);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0,
		__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i13);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i17);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i21);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, var_table);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___report__clique_call_site_report_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module62)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0);
	MR_init_label6(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,5,8,10,15,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i21);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i15);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i8);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i10);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___report__clique_call_site_report_0_0);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_tempr3, 1);
	MR_r3 = MR_tfield(2, MR_tempr4, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___report__clique_call_site_report_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module63)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0);
	MR_init_label10(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,69,5,7,10,14,18,36,76,38,40)
	MR_init_label2(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,42,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i69);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i36);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i5);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i38);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i38);
	}
	}
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i76);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i10);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i51);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i14);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, var_mode_and_use);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i18);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i51);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___report__clique_call_site_report_0_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i40);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i38);
	}
	}
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i42);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__var_mode_rep_0_0);
MR_decl_entry(__Unify___var_use_analysis__var_use_info_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module64)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0);
	MR_init_label3(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__var_mode_rep_0_0,
		__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i4);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___var_use_analysis__var_use_info_0_0);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__var_mode_rep_0_0);
MR_decl_entry(__Compare___var_use_analysis__var_use_info_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module65)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0);
	MR_init_label5(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__var_mode_rep_0_0,
		__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i9);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___var_use_analysis__var_use_info_0_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__var_mode_and_use_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module66)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__make_clique_proc_map__207__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__make_clique_proc_map__207__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_clique_proc_map__207__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__make_clique_proc_map__207__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__merge_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module67)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__298__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(multi_map__merge_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module68)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_call_site__329__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(multi_map__merge_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__case_get_goal_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module69)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__switch_get_callsite_cost_info__609__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__switch_get_callsite_cost_info__609__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__switch_get_callsite_cost_info__609__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__switch_get_callsite_cost_info__609__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(mdbcomp__program_representation__case_get_goal_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module70)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__candidate_parallel_conjunctions_proc__860__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(multi_map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__remove_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module71)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__remove_3_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__goal_get_conjunctions_worth_parallelising__935__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module72)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1235__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(var_use_analysis__var_mode_to_var_use_2_0);
MR_decl_entry(var_use_analysis__pessimistic_var_use_info_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module73)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1242__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module74)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1235__2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module75)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1242__2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module76)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1235__3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1235__3_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module77)
	MR_init_entry1(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_call_site_conjunct__1242__3'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__var_get_mode_4_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_2_0,
		mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__IntroducedFrom__pred__maybe_call_site_conjunct__1242__3_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module78)
	MR_init_entry1(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0);
	MR_init_label4(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__disj_get_callsite_cost_info__[3]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__disj_get_callsite_cost_info2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r5;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, callsite_cost_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_i4);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__callsite_collect_branch_probabilities_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr2;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(1);
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r10 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_i6);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_i7);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0_i8);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_103_101_116_95_99_97_108_108_115_105_116_101_95_99_111_115_116_95_105_110_102_111_95_95_91_51_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__singleton_set_2_0);
MR_decl_entry(fn__var_use_analysis__cost_until_to_cost_since_start_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module79)
	MR_init_entry1(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0);
	MR_init_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,2,3,4,5,7,10,13,15,16,17)
	MR_init_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,12,18,20,22,25,24,27,28,30,31)
	MR_init_label10(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,32,33,34,35,38,39,40,41,9,43)
	MR_init_label8(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,44,6,45,47,48,49,50,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__compute_optimal_dependant_parallelisation__[5]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i2);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i3);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(3), 3);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__get_call_site_cost_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i4);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i5);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_sv(7) = MR_float_to_word((MR_word_to_float(MR_sv(6)) + MR_word_to_float(MR_tempr2)));
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i7);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i6);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tfield(1, MR_sv(3), 2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i10);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i9);
	}
	MR_sv(9) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_sv(2), 2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__get_var_use_from_args_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i13);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i12);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i15);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i16);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i17);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i38);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_var_deps_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i18);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__get_var_use_add_to_queue_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_sv(2), 2);
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, cost_until_var_use);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__pqueue__init_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i20);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i22);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(pqueue__remove_4_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i25);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i24);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i30);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__this_file_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i27);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Expected to find at least one dependant variable", 48);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i28);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i30);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i31);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i32);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i33);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i34);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(4)) <= MR_word_to_float(MR_sv(8)))) {
		MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i35);
	}
	MR_sv(4) = MR_sv(6);
	MR_sv(8) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i38);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_float_to_word((MR_word_to_float(MR_sv(6)) - MR_word_to_float(MR_tempr1)));
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i38);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i39);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__max_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i40);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_tempr1) + MR_word_to_float(MR_sv(8))));
	}
	MR_np_call_localret_ent(fn__float__max_2_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i41);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_float_to_word((MR_word_to_float(MR_sv(7)) - ((MR_word_to_float(MR_r1) + MR_word_to_float(MR_sv(9))) + MR_word_to_float(MR_sv(4)))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i44);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Dependant var not in consumer\'s arguments", 41);
	MR_np_call_localret_ent(require__error_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i43);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i44);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i49);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_sv(2), 3), 0), 0);
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i45);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_sv(4), 8);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i47);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i48);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(4) = (MR_Word) &mercury_float_const_neg1pt0000000000000000;
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i50);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__call_site_conj_to_candidate_par_conjunct_3_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0_i51);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_111_112_116_105_109_97_108_95_100_101_112_101_110_100_97_110_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_95_91_53_93_95_48_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism_module80)
	MR_init_entry1(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0);
	MR_init_label3(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__build_cs_cost_from_perf__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 8);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0_i3);
	}
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 4);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0_i5);
MR_def_label(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.m: Could not retrieve total cost from perf data", 79);
	}
	MR_np_call_localret_ent(require__error_1_0,
		fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0_i2);
MR_def_label(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0_i5);
MR_def_label(fn__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_100_95_99_115_95_99_111_115_116_95_102_114_111_109_95_112_101_114_102_95_95_91_49_93_95_48_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__measurements__build_cs_cost_csq_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism_module0();
	mdprof_fb__automatic_parallelism_module1();
	mdprof_fb__automatic_parallelism_module2();
	mdprof_fb__automatic_parallelism_module3();
	mdprof_fb__automatic_parallelism_module4();
	mdprof_fb__automatic_parallelism_module5();
	mdprof_fb__automatic_parallelism_module6();
	mdprof_fb__automatic_parallelism_module7();
	mdprof_fb__automatic_parallelism_module8();
	mdprof_fb__automatic_parallelism_module9();
	mdprof_fb__automatic_parallelism_module10();
	mdprof_fb__automatic_parallelism_module11();
	mdprof_fb__automatic_parallelism_module12();
	mdprof_fb__automatic_parallelism_module13();
	mdprof_fb__automatic_parallelism_module14();
	mdprof_fb__automatic_parallelism_module15();
	mdprof_fb__automatic_parallelism_module16();
	mdprof_fb__automatic_parallelism_module17();
	mdprof_fb__automatic_parallelism_module18();
	mdprof_fb__automatic_parallelism_module19();
	mdprof_fb__automatic_parallelism_module20();
	mdprof_fb__automatic_parallelism_module21();
	mdprof_fb__automatic_parallelism_module22();
	mdprof_fb__automatic_parallelism_module23();
	mdprof_fb__automatic_parallelism_module24();
	mdprof_fb__automatic_parallelism_module25();
	mdprof_fb__automatic_parallelism_module26();
	mdprof_fb__automatic_parallelism_module27();
	mdprof_fb__automatic_parallelism_module28();
	mdprof_fb__automatic_parallelism_module29();
	mdprof_fb__automatic_parallelism_module30();
	mdprof_fb__automatic_parallelism_module31();
	mdprof_fb__automatic_parallelism_module32();
	mdprof_fb__automatic_parallelism_module33();
	mdprof_fb__automatic_parallelism_module34();
	mdprof_fb__automatic_parallelism_module35();
	mdprof_fb__automatic_parallelism_module36();
	mdprof_fb__automatic_parallelism_module37();
	mdprof_fb__automatic_parallelism_module38();
	mdprof_fb__automatic_parallelism_module39();
}

static void mercury__mdprof_fb__automatic_parallelism_maybe_bunch_1(void)
{
	mdprof_fb__automatic_parallelism_module40();
	mdprof_fb__automatic_parallelism_module41();
	mdprof_fb__automatic_parallelism_module42();
	mdprof_fb__automatic_parallelism_module43();
	mdprof_fb__automatic_parallelism_module44();
	mdprof_fb__automatic_parallelism_module45();
	mdprof_fb__automatic_parallelism_module46();
	mdprof_fb__automatic_parallelism_module47();
	mdprof_fb__automatic_parallelism_module48();
	mdprof_fb__automatic_parallelism_module49();
	mdprof_fb__automatic_parallelism_module50();
	mdprof_fb__automatic_parallelism_module51();
	mdprof_fb__automatic_parallelism_module52();
	mdprof_fb__automatic_parallelism_module53();
	mdprof_fb__automatic_parallelism_module54();
	mdprof_fb__automatic_parallelism_module55();
	mdprof_fb__automatic_parallelism_module56();
	mdprof_fb__automatic_parallelism_module57();
	mdprof_fb__automatic_parallelism_module58();
	mdprof_fb__automatic_parallelism_module59();
	mdprof_fb__automatic_parallelism_module60();
	mdprof_fb__automatic_parallelism_module61();
	mdprof_fb__automatic_parallelism_module62();
	mdprof_fb__automatic_parallelism_module63();
	mdprof_fb__automatic_parallelism_module64();
	mdprof_fb__automatic_parallelism_module65();
	mdprof_fb__automatic_parallelism_module66();
	mdprof_fb__automatic_parallelism_module67();
	mdprof_fb__automatic_parallelism_module68();
	mdprof_fb__automatic_parallelism_module69();
	mdprof_fb__automatic_parallelism_module70();
	mdprof_fb__automatic_parallelism_module71();
	mdprof_fb__automatic_parallelism_module72();
	mdprof_fb__automatic_parallelism_module73();
	mdprof_fb__automatic_parallelism_module74();
	mdprof_fb__automatic_parallelism_module75();
	mdprof_fb__automatic_parallelism_module76();
	mdprof_fb__automatic_parallelism_module77();
	mdprof_fb__automatic_parallelism_module78();
	mdprof_fb__automatic_parallelism_module79();
}

static void mercury__mdprof_fb__automatic_parallelism_maybe_bunch_2(void)
{
	mdprof_fb__automatic_parallelism_module80();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__init(void);
void mercury__mdprof_fb__automatic_parallelism__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__init_complexity_procs(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism_maybe_bunch_0();
	mercury__mdprof_fb__automatic_parallelism_maybe_bunch_1();
	mercury__mdprof_fb__automatic_parallelism_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0,
		mdprof_fb__automatic_parallelism__calls_above_threshold_sorted_opts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_callsite_cost_info_0,
		mdprof_fb__automatic_parallelism__callsite_cost_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_0,
		mdprof_fb__automatic_parallelism__candidate_par_conjunctions_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0,
		mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_opts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_clique_is_recursive_0,
		mdprof_fb__automatic_parallelism__clique_is_recursive_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_implicit_parallelism_info_0,
		mdprof_fb__automatic_parallelism__implicit_parallelism_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_maybe_call_conjunct_0,
		mdprof_fb__automatic_parallelism__maybe_call_conjunct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0,
		mdprof_fb__automatic_parallelism__var_mode_and_use_0_0);
	mercury__mdprof_fb__automatic_parallelism__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_callsite_cost_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_clique_is_recursive_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_implicit_parallelism_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_maybe_call_conjunct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_var_mode_and_use_0);
	}
}


void mercury__mdprof_fb__automatic_parallelism__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
