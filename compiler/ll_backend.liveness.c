/*
** Automatically generated from `liveness.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__liveness__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.liveness.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.liveness.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.liveness.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.liveness.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.liveness.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "ll_backend.liveness.c"
#line 48 "ll_backend.liveness.c"
#include "ll_backend.liveness.mh"

#line 51 "ll_backend.liveness.c"
#line 52 "ll_backend.liveness.c"
#ifndef LL_BACKEND__LIVENESS_DECL_GUARD
#define LL_BACKEND__LIVENESS_DECL_GUARD

#line 56 "ll_backend.liveness.c"
#line 57 "ll_backend.liveness.c"

#endif
#line 60 "ll_backend.liveness.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__unit__unit__arity0__[],
	mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__io__state__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_ll_backend__liveness__type_class_decl_debug_liveness_io_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__liveness__type_ctor_info_live_info_0;
MR_decl_label3(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0, 3,4,15)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0, 8,9,92,14,93,21,19,25)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0, 27,94,30,31,32,35,33,39)
MR_decl_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0, 41,43,38,95,48)
MR_decl_label8(ll_backend__liveness__add_branch_pre_deaths_6_0, 2,5,6,7,8,4,9,10)
MR_decl_label1(ll_backend__liveness__add_branch_pre_deaths_6_0, 11)
MR_decl_label3(ll_backend__liveness__add_liveness_after_goal_3_0, 2,3,4)
MR_decl_label6(ll_backend__liveness__delay_death_cases_6_0, 4,5,7,8,9,3)
MR_decl_label3(ll_backend__liveness__delay_death_conj_7_0, 4,5,3)
MR_decl_label6(ll_backend__liveness__delay_death_disj_6_0, 4,5,7,8,9,3)
MR_decl_label8(ll_backend__liveness__delay_death_goal_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(ll_backend__liveness__delay_death_goal_7_0, 10,11,12,13,14,15,16)
MR_decl_label8(ll_backend__liveness__delay_death_goal_expr_9_0, 74,11,13,75,15,17,18,76)
MR_decl_label8(ll_backend__liveness__delay_death_goal_expr_9_0, 20,23,22,25,77,27,78,29)
MR_decl_label8(ll_backend__liveness__delay_death_goal_expr_9_0, 79,31,32,33,34,35,36,37)
MR_decl_label3(ll_backend__liveness__delay_death_goal_expr_9_0, 80,39,73)
MR_decl_label5(ll_backend__liveness__delay_death_par_conj_7_0, 4,5,6,7,3)
MR_decl_label5(ll_backend__liveness__delay_death_proc_body_4_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_cases_10_0, 4,5,8,10,7,11,12,13)
MR_decl_label5(ll_backend__liveness__detect_deadness_in_cases_10_0, 14,15,3,16,17)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_conj_6_0, 25,4,7,9,6,10,11,12)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_disj_9_0, 4,5,8,10,7,11,12,13)
MR_decl_label4(ll_backend__liveness__detect_deadness_in_disj_9_0, 14,15,3,16)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_6_0, 10,13,15,16,17,18,19,11)
MR_decl_label6(ll_backend__liveness__detect_deadness_in_goal_6_0, 20,21,22,23,24,25)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 4,5,7,8,10,11,13,14)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 15,17,19,21,22,23,24,25)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 26,27,28,29,30,31,32,33)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 34,35,36,37,38,39,40,41)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 42,45,47,48,49,51,53,50)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 58,57,60,61,62,63,64,65)
MR_decl_label7(ll_backend__liveness__detect_deadness_in_goal_2_7_0, 44,67,68,69,70,72,73)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_par_conj_9_0, 4,5,6,7,10,9,13,14)
MR_decl_label2(ll_backend__liveness__detect_deadness_in_par_conj_9_0, 3,15)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_cases_7_0, 4,5,6,7,8,9,10,11)
MR_decl_label1(ll_backend__liveness__detect_liveness_in_cases_7_0, 3)
MR_decl_label6(ll_backend__liveness__detect_liveness_in_conj_5_0, 22,4,6,7,5,9)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_disj_7_0, 4,5,6,7,8,9,10,11)
MR_decl_label1(ll_backend__liveness__detect_liveness_in_disj_7_0, 3)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_5_0, 2,3,4,5,6,7,10,8)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_5_0, 12,13,14,15,16,17,18,21)
MR_decl_label7(ll_backend__liveness__detect_liveness_in_goal_5_0, 19,23,24,25,26,27,29)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0, 4,5,7,8,10,11,13,14)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0, 15,17,20,19,21,22,23,24)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0, 25,26,27,28,29,30,31,32)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0, 33,34,35,36,39,38,41,43)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0, 44,45,46,47,48,49,50,51)
MR_decl_label8(ll_backend__liveness__detect_liveness_in_par_conj_7_0, 4,5,6,7,8,9,10,11)
MR_decl_label1(ll_backend__liveness__detect_liveness_in_par_conj_7_0, 3)
MR_decl_label2(ll_backend__liveness__detect_liveness_pred_3_0, 2,3)
MR_decl_label2(ll_backend__liveness__detect_liveness_pred_proc_5_0, 2,3)
MR_decl_label1(ll_backend__liveness__detect_liveness_preds_parallel_2_0, 2)
MR_decl_label6(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0, 16,3,5,6,2,8)
MR_decl_label8(ll_backend__liveness__detect_liveness_proc_2_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__liveness__detect_liveness_proc_2_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ll_backend__liveness__detect_liveness_proc_2_6_0, 18,19,20,21,22,24,25,27)
MR_decl_label8(ll_backend__liveness__detect_liveness_proc_2_6_0, 29,31,32,23,33,35,34,38)
MR_decl_label4(ll_backend__liveness__detect_liveness_proc_2_6_0, 40,41,42,43)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_cases_6_0, 27,4,6,7,10,11,9,8)
MR_decl_label1(ll_backend__liveness__detect_resume_points_in_cases_6_0, 12)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_conj_6_0, 4,5,3)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(ll_backend__liveness__detect_resume_points_in_goal_6_0, 10)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 134,12,11,13,135,15,17,19)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 21,136,23,137,25,26,27,28)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 31,29,35,33,39,138,41,139)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 43,44,45,46,47,48,49,51)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 53,50,58,57,62,61,67,68)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_goal_2_7_0, 140,70,133)
MR_decl_label4(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0, 2,3,4,5)
MR_decl_label6(ll_backend__liveness__detect_resume_points_in_non_disj_7_0, 35,9,7,11,5,14)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0, 2,3,7,4,5,11,9,15)
MR_decl_label5(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0, 16,17,18,19,20)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_par_conj_6_0, 4,5,3)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0, 4,3,5,6,10,11,7,12)
MR_decl_label5(ll_backend__liveness__find_reachable_case_2_0, 21,3,6,5,1)
MR_decl_label5(ll_backend__liveness__find_reachable_goal_2_0, 21,3,6,5,1)
MR_decl_label7(ll_backend__liveness__find_value_giving_occurrences_5_0, 25,4,6,8,9,5,3)
MR_decl_label2(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0, 2,3)
MR_decl_label8(ll_backend__liveness__initial_liveness_4_0, 2,3,4,5,6,9,8,12)
MR_decl_label7(ll_backend__liveness__initial_liveness_4_0, 13,14,15,16,17,18,19)
MR_decl_label6(ll_backend__liveness__initial_liveness_2_6_0, 40,3,9,10,8,1)
MR_decl_label8(ll_backend__liveness__require_equal_4_0, 3,5,6,7,8,9,10,11)
MR_decl_label8(ll_backend__liveness__require_equal_4_0, 12,13,14,15,16,17,18,19)
MR_decl_label2(ll_backend__liveness__require_equal_4_0, 20,22)
MR_decl_label2(ll_backend__liveness__union_branch_deadness_5_0, 4,3)
MR_decl_label3(ll_backend__liveness__update_liveness_conj_4_0, 11,4,3)
MR_decl_label8(ll_backend__liveness__update_liveness_goal_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(ll_backend__liveness__update_liveness_goal_4_0, 10,11,12,13,14)
MR_decl_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0, 2,3,4,5)
MR_decl_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0, 2,3,4,5)
MR_decl_label5(__Unify___ll_backend__liveness__live_info_0_0, 4,6,8,12,1)
MR_decl_label7(__Compare___ll_backend__liveness__live_info_0_0, 3,2,5,9,13,17,45)
MR_decl_static(ll_backend__liveness__initial_liveness_2_6_0)
MR_decl_static(fn__ll_backend__liveness__this_file_0_0)
MR_def_extern_entry(ll_backend__liveness__initial_liveness_4_0)
MR_decl_static(ll_backend__liveness__maybe_debug_liveness_8_0)
MR_decl_static(ll_backend__liveness__add_liveness_after_goal_3_0)
MR_decl_static(ll_backend__liveness__find_value_giving_occurrences_5_0)
MR_decl_static(ll_backend__liveness__maybe_complete_with_typeinfos_3_0)
MR_decl_static(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_goal_5_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_goal_2_6_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_conj_5_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_cases_7_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_par_conj_7_0)
MR_decl_static(ll_backend__liveness__find_reachable_goal_2_0)
MR_decl_static(ll_backend__liveness__find_reachable_case_2_0)
MR_decl_static(ll_backend__liveness__update_liveness_goal_4_0)
MR_decl_static(ll_backend__liveness__update_liveness_conj_4_0)
MR_decl_static(ll_backend__liveness__union_branch_deadness_5_0)
MR_decl_static(ll_backend__liveness__add_branch_pre_deaths_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_goal_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_goal_2_7_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_disj_9_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_cases_10_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_par_conj_9_0)
MR_decl_static(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0)
MR_decl_static(ll_backend__liveness__delay_death_goal_7_0)
MR_decl_static(ll_backend__liveness__delay_death_goal_expr_9_0)
MR_decl_static(ll_backend__liveness__delay_death_conj_7_0)
MR_decl_static(ll_backend__liveness__delay_death_par_conj_7_0)
MR_decl_static(ll_backend__liveness__delay_death_disj_6_0)
MR_decl_static(ll_backend__liveness__delay_death_cases_6_0)
MR_decl_static(ll_backend__liveness__delay_death_proc_body_4_0)
MR_decl_static(ll_backend__liveness__require_equal_4_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_goal_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_goal_2_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_non_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_cases_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_par_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_liveness_proc_2_6_0)
MR_def_extern_entry(ll_backend__liveness__detect_liveness_proc_7_0)
MR_decl_static(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0)
MR_def_extern_entry(ll_backend__liveness__detect_liveness_preds_parallel_2_0)
MR_decl_static(ll_backend__liveness__detect_liveness_pred_3_0)
MR_decl_static(ll_backend__liveness__detect_liveness_pred_proc_5_0)
MR_decl_static(ll_backend__liveness__var_is_named_2_0)
MR_decl_static(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0)
MR_decl_static(__Unify___ll_backend__liveness__live_info_0_0)
MR_decl_static(__Compare___ll_backend__liveness__live_info_0_0)
MR_decl_static(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____unit__unit__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0)
MR_decl_static(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0)
MR_decl_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1588__1_3_0)
MR_decl_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1589__1_3_0)
MR_decl_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1590__1_2_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_108_105_118_101_110_101_115_115_95_112_114_111_99_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_105_111_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_109_97_121_98_101_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__unit__unit__arity0__,
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__io__state__arity0__,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(2,1),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(2,3),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_COMMON(1,1),
MR_ENTRY_AP(ll_backend__liveness__IntroducedFrom__pred__require_equal__1590__1_2_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(hlds__hlds_module__module_info_set_pred_info_4_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(hlds__hlds_module__module_info_set_pred_info_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__liveness__field_types_live_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__liveness__field_names_live_info_0_0[] = {
	"module_info",
	"typeinfo_liveness",
	"vartypes",
	"rtti_varmaps",
	"varset"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0 = {
	"live_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__liveness__field_types_live_info_0_0,
	mercury_data_ll_backend__liveness__field_names_live_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__liveness__du_stag_ordered_live_info_0_0[] = {
	&mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__liveness__du_ptag_ordered_live_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__liveness__du_stag_ordered_live_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__liveness__du_name_ordered_live_info_0[] = {
	&mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0
};

const MR_Integer mercury_data_ll_backend__liveness__functor_number_map_live_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__liveness__type_ctor_info_live_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__liveness__live_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__liveness__live_info_0_0)),
	"ll_backend.liveness",
	"live_info",
	{ (void *)mercury_data_ll_backend__liveness__du_name_ordered_live_info_0 },
	{ (void *)mercury_data_ll_backend__liveness__du_ptag_ordered_live_info_0 },
	1,
	4,
	mercury_data_ll_backend__liveness__functor_number_map_live_info_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__unit__unit__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____unit__unit__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0))
};

const MR_ConstString mercury_data_ll_backend__liveness__type_class_id_var_names_debug_liveness_io_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_ll_backend__liveness__type_class_id_method_ids_debug_liveness_io_1[] = {
	{ "maybe_debug_liveness", 8, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_ll_backend__liveness__type_class_id_debug_liveness_io_1 = {
	"ll_backend.liveness",
	"debug_liveness_io",
	1,
	1,
	1,
	mercury_data_ll_backend__liveness__type_class_id_var_names_debug_liveness_io_1,
	mercury_data_ll_backend__liveness__type_class_id_method_ids_debug_liveness_io_1
};

const MR_TypeClassDeclStruct mercury_data_ll_backend__liveness__type_class_decl_debug_liveness_io_1 = {
	&mercury_data_ll_backend__liveness__type_class_id_debug_liveness_io_1,
	0,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"var_is_named",
2,
0
},
"ll_backend.liveness",
"liveness.m",
1043,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1 = {
{
MR_FUNCTION,
"ll_backend.liveness",
"ll_backend.liveness",
"kill_excess_delayed_dead_goal",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1098,
"d1;c10;d6;c3;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2 = {
{
MR_FUNCTION,
"ll_backend.liveness",
"ll_backend.liveness",
"kill_excess_delayed_dead_case",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1112,
"d1;c10;d7;c3;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"lambda_liveness_m_1588",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1588,
"d1;c5;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"lambda_liveness_m_1589",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1589,
"d1;c5;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__require_equal_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"lambda_liveness_m_1590",
2,
0
},
"ll_backend.liveness",
"liveness.m",
1590,
"d1;c5;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred",
3,
0
},
"ll_backend.liveness",
"liveness.m",
254,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_module",
"hlds.hlds_module",
"module_info_set_pred_info",
4,
0
},
"ll_backend.liveness",
"liveness.m",
255,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred",
3,
0
},
"ll_backend.liveness",
"liveness.m",
254,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_module",
"hlds.hlds_module",
"module_info_set_pred_info",
4,
0
},
"ll_backend.liveness",
"liveness.m",
255,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred_proc",
5,
0
},
"ll_backend.liveness",
"liveness.m",
264,
"d1;c6;"
};

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module0)
	MR_init_entry1(ll_backend__liveness__initial_liveness_2_6_0);
	MR_init_label6(ll_backend__liveness__initial_liveness_2_6_0,40,3,9,10,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__initial_liveness_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	MR_sv(6) = MR_ctfield(1, MR_r3, 1);
	MR_sv(5) = MR_ctfield(1, MR_r2, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__liveness__initial_liveness_2_6_0_i9);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__initial_liveness_2_6_0_i10);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i40);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i40);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module1)
	MR_init_entry1(fn__ll_backend__liveness__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__liveness__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("liveness.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module2)
	MR_init_entry1(ll_backend__liveness__initial_liveness_4_0);
	MR_init_label8(ll_backend__liveness__initial_liveness_4_0,2,3,4,5,6,9,8,12)
	MR_init_label7(ll_backend__liveness__initial_liveness_4_0,13,14,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__initial_liveness_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__liveness__initial_liveness_4_0_i2);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__liveness__initial_liveness_4_0_i3);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__initial_liveness_4_0_i4);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__liveness__initial_liveness_4_0_i5);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__initial_liveness_4_0_i6);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_2_6_0,
		ll_backend__liveness__initial_liveness_4_0_i9);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_4_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_4_0_i12);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("liveness.m", 10);
	MR_r2 = (MR_Word) MR_string_const("initial_liveness: list length mismatch", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__liveness__initial_liveness_4_0_i12);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__liveness__initial_liveness_4_0_i13);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__liveness__initial_liveness_4_0_i14);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__initial_liveness_4_0_i15);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__initial_liveness_4_0_i16);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__initial_liveness_4_0_i17);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__liveness__initial_liveness_4_0_i18);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__initial_liveness_4_0_i19);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_compact);

MR_BEGIN_MODULE(ll_backend__liveness_module3)
	MR_init_entry1(ll_backend__liveness__maybe_debug_liveness_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__maybe_debug_liveness_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__maybe_debug_liveness_8_0));
	MR_np_tailcall_ent(do_call_class_method_compact);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_post_births_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_post_births_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module4)
	MR_init_entry1(ll_backend__liveness__add_liveness_after_goal_3_0);
	MR_init_label3(ll_backend__liveness__add_liveness_after_goal_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__add_liveness_after_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i2);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i3);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i4);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module5)
	MR_init_entry1(ll_backend__liveness__find_value_giving_occurrences_5_0);
	MR_init_label7(ll_backend__liveness__find_value_giving_occurrences_5_0,25,4,6,8,9,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_value_giving_occurrences_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i4);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i6);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i8);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i9);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i25);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i25);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module6)
	MR_init_entry1(ll_backend__liveness__maybe_complete_with_typeinfos_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__maybe_complete_with_typeinfos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_np_tailcall_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module7)
	MR_init_entry1(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0);
	MR_init_label2(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__get_nonlocals_and_typeinfos_4_0_i2);
MR_def_label(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__get_nonlocals_and_typeinfos_4_0_i3);
MR_def_label(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,3)
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

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(hlds__hlds_goal__goal_is_atomic_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0);

MR_BEGIN_MODULE(ll_backend__liveness_module8)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_goal_5_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_5_0,2,3,4,5,6,7,10,8)
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_5_0,12,13,14,15,16,17,18,21)
	MR_init_label7(ll_backend__liveness__detect_liveness_in_goal_5_0,19,23,24,25,26,27,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i8);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i12);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__liveness__find_value_giving_occurrences_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i21);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i19);
	}
	MR_r6 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i29);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_sv(9);
	MR_sv(7) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_2_6_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i23);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i25);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i26);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i27);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_r3;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i29);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module9)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_goal_2_6_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0,4,5,7,8,10,11,13,14)
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0,15,17,20,19,21,22,23,24)
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0,25,26,27,28,29,30,31,32)
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0,33,34,35,36,39,38,41,43)
	MR_init_label8(ll_backend__liveness__detect_liveness_in_goal_2_6_0,44,45,46,47,48,49,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_goal_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i13));
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unify in detect_liveness_in_goal_2", 34);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("call in detect_liveness_in_goal_2", 33);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("higher-order-call in detect_liveness_in_goal_2", 46);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i50));
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("foreign_proc in detect_liveness_in_goal_2", 41);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i19);
	}
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_conj_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i20);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i21);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_par_conj_7_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i22);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i23);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i25);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_disj_7_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i26);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i27);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r5 = MR_r2;
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_cases_7_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i29);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i31);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i33);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(3, MR_r1, 1);
	MR_sv(5) = MR_ctfield(3, MR_r1, 3);
	MR_sv(6) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i35);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i36);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i39);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_2_6_0_i38);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_sv(3) = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i43);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i41);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i43);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i44);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i45);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i46);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i47);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__add_liveness_after_goal_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i48);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__add_liveness_after_goal_3_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i49);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_liveness_in_goal_2_6_0_i51);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand in detect_liveness_in_goal_2", 38);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module10)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_conj_5_0);
	MR_init_label6(ll_backend__liveness__detect_liveness_in_conj_5_0,22,4,6,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_conj_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_conj_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_conj_5_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module11)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_disj_7_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_in_disj_7_0,4,5,6,7,8,9,10,11)
	MR_init_label1(ll_backend__liveness__detect_liveness_in_disj_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_disj_7_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_disj_7_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module12)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_cases_7_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_in_cases_7_0,4,5,6,7,8,9,10,11)
	MR_init_label1(ll_backend__liveness__detect_liveness_in_cases_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_cases_7_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_cases_7_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module13)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_par_conj_7_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_in_par_conj_7_0,4,5,6,7,8,9,10,11)
	MR_init_label1(ll_backend__liveness__detect_liveness_in_par_conj_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_par_conj_7_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_par_conj_7_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module14)
	MR_init_entry1(ll_backend__liveness__find_reachable_goal_2_0);
	MR_init_label5(ll_backend__liveness__find_reachable_goal_2_0,21,3,6,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_reachable_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__find_reachable_goal_2_0_i3);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__find_reachable_goal_2_0_i6);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i21);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module15)
	MR_init_entry1(ll_backend__liveness__find_reachable_case_2_0);
	MR_init_label5(ll_backend__liveness__find_reachable_case_2_0,21,3,6,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_reachable_case_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__find_reachable_case_2_0_i3);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__find_reachable_case_2_0_i6);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i21);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(set__divide_by_set_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module16)
	MR_init_entry1(ll_backend__liveness__update_liveness_goal_4_0);
	MR_init_label8(ll_backend__liveness__update_liveness_goal_4_0,2,3,4,5,6,7,8,9)
	MR_init_label5(ll_backend__liveness__update_liveness_goal_4_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__update_liveness_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i2);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i3);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i4);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i5);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i6);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i7);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,
		ll_backend__liveness__update_liveness_goal_4_0_i8);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i9);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i10);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__divide_by_set_4_0,
		ll_backend__liveness__update_liveness_goal_4_0_i11);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__update_liveness_goal_4_0_i12);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__update_liveness_goal_4_0_i13);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i14);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module17)
	MR_init_entry1(ll_backend__liveness__update_liveness_conj_4_0);
	MR_init_label3(ll_backend__liveness__update_liveness_conj_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__update_liveness_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_conj_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__update_liveness_conj_4_0_i4);
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__update_liveness_conj_4_0_i11);
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module18)
	MR_init_entry1(ll_backend__liveness__union_branch_deadness_5_0);
	MR_init_label2(ll_backend__liveness__union_branch_deadness_5_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__union_branch_deadness_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__liveness__union_branch_deadness_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__union_branch_deadness_5_0_i4);
MR_def_label(ll_backend__liveness__union_branch_deadness_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_def_label(ll_backend__liveness__union_branch_deadness_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_pre_deaths_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module19)
	MR_init_entry1(ll_backend__liveness__add_branch_pre_deaths_6_0);
	MR_init_label8(ll_backend__liveness__add_branch_pre_deaths_6_0,2,5,6,7,8,4,9,10)
	MR_init_label1(ll_backend__liveness__add_branch_pre_deaths_6_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__add_branch_pre_deaths_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i2);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__liveness__add_branch_pre_deaths_6_0_i4);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i5);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_sv(3), 0);
	MR_sv(3) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i6);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i7);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i8);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_sv(3), 0);
	MR_sv(3) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i9);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i10);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i11);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_post_deaths_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module20)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_goal_6_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_6_0,10,13,15,16,17,18,19,11)
	MR_init_label6(ll_backend__liveness__detect_deadness_in_goal_6_0,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i2);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i3);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i17);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i18);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i19);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i21);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_2_7_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i20);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i22);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i23);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i24);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i25);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module21)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_goal_2_7_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,4,5,7,8,10,11,13,14)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,15,17,19,21,22,23,24,25)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,26,27,28,29,30,31,32,33)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,34,35,36,37,38,39,40,41)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,42,45,47,48,49,51,53,50)
	MR_init_label8(ll_backend__liveness__detect_deadness_in_goal_2_7_0,58,57,60,61,62,63,64,65)
	MR_init_label7(ll_backend__liveness__detect_deadness_in_goal_2_7_0,44,67,68,69,70,72,73)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_goal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i13));
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unify in detect_deadness_in_goal_2", 34);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("call in detect_deadness_in_goal_2", 33);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("higher-order-call in detect_deadness_in_goal_2", 46);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i72));
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("foreign_proc in detect_deadness_in_goal_2", 41);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i19);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_conj_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i23);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r6;
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i21);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i22);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_par_conj_9_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i23);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i25);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i26);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_disj_9_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i27);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i29);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i30);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_cases_10_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i31);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i33);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i35);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i37);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i38);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i39);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i40);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i41);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i42);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i45);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i44);
	}
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i47);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i48);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i49);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i51);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i50);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i53);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i50);
	}
	MR_r1 = MR_sv(6);
	MR_sv(6) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i58);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i58);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i57);
	}
	MR_sv(7) = (MR_Integer) 1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_2_7_0_i60);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Integer) 0;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i61);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__union_branch_deadness_5_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i62);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__liveness__union_branch_deadness_5_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i63);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i64);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i65);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i70);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i67);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i68);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i69);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i70);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_deadness_in_goal_2_7_0_i73);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_2_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand in detect_deadness_in_goal_2", 38);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module22)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_conj_6_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_conj_6_0,25,4,7,9,6,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_conj_6_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_conj_6_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_conj_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module23)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_disj_9_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_disj_9_0,4,5,8,10,7,11,12,13)
	MR_init_label4(ll_backend__liveness__detect_deadness_in_disj_9_0,14,15,3,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_disj_9_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module24)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_cases_10_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_cases_10_0,4,5,8,10,7,11,12,13)
	MR_init_label5(ll_backend__liveness__detect_deadness_in_cases_10_0,14,15,3,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_tempr4 = MR_r6;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_r7;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr5, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_cases_10_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i17);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module25)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_par_conj_9_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_par_conj_9_0,4,5,6,7,10,9,13,14)
	MR_init_label2(ll_backend__liveness__detect_deadness_in_par_conj_9_0,3,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_par_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_par_conj_9_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("liveness.m", 10);
	MR_r2 = (MR_Word) MR_string_const("detect_deadness_in_par_conj: unreachable instmap", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module26)
	MR_init_entry1(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0);
	MR_init_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i2);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i3);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i4);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i5);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__divide_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module27)
	MR_init_entry1(ll_backend__liveness__delay_death_goal_7_0);
	MR_init_label8(ll_backend__liveness__delay_death_goal_7_0,2,3,4,5,6,7,8,9)
	MR_init_label7(ll_backend__liveness__delay_death_goal_7_0,10,11,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i2);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i3);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__var_is_named_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__divide_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i5);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i6);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i7);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_expr_9_0,
		ll_backend__liveness__delay_death_goal_7_0_i8);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i9);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i10);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i11);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__divide_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i12);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i13);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__divide_by_set_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i14);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i15);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i16);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ll_backend__liveness_module28)
	MR_init_entry1(ll_backend__liveness__delay_death_goal_expr_9_0);
	MR_init_label8(ll_backend__liveness__delay_death_goal_expr_9_0,74,11,13,75,15,17,18,76)
	MR_init_label8(ll_backend__liveness__delay_death_goal_expr_9_0,20,23,22,25,77,27,78,29)
	MR_init_label8(ll_backend__liveness__delay_death_goal_expr_9_0,79,31,32,33,34,35,36,37)
	MR_init_label3(ll_backend__liveness__delay_death_goal_expr_9_0,80,39,73)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_goal_expr_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i73);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i73) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i74) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i75) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i76) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i77) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i79) MR_AND
		MR_LABEL_AP(ll_backend__liveness__delay_death_goal_expr_9_0_i80));
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i11);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_conj_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i13);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_par_conj_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i13);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_disj_6_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i15);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_ctfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i18);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_cases_6_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i20);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i22);
	}
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i23);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delay_death_goal_expr: empty switch", 35);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_ctfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i25);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i27);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i29);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_sv(7) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i31);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i32);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i33);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i34);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i35);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i36);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i37);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i39);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delay_death_goal_expr: shorthand", 32);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module29)
	MR_init_entry1(ll_backend__liveness__delay_death_conj_7_0);
	MR_init_label3(ll_backend__liveness__delay_death_conj_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_conj_7_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_conj_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__liveness__delay_death_conj_7_0,
		ll_backend__liveness__delay_death_conj_7_0_i5);
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module30)
	MR_init_entry1(ll_backend__liveness__delay_death_par_conj_7_0);
	MR_init_label5(ll_backend__liveness__delay_death_par_conj_7_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_par_conj_7_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_par_conj_7_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i5);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i6);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i7);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module31)
	MR_init_entry1(ll_backend__liveness__delay_death_disj_6_0);
	MR_init_label6(ll_backend__liveness__delay_death_disj_6_0,4,5,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_disj_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_disj_6_0_i4);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_disj_6_0,
		ll_backend__liveness__delay_death_disj_6_0_i5);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_disj_6_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_disj_6_0_i8);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_disj_6_0_i9);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module32)
	MR_init_entry1(ll_backend__liveness__delay_death_cases_6_0);
	MR_init_label6(ll_backend__liveness__delay_death_cases_6_0,4,5,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_cases_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_cases_6_0_i4);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_cases_6_0,
		ll_backend__liveness__delay_death_cases_6_0_i5);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_cases_6_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_cases_6_0_i8);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_cases_6_0_i9);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__liveness_module33)
	MR_init_entry1(ll_backend__liveness__delay_death_proc_body_4_0);
	MR_init_label5(ll_backend__liveness__delay_death_proc_body_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_proc_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i2);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i3);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i4);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i5);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i6);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__equal_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__liveness_module34)
	MR_init_entry1(ll_backend__liveness__require_equal_4_0);
	MR_init_label8(ll_backend__liveness__require_equal_4_0,3,5,6,7,8,9,10,11)
	MR_init_label8(ll_backend__liveness__require_equal_4_0,12,13,14,15,16,17,18,19)
	MR_init_label2(ll_backend__liveness__require_equal_4_0,20,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__require_equal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__equal_2_0,
		ll_backend__liveness__require_equal_4_0_i3);
MR_def_label(ll_backend__liveness__require_equal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__liveness__require_equal_4_0_i22);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_sv(4), 4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__liveness__require_equal_4_0_i5);
MR_def_label(ll_backend__liveness__require_equal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__liveness__require_equal_4_0_i6);
MR_def_label(ll_backend__liveness__require_equal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__IntroducedFrom__pred__require_equal__1588__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__require_equal_4_0_i7);
MR_def_label(ll_backend__liveness__require_equal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__IntroducedFrom__pred__require_equal__1589__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__require_equal_4_0_i8);
MR_def_label(ll_backend__liveness__require_equal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__require_equal_4_0_i9);
MR_def_label(ll_backend__liveness__require_equal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__require_equal_4_0_i10);
MR_def_label(ll_backend__liveness__require_equal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__liveness__require_equal_4_0_i11);
MR_def_label(ll_backend__liveness__require_equal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__liveness__require_equal_4_0_i12);
MR_def_label(ll_backend__liveness__require_equal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i13);
MR_def_label(ll_backend__liveness__require_equal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Rest:  ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i14);
MR_def_label(ll_backend__liveness__require_equal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i15);
MR_def_label(ll_backend__liveness__require_equal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i16);
MR_def_label(ll_backend__liveness__require_equal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("First: ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i17);
MR_def_label(ll_backend__liveness__require_equal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" disagree on liveness\n", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i18);
MR_def_label(ll_backend__liveness__require_equal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i19);
MR_def_label(ll_backend__liveness__require_equal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branches of ", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i20);
MR_def_label(ll_backend__liveness__require_equal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("liveness.m", 10);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__require_equal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module35)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_goal_6_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_6_0,2,3,4,5,6,7,8,9)
	MR_init_label1(ll_backend__liveness__detect_resume_points_in_goal_6_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i9);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(hlds__goal_form__cannot_stack_flush_1_0);
MR_decl_entry(hlds__hlds_llds__goal_set_resume_point_3_0);
MR_decl_entry(hlds__goal_form__cannot_fail_before_stack_flush_1_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module36)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_goal_2_7_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,134,12,11,13,135,15,17,19)
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,21,136,23,137,25,26,27,28)
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,31,29,35,33,39,138,41,139)
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,43,44,45,46,47,48,49,51)
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,53,50,58,57,62,61,67,68)
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,140,70,133)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_goal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i133);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i133) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i134) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i135) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i136) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i137) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i138) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i139) MR_AND
		MR_LABEL_AP(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i140));
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i11);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i12);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i13);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i21);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i21);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i21);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_cases_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i23);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i25);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i26);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i27);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i28);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i31);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i39);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i35);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i39);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i39);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i41);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_sv(8), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i43);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i44);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i45);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i46);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i47);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i48);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i49);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i51);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i50);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i53);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i50);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i67);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i58);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i57);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i67);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i62);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i61);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i67);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 3;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i67);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__liveness__require_equal_4_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i68);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		ll_backend__liveness__detect_resume_points_in_goal_2_7_0_i70);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("detect_resume_points_in_goal_2: unexpected shorthand", 52);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_2_7_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module37)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_conj_6_0);
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_conj_6_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_conj_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_conj_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module38)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_non_disj_7_0);
	MR_init_label6(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,35,9,7,11,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_non_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("liveness.m", 10);
	MR_r2 = (MR_Word) MR_string_const("empty nondet disjunction", 24);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i9);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i14);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i14);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module39)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,4,3,5,6,10,11,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i7);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i12);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module40)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,2,3,7,4,5,11,9,15)
	MR_init_label5(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i16);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i17);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i18);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i19);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("disjunction", 11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__require_equal_4_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i20);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module41)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0);
	MR_init_label4(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module42)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_cases_6_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_cases_6_0,27,4,6,7,10,11,9,8)
	MR_init_label1(ll_backend__liveness__detect_resume_points_in_cases_6_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i9);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_cases_6_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i10);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("switch", 6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__require_equal_4_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("switch", 6);
	MR_sv(1) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("switch", 6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__liveness__require_equal_4_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i12);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module43)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_par_conj_6_0);
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_par_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__arg_info__partition_proc_args_5_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
MR_decl_entry(fn__libs__trace_params__trace_level_allows_delay_death_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
MR_decl_entry(ll_backend__trace_gen__trace_fail_vars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_liveness_info_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module44)
	MR_init_entry1(ll_backend__liveness__detect_liveness_proc_2_6_0);
	MR_init_label8(ll_backend__liveness__detect_liveness_proc_2_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__liveness__detect_liveness_proc_2_6_0,10,11,12,13,14,15,16,17)
	MR_init_label8(ll_backend__liveness__detect_liveness_proc_2_6_0,18,19,20,21,22,24,25,27)
	MR_init_label8(ll_backend__liveness__detect_liveness_proc_2_6_0,29,31,32,23,33,35,34,38)
	MR_init_label4(ll_backend__liveness__detect_liveness_proc_2_6_0,40,41,42,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_proc_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(9) = MR_r5;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 57;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("\nbefore liveness", 16);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_compact),
		mercury__ll_backend__liveness__detect_liveness_proc_2_6_0_i12);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("\nafter liveness", 15);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(10);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_compact),
		mercury__ll_backend__liveness__detect_liveness_proc_2_6_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_5_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_ctfield(0, MR_sv(5), 1);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i19);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i20);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("\nafter deadness", 15);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(10);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_compact),
		mercury__ll_backend__liveness__detect_liveness_proc_2_6_0_i21);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i22);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i25);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_6_0_i23);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_allows_delay_death_1_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i27);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_6_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 102;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i29);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_6_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_proc_body_4_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i31);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("\nafter delay death", 18);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_compact),
		mercury__ll_backend__liveness__detect_liveness_proc_2_6_0_i32);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_6_0_i33);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_sv(7) = MR_sv(12);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i35);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_6_0_i34);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_fail_vars_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i38);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i38);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i40);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("\nafter resume point", 19);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_r10 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_compact),
		mercury__ll_backend__liveness__detect_liveness_proc_2_6_0_i41);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i42);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_liveness_info_3_0,
		ll_backend__liveness__detect_liveness_proc_2_6_0_i43);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module45)
	MR_init_entry1(ll_backend__liveness__detect_liveness_proc_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__detect_liveness_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_108_105_118_101_110_101_115_115_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__split_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(list__foldl_corresponding_5_0);

MR_BEGIN_MODULE(ll_backend__liveness_module46)
	MR_init_entry1(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0);
	MR_init_label6(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,16,3,5,6,2,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Integer) 1000;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__split_list_4_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(list__foldl_corresponding_5_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module47)
	MR_init_entry1(ll_backend__liveness__detect_liveness_preds_parallel_2_0);
	MR_init_label1(ll_backend__liveness__detect_liveness_preds_parallel_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__detect_liveness_preds_parallel_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(ll_backend__liveness_module48)
	MR_init_entry1(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_init_label2(ll_backend__liveness__detect_liveness_pred_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_pred_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__detect_liveness_pred_3_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		ll_backend__liveness__detect_liveness_pred_3_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module49)
	MR_init_entry1(ll_backend__liveness__detect_liveness_pred_proc_5_0);
	MR_init_label2(ll_backend__liveness__detect_liveness_pred_proc_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_pred_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		ll_backend__liveness__detect_liveness_pred_proc_5_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_pred_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_proc_2_6_0,
		ll_backend__liveness__detect_liveness_pred_proc_5_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_pred_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__search_name_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module50)
	MR_init_entry1(ll_backend__liveness__var_is_named_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__var_is_named_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(varset__search_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module51)
	MR_init_entry1(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0);
	MR_init_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i2);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i3);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i4);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i5);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module52)
	MR_init_entry1(__Unify___ll_backend__liveness__live_info_0_0);
	MR_init_label5(__Unify___ll_backend__liveness__live_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__liveness__live_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__liveness__live_info_0_0_i4);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__liveness__live_info_0_0_i6);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___ll_backend__liveness__live_info_0_0_i8);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module53)
	MR_init_entry1(__Compare___ll_backend__liveness__live_info_0_0);
	MR_init_label7(__Compare___ll_backend__liveness__live_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__liveness__live_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i2);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__liveness__live_info_0_0_i5);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__liveness__live_info_0_0_i9);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__liveness__live_info_0_0_i13);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___ll_backend__liveness__live_info_0_0_i17);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module54)
	MR_init_entry1(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____unit__unit__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____unit__unit__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_105_111_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_109_97_121_98_101_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__write_goal_8_0);

MR_BEGIN_MODULE(ll_backend__liveness_module55)
	MR_init_entry1(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0);
	MR_init_label3(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0,3,4,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0_i15);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0_i3);
MR_def_label(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0_i4);
MR_def_label(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_8_0);
MR_def_label(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module56)
	MR_init_entry1(ll_backend__liveness__IntroducedFrom__pred__require_equal__1588__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1588__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(varset__lookup_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module57)
	MR_init_entry1(ll_backend__liveness__IntroducedFrom__pred__require_equal__1589__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1589__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(varset__lookup_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(ll_backend__liveness_module58)
	MR_init_entry1(ll_backend__liveness__IntroducedFrom__pred__require_equal__1590__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__IntroducedFrom__pred__require_equal__1590__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module59)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_108_105_118_101_110_101_115_115_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_108_105_118_101_110_101_115_115_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_tailcall_ent(ll_backend__liveness__detect_liveness_proc_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module60)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,8,9,92,14,93,21,19,25)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,27,94,30,31,32,35,33,39)
	MR_init_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,41,43,38,95,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i8) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i9) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i92) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i93) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i25) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i27) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i94) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i95));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_conj_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__liveness__find_reachable_goal_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i19);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__liveness__find_reachable_case_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i19);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i33);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i38);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__liveness__this_file_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_108_105_118_101_110_101_115_115_95_101_120_112_114_95_95_91_50_93_95_48_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("update_liveness_expr: shorthand", 31);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module61)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_105_111_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_109_97_121_98_101_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_105_111_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_110_101_115_115_95_95_109_97_121_98_101_95_100_101_98_117_103_95_108_105_118_101_110_101_115_115_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__liveness_maybe_bunch_0(void)
{
	ll_backend__liveness_module0();
	ll_backend__liveness_module1();
	ll_backend__liveness_module2();
	ll_backend__liveness_module3();
	ll_backend__liveness_module4();
	ll_backend__liveness_module5();
	ll_backend__liveness_module6();
	ll_backend__liveness_module7();
	ll_backend__liveness_module8();
	ll_backend__liveness_module9();
	ll_backend__liveness_module10();
	ll_backend__liveness_module11();
	ll_backend__liveness_module12();
	ll_backend__liveness_module13();
	ll_backend__liveness_module14();
	ll_backend__liveness_module15();
	ll_backend__liveness_module16();
	ll_backend__liveness_module17();
	ll_backend__liveness_module18();
	ll_backend__liveness_module19();
	ll_backend__liveness_module20();
	ll_backend__liveness_module21();
	ll_backend__liveness_module22();
	ll_backend__liveness_module23();
	ll_backend__liveness_module24();
	ll_backend__liveness_module25();
	ll_backend__liveness_module26();
	ll_backend__liveness_module27();
	ll_backend__liveness_module28();
	ll_backend__liveness_module29();
	ll_backend__liveness_module30();
	ll_backend__liveness_module31();
	ll_backend__liveness_module32();
	ll_backend__liveness_module33();
	ll_backend__liveness_module34();
	ll_backend__liveness_module35();
	ll_backend__liveness_module36();
	ll_backend__liveness_module37();
	ll_backend__liveness_module38();
	ll_backend__liveness_module39();
}

static void mercury__ll_backend__liveness_maybe_bunch_1(void)
{
	ll_backend__liveness_module40();
	ll_backend__liveness_module41();
	ll_backend__liveness_module42();
	ll_backend__liveness_module43();
	ll_backend__liveness_module44();
	ll_backend__liveness_module45();
	ll_backend__liveness_module46();
	ll_backend__liveness_module47();
	ll_backend__liveness_module48();
	ll_backend__liveness_module49();
	ll_backend__liveness_module50();
	ll_backend__liveness_module51();
	ll_backend__liveness_module52();
	ll_backend__liveness_module53();
	ll_backend__liveness_module54();
	ll_backend__liveness_module55();
	ll_backend__liveness_module56();
	ll_backend__liveness_module57();
	ll_backend__liveness_module58();
	ll_backend__liveness_module59();
	ll_backend__liveness_module60();
	ll_backend__liveness_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__liveness__init(void);
void mercury__ll_backend__liveness__init_type_tables(void);
void mercury__ll_backend__liveness__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__liveness__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__liveness__init_complexity_procs(void);
#endif

void mercury__ll_backend__liveness__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__liveness_maybe_bunch_0();
	mercury__ll_backend__liveness_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__liveness__type_ctor_info_live_info_0,
		ll_backend__liveness__live_info_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__unit__unit__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____unit__unit__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ll_backend__liveness__debug_liveness_io__arity1__io__state__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__liveness__ClassMethod_for_ll_backend__liveness__debug_liveness_io____io__state__arity0______ll_backend__liveness__maybe_debug_liveness_8_8_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__ll_backend__liveness__init_debugger();
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__liveness__type_ctor_info_live_info_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_ll_backend__liveness__type_class_decl_debug_liveness_io_1);
	}
}


void mercury__ll_backend__liveness__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__liveness__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__liveness__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
