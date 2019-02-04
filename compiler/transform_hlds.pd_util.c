/*
** Automatically generated from `pd_util.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__pd_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.pd_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.pd_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.pd_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.pd_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.pd_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.pd_util.c"
#line 48 "transform_hlds.pd_util.c"
#include "transform_hlds.pd_util.mh"

#line 51 "transform_hlds.pd_util.c"
#line 52 "transform_hlds.pd_util.c"
#ifndef TRANSFORM_HLDS__PD_UTIL_DECL_GUARD
#define TRANSFORM_HLDS__PD_UTIL_DECL_GUARD

#line 56 "transform_hlds.pd_util.c"
#line 57 "transform_hlds.pd_util.c"

#endif
#line 60 "transform_hlds.pd_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__pd_util__type_ctor_info_expansions_0,
	mercury_data_transform_hlds__pd_util__type_ctor_info_pd_var_info_0;
MR_decl_label8(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0, 3,4,7,9,13,15,11,20)
MR_decl_label4(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0, 22,17,23,2)
MR_decl_label1(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0, 1)
MR_decl_label5(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0, 4,6,2,9,1)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0, 49,3,9,11,14,4,19,21)
MR_decl_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0, 23,25,26,17,29,30)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0, 11,3,4,5)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0, 54,3,5,6,9,12,17,14)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0, 7,19,1)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0, 2,3,5,6,9,11,12,13)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0, 15,16,17,1)
MR_decl_label8(transform_hlds__pd_util__bound_inst_list_MSG_7_0, 106,10,12,15,6,7,25,27)
MR_decl_label6(transform_hlds__pd_util__bound_inst_list_MSG_7_0, 23,31,22,35,39,1)
MR_decl_label3(transform_hlds__pd_util__bound_inst_size_5_0, 10,3,4)
MR_decl_label5(transform_hlds__pd_util__collect_matching_arg_types_5_0, 39,3,12,10,9)
MR_decl_label7(transform_hlds__pd_util__combine_vars_4_0, 28,3,7,9,4,11,14)
MR_decl_label8(transform_hlds__pd_util__convert_branch_info_3_0, 3,5,6,7,9,10,11,13)
MR_decl_label1(transform_hlds__pd_util__convert_branch_info_3_0, 14)
MR_decl_label4(transform_hlds__pd_util__convert_branch_info_2_4_0, 13,3,5,7)
MR_decl_label6(transform_hlds__pd_util__examine_case_list_10_0, 14,3,5,6,7,8)
MR_decl_label8(transform_hlds__pd_util__get_branch_instmap_deltas_2_0, 27,29,7,8,9,28,15,1)
MR_decl_label8(transform_hlds__pd_util__get_branch_vars_7_0, 41,3,5,7,10,15,13,18)
MR_decl_label1(transform_hlds__pd_util__get_branch_vars_7_0, 11)
MR_decl_label8(transform_hlds__pd_util__get_branch_vars_goal_4_0, 2,3,4,5,6,8,10,13)
MR_decl_label4(transform_hlds__pd_util__get_branch_vars_goal_4_0, 15,16,17,11)
MR_decl_label8(transform_hlds__pd_util__get_branch_vars_proc_6_0, 2,3,4,7,8,9,11,13)
MR_decl_label8(transform_hlds__pd_util__get_branch_vars_proc_6_0, 14,15,16,17,20,21,22,23)
MR_decl_label3(transform_hlds__pd_util__get_branch_vars_proc_6_0, 24,26,10)
MR_decl_label8(transform_hlds__pd_util__get_extra_info_headvars_8_0, 31,3,7,9,4,10,13,15)
MR_decl_label1(transform_hlds__pd_util__get_extra_info_headvars_8_0, 11)
MR_decl_label8(transform_hlds__pd_util__get_goal_live_vars_2_6_0, 31,3,6,4,8,9,12,10)
MR_decl_label1(transform_hlds__pd_util__get_goal_live_vars_2_6_0, 15)
MR_decl_label6(transform_hlds__pd_util__get_opaque_args_6_0, 27,3,5,9,11,4)
MR_decl_label8(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0, 42,3,7,10,11,12,13,14)
MR_decl_label8(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0, 15,16,19,20,22,23,4,29)
MR_decl_label1(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0, 30)
MR_decl_label1(transform_hlds__pd_util__goal_get_calls_2_0, 2)
MR_decl_label8(transform_hlds__pd_util__goals_match_2_4_0, 182,3,29,31,35,37,23,51)
MR_decl_label8(transform_hlds__pd_util__goals_match_2_4_0, 18,9,11,13,14,16,17,8)
MR_decl_label8(transform_hlds__pd_util__goals_match_2_4_0, 58,62,6,7,65,69,70,71)
MR_decl_label1(transform_hlds__pd_util__goals_match_2_4_0, 1)
MR_decl_label8(transform_hlds__pd_util__inst_MSG_4_0, 3,6,4,10,12,13,15,16)
MR_decl_label1(transform_hlds__pd_util__inst_MSG_4_0, 1)
MR_decl_label8(transform_hlds__pd_util__inst_MSG_2_5_0, 25,24,98,5,7,12,14,20)
MR_decl_label3(transform_hlds__pd_util__inst_MSG_2_5_0, 40,95,1)
MR_decl_label8(transform_hlds__pd_util__inst_list_MSG_5_0, 58,8,6,13,15,16,19,20)
MR_decl_label4(transform_hlds__pd_util__inst_list_MSG_5_0, 22,26,59,1)
MR_decl_label1(transform_hlds__pd_util__inst_list_size_3_0, 2)
MR_decl_label3(transform_hlds__pd_util__inst_list_size_5_0, 10,3,4)
MR_decl_label1(transform_hlds__pd_util__inst_size_3_0, 2)
MR_decl_label8(transform_hlds__pd_util__inst_size_2_4_0, 36,27,26,5,7,9,11,10)
MR_decl_label2(transform_hlds__pd_util__inst_size_2_4_0, 13,14)
MR_decl_label4(transform_hlds__pd_util__match_generic_call_2_0, 5,3,51,1)
MR_decl_label8(transform_hlds__pd_util__pd_can_reorder_goals_4_0, 2,3,5,6,4,7,8,15)
MR_decl_label8(transform_hlds__pd_util__pd_can_reorder_goals_4_0, 18,19,20,22,25,51,17,28)
MR_decl_label3(transform_hlds__pd_util__pd_can_reorder_goals_4_0, 29,30,32)
MR_decl_label7(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0, 2,3,4,5,6,7,8)
MR_decl_label8(transform_hlds__pd_util__pd_requantify_goal_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__pd_util__pd_requantify_goal_5_0, 10)
MR_decl_label8(transform_hlds__pd_util__pd_simplify_goal_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__pd_util__pd_simplify_goal_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(transform_hlds__pd_util__pd_simplify_goal_5_0, 18,19,20,21)
MR_decl_label8(transform_hlds__pd_util__propagate_constraints_6_0, 2,4,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__pd_util__propagate_constraints_6_0, 11,12,13,14,15,16,17,18)
MR_decl_label8(transform_hlds__pd_util__propagate_constraints_6_0, 19,21,22,23,24,25,26,27)
MR_decl_label8(transform_hlds__pd_util__rerun_det_analysis_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__pd_util__rerun_det_analysis_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label2(transform_hlds__pd_util__rerun_det_analysis_6_0, 18,20)
MR_decl_label7(transform_hlds__pd_util__unique_modecheck_goal_7_0, 2,3,4,5,7,8,9)
MR_decl_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0, 10,11,12,13,15,16,18,19)
MR_decl_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0, 20,14,21,22,23,24,25,26)
MR_decl_label2(transform_hlds__pd_util__unique_modecheck_goal_8_0, 27,28)
MR_decl_label1(__Unify___transform_hlds__pd_util__list__list_1_1, 1)
MR_def_extern_entry(transform_hlds__pd_util__goal_get_calls_2_0)
MR_def_extern_entry(transform_hlds__pd_util__pd_simplify_goal_5_0)
MR_def_extern_entry(transform_hlds__pd_util__pd_requantify_goal_5_0)
MR_def_extern_entry(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0)
MR_decl_static(transform_hlds__pd_util__rerun_det_analysis_6_0)
MR_def_extern_entry(transform_hlds__pd_util__propagate_constraints_6_0)
MR_def_extern_entry(transform_hlds__pd_util__unique_modecheck_goal_8_0)
MR_decl_static(transform_hlds__pd_util__get_goal_live_vars_2_6_0)
MR_def_extern_entry(transform_hlds__pd_util__unique_modecheck_goal_7_0)
MR_decl_static(transform_hlds__pd_util__get_opaque_args_6_0)
MR_decl_static(transform_hlds__pd_util__get_extra_info_headvars_8_0)
MR_decl_static(transform_hlds__pd_util__get_branch_instmap_deltas_2_0)
MR_decl_static(transform_hlds__pd_util__get_branch_vars_7_0)
MR_decl_static(transform_hlds__pd_util__convert_branch_info_2_4_0)
MR_def_extern_entry(transform_hlds__pd_util__convert_branch_info_3_0)
MR_decl_static(transform_hlds__pd_util__combine_vars_4_0)
MR_decl_static(transform_hlds__pd_util__examine_case_list_10_0)
MR_decl_static(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0)
MR_def_extern_entry(transform_hlds__pd_util__get_branch_vars_proc_6_0)
MR_def_extern_entry(transform_hlds__pd_util__get_branch_vars_goal_4_0)
MR_decl_static(transform_hlds__pd_util__inst_MSG_2_5_0)
MR_decl_static(transform_hlds__pd_util__inst_list_MSG_5_0)
MR_decl_static(transform_hlds__pd_util__bound_inst_list_MSG_7_0)
MR_def_extern_entry(transform_hlds__pd_util__inst_MSG_4_0)
MR_decl_static(transform_hlds__pd_util__inst_size_2_4_0)
MR_decl_static(transform_hlds__pd_util__bound_inst_size_5_0)
MR_decl_static(transform_hlds__pd_util__inst_list_size_5_0)
MR_def_extern_entry(transform_hlds__pd_util__inst_size_3_0)
MR_def_extern_entry(transform_hlds__pd_util__inst_list_size_3_0)
MR_decl_static(transform_hlds__pd_util__collect_matching_arg_types_5_0)
MR_decl_static(transform_hlds__pd_util__match_generic_call_2_0)
MR_decl_static(transform_hlds__pd_util__goals_match_2_4_0)
MR_def_extern_entry(transform_hlds__pd_util__goals_match_8_0)
MR_def_extern_entry(transform_hlds__pd_util__pd_can_reorder_goals_4_0)
MR_decl_static(__Unify___transform_hlds__pd_util__expansions_0_0)
MR_decl_static(__Compare___transform_hlds__pd_util__expansions_0_0)
MR_decl_static(__Unify___transform_hlds__pd_util__pd_var_info_0_0)
MR_decl_static(__Compare___transform_hlds__pd_util__pd_var_info_0_0)
MR_decl_static(__Unify___transform_hlds__pd_util__list__list_1_1)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__403__1_3_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__407__1_3_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__goals_match__985__1_3_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__391__1_2_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__586__1_2_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__579__1_2_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0)
MR_decl_static(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__goal_get_calls_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__rerun_det_analysis_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__goal_get_calls_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__rerun_det_analysis_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__instmap, instmap)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__586__1_2_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__579__1_2_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__unique_modecheck_goal_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__goals_match_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__unique_modecheck_goal_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,5),
MR_INT_CTOR_ADDR,
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,5),
MR_INT_CTOR_ADDR,
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__goals_match_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,5),
MR_COMMON(4,6),
MR_COMMON(4,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,6),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_info__type_ctor_info_pd_branch_info_1;
static const struct mercury_type_3 mercury_common_3[7] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,3)
}
},
{
{
MR_CTOR1_ADDR(transform_hlds__pd_info, pd_branch_info),
MR_INT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_4 mercury_common_4[7] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,3),
MR_COMMON(3,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(3,3),
MR_COMMON(3,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,3),
MR_COMMON(3,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_vars_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_util__get_branch_vars_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(3,2),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_util__type_ctor_info_expansions_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__pd_util__expansions_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__pd_util__expansions_0_0)),
	"transform_hlds.pd_util",
	"expansions",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_util__type_ctor_info_pd_var_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__pd_util__pd_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__pd_util__pd_var_info_0_0)),
	"transform_hlds.pd_util",
	"pd_var_info",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__goal_get_calls_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_187",
2,
0
},
"transform_hlds.pd_util",
"pd_util.m",
187,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__rerun_det_analysis_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_391",
2,
0
},
"transform_hlds.pd_util",
"pd_util.m",
391,
"d1;c32;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__unique_modecheck_goal_8_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_error_info_to_spec",
3,
0
},
"transform_hlds.pd_util",
"pd_util.m",
301,
"d1;c23;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_586",
2,
0
},
"transform_hlds.pd_util",
"pd_util.m",
586,
"d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_instmap_deltas_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_579",
2,
0
},
"transform_hlds.pd_util",
"pd_util.m",
579,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__get_branch_vars_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_629",
7,
0
},
"transform_hlds.pd_util",
"pd_util.m",
614,
"d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_403",
3,
0
},
"transform_hlds.pd_util",
"pd_util.m",
403,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__convert_branch_info_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_407",
3,
0
},
"transform_hlds.pd_util",
"pd_util.m",
407,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_util__goals_match_2_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_1077",
3,
0
},
"transform_hlds.pd_util",
"pd_util.m",
1077,
"d2;c5;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_util",
"transform_hlds.pd_util",
"lambda_pd_util_m_985",
3,
0
},
"transform_hlds.pd_util",
"pd_util.m",
985,
"d1;c13;"
};

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module0)
	MR_init_entry1(transform_hlds__pd_util__goal_get_calls_2_0);
	MR_init_label1(transform_hlds__pd_util__goal_get_calls_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goal_get_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__goal_get_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__goal_get_calls_2_0_i2);
MR_def_label(transform_hlds__pd_util__goal_get_calls_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__filter_map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_module_info_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_instmap_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__det_util__det_info_init_7_0);
MR_decl_entry(check_hlds__simplify__simplify_info_init_5_0);
MR_decl_entry(check_hlds__simplify__simplify_process_clause_body_goal_4_0);
MR_decl_entry(check_hlds__simplify__simplify_info_get_module_info_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_get_varset_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_get_var_types_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_get_cost_delta_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_proc_info_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_incr_cost_delta_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_module_info_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module1)
	MR_init_entry1(transform_hlds__pd_util__pd_simplify_goal_5_0);
	MR_init_label8(transform_hlds__pd_util__pd_simplify_goal_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__pd_util__pd_simplify_goal_5_0,10,11,12,13,14,15,16,17)
	MR_init_label4(transform_hlds__pd_util__pd_simplify_goal_5_0,18,19,20,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pd_simplify_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__pd_simplify_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i2);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i3);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i4);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i5);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i6);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i7);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_init_5_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i8);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_process_clause_body_goal_4_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i9);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i10);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i11);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i12);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_cost_delta_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i13);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i14);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i15);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i16);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i17);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i18);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i19);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_incr_cost_delta_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i20);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__pd_simplify_goal_5_0_i21);
MR_def_label(transform_hlds__pd_util__pd_simplify_goal_5_0,21)
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

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_goal_general_11_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module2)
	MR_init_entry1(transform_hlds__pd_util__pd_requantify_goal_5_0);
	MR_init_label8(transform_hlds__pd_util__pd_requantify_goal_5_0,2,3,4,5,6,7,8,9)
	MR_init_label1(transform_hlds__pd_util__pd_requantify_goal_5_0,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pd_requantify_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__pd_requantify_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i2);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i3);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i4);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i5);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_goal_general_11_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i6);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i7);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i8);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i9);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__pd_util__pd_requantify_goal_5_0_i10);
MR_def_label(transform_hlds__pd_util__pd_requantify_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module3)
	MR_init_entry1(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0);
	MR_init_label7(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pd_recompute_instmap_delta'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__pd_recompute_instmap_delta_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i2);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i3);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i4);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i5);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i6);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i7);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__pd_recompute_instmap_delta_4_0_i8);
MR_def_label(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(check_hlds__det_analysis__det_get_soln_context_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_pred_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_goal_10_0);
MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_error_specs_2_0);
MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(check_hlds__det_report__disable_det_warnings_3_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module4)
	MR_init_entry1(transform_hlds__pd_util__rerun_det_analysis_6_0);
	MR_init_label8(transform_hlds__pd_util__rerun_det_analysis_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__pd_util__rerun_det_analysis_6_0,10,11,12,13,14,15,16,17)
	MR_init_label2(transform_hlds__pd_util__rerun_det_analysis_6_0,18,20)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'rerun_det_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__rerun_det_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i2);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i3);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i4);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i5);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i6);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i7);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i8);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i9);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i10);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i11);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i12);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i13);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i14);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_error_specs_2_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i15);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i16);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_report__disable_det_warnings_3_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i17);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i18);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__391__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("pd_util.m", 9);
	MR_r3 = (MR_Word) MR_string_const("rerun_det_analysis: determinism errors", 38);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__pd_util__rerun_det_analysis_6_0_i20);
MR_def_label(transform_hlds__pd_util__rerun_det_analysis_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(transform_hlds__pd_debug__pd_debug_message_4_0);
MR_decl_entry(transform_hlds__pd_debug__pd_debug_output_goal_5_0);
MR_decl_entry(transform_hlds__constraint__constraint_info_init_5_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(transform_hlds__constraint__propagate_constraints_in_goal_4_0);
MR_decl_entry(transform_hlds__constraint__constraint_info_deconstruct_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(check_hlds__simplify__find_simplifications_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module5)
	MR_init_entry1(transform_hlds__pd_util__propagate_constraints_6_0);
	MR_init_label8(transform_hlds__pd_util__propagate_constraints_6_0,2,4,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__pd_util__propagate_constraints_6_0,11,12,13,14,15,16,17,18)
	MR_init_label8(transform_hlds__pd_util__propagate_constraints_6_0,19,21,22,23,24,25,26,27)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'propagate_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__propagate_constraints_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 318;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i2);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__propagate_constraints_6_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%% Propagating constraints\n", 27);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_4_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i5);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("before constraints\n", 19);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_output_goal_5_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i6);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i7);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i8);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i9);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i10);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i11);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__constraint_info_init_5_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i12);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i13);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_constraints_in_goal_4_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i14);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__constraint_info_deconstruct_5_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i15);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i16);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i17);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i18);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i19);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__propagate_constraints_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("after constraints, before recompute\n", 36);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_output_goal_5_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i22);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_requantify_goal_5_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i23);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_recompute_instmap_delta_4_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i24);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__pd_util__rerun_det_analysis_6_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i25);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i26);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		transform_hlds__pd_util__propagate_constraints_6_0_i27);
MR_def_label(transform_hlds__pd_util__propagate_constraints_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__pd_util__pd_simplify_goal_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_init_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_init_9_0);
MR_decl_entry(check_hlds__unique_modes__unique_modes_check_goal_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_pred_info_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module6)
	MR_init_entry1(transform_hlds__pd_util__unique_modecheck_goal_8_0);
	MR_init_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0,10,11,12,13,15,16,18,19)
	MR_init_label8(transform_hlds__pd_util__unique_modecheck_goal_8_0,20,14,21,22,23,24,25,26)
	MR_init_label2(transform_hlds__pd_util__unique_modecheck_goal_8_0,27,28)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unique_modecheck_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__unique_modecheck_goal_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i2);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i3);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i4);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i5);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i6);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i7);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i8);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_init_9_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i9);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i10);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 61;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i11);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i12);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i13);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__unique_modecheck_goal_8_0_i15);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__pd_util__unique_modecheck_goal_8_0_i14);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i16);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i18);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i19);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i20);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i21);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i22);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i23);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i24);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_pred_info_3_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i25);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i26);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i27);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__pd_util__unique_modecheck_goal_8_0_i28);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_clobbered_2_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module7)
	MR_init_entry1(transform_hlds__pd_util__get_goal_live_vars_2_6_0);
	MR_init_label8(transform_hlds__pd_util__get_goal_live_vars_2_6_0,31,3,6,4,8,9,12,10)
	MR_init_label1(transform_hlds__pd_util__get_goal_live_vars_2_6_0,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_goal_live_vars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_goal_live_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		transform_hlds__pd_util__get_goal_live_vars_2_6_0_i6);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i9);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__pd_util__get_goal_live_vars_2_6_0_i8);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_clobbered_2_0,
		transform_hlds__pd_util__get_goal_live_vars_2_6_0_i12);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i31);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__get_goal_live_vars_2_6_0_i15);
MR_def_label(transform_hlds__pd_util__get_goal_live_vars_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__pd_util__get_goal_live_vars_2_6_0_i31);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module8)
	MR_init_entry1(transform_hlds__pd_util__unique_modecheck_goal_7_0);
	MR_init_label7(transform_hlds__pd_util__unique_modecheck_goal_7_0,2,3,4,5,7,8,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unique_modecheck_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__unique_modecheck_goal_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i2);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i3);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i4);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i5);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i7);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i8);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_goal_live_vars_2_6_0,
		transform_hlds__pd_util__unique_modecheck_goal_7_0_i9);
MR_def_label(transform_hlds__pd_util__unique_modecheck_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__pd_util__unique_modecheck_goal_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(map__contains_2_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module9)
	MR_init_entry1(transform_hlds__pd_util__get_opaque_args_6_0);
	MR_init_label6(transform_hlds__pd_util__get_opaque_args_6_0,27,3,5,9,11,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_opaque_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_opaque_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_opaque_args_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__pd_util__get_opaque_args_6_0_i5);
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_opaque_args_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__contains_2_0,
		transform_hlds__pd_util__get_opaque_args_6_0_i9);
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_opaque_args_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__get_opaque_args_6_0_i11);
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__pd_util__get_opaque_args_6_0_i27);
	}
MR_def_label(transform_hlds__pd_util__get_opaque_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__pd_util__get_opaque_args_6_0_i27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module10)
	MR_init_entry1(transform_hlds__pd_util__get_extra_info_headvars_8_0);
	MR_init_label8(transform_hlds__pd_util__get_extra_info_headvars_8_0,31,3,7,9,4,10,13,15)
	MR_init_label1(transform_hlds__pd_util__get_extra_info_headvars_8_0,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_extra_info_headvars'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_extra_info_headvars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__get_extra_info_headvars_8_0_i7);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i4);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		transform_hlds__pd_util__get_extra_info_headvars_8_0_i9);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i10);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__pd_util__get_extra_info_headvars_8_0_i13);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i11);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__pd_util__get_extra_info_headvars_8_0_i15);
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i31);
	}
MR_def_label(transform_hlds__pd_util__get_extra_info_headvars_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__pd_util__get_extra_info_headvars_8_0_i31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0;
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__pd_util_module11)
	MR_init_entry1(transform_hlds__pd_util__get_branch_instmap_deltas_2_0);
	MR_init_label8(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,27,29,7,8,9,28,15,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_branch_instmap_deltas'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_branch_instmap_deltas_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i1));
	}
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_ctfield(3, MR_r5, 1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i15);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 3), 1);
	MR_sv(2) = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 4), 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i7);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i8);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i9);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_ctfield(3, MR_r5, 3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__pd_util__get_branch_instmap_deltas_2_0_i15);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module12)
	MR_init_entry1(transform_hlds__pd_util__get_branch_vars_7_0);
	MR_init_label8(transform_hlds__pd_util__get_branch_vars_7_0,41,3,5,7,10,15,13,18)
	MR_init_label1(transform_hlds__pd_util__get_branch_vars_7_0,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_branch_vars'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_branch_vars_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_7_0_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr4;
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_tempr5, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i5);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i7);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,3,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i10);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_7_0_i11);
	}
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i15);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i18);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		transform_hlds__pd_util__get_branch_vars_7_0_i18);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r6 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__pd_util__get_branch_vars_7_0_i11);
MR_def_label(transform_hlds__pd_util__get_branch_vars_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_7_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module13)
	MR_init_entry1(transform_hlds__pd_util__convert_branch_info_2_4_0);
	MR_init_label4(transform_hlds__pd_util__convert_branch_info_2_4_0,13,3,5,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'convert_branch_info_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__convert_branch_info_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__convert_branch_info_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__convert_branch_info_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__pd_util__convert_branch_info_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__pd_util__convert_branch_info_2_4_0_i5);
MR_def_label(transform_hlds__pd_util__convert_branch_info_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__pd_util__convert_branch_info_2_4_0_i7);
MR_def_label(transform_hlds__pd_util__convert_branch_info_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__pd_util__convert_branch_info_2_4_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module14)
	MR_init_entry1(transform_hlds__pd_util__convert_branch_info_3_0);
	MR_init_label8(transform_hlds__pd_util__convert_branch_info_3_0,3,5,6,7,9,10,11,13)
	MR_init_label1(transform_hlds__pd_util__convert_branch_info_3_0,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'convert_branch_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__convert_branch_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i3);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i5);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__convert_branch_info_2_4_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i6);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i7);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__403__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i9);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i10);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i11);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__407__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i13);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__pd_util__convert_branch_info_3_0_i14);
MR_def_label(transform_hlds__pd_util__convert_branch_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module15)
	MR_init_entry1(transform_hlds__pd_util__combine_vars_4_0);
	MR_init_label7(transform_hlds__pd_util__combine_vars_4_0,28,3,7,9,4,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'combine_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__combine_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__combine_vars_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__combine_vars_4_0_i7);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__combine_vars_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__combine_vars_4_0_i9);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__pd_util__combine_vars_4_0_i14);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		transform_hlds__pd_util__combine_vars_4_0_i11);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__pd_util__combine_vars_4_0_i14);
MR_def_label(transform_hlds__pd_util__combine_vars_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__pd_util__combine_vars_4_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module16)
	MR_init_entry1(transform_hlds__pd_util__examine_case_list_10_0);
	MR_init_label6(transform_hlds__pd_util__examine_case_list_10_0,14,3,5,6,7,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'examine_case_list'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__examine_case_list_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__examine_case_list_10_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__examine_case_list_10_0_i5);
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(7);
	MR_tempr3 = MR_sv(8);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		transform_hlds__pd_util__examine_case_list_10_0_i6);
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__examine_case_list_10_0_i7);
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,
		transform_hlds__pd_util__examine_case_list_10_0_i8);
MR_def_label(transform_hlds__pd_util__examine_case_list_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__pd_util__examine_case_list_10_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module17)
	MR_init_entry1(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0);
	MR_init_label8(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,42,3,7,10,11,12,13,14)
	MR_init_label8(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,15,16,19,20,22,23,4,29)
	MR_init_label1(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,30)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_sub_branch_vars_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r8, 0);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i19);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i20));
	}
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_sv(7) = MR_ctfield(0, MR_r8, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_r7, 1);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i16);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_sv(7) = MR_ctfield(0, MR_r8, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i11);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i12);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i13);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i14);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i15);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i16);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i29);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r8, 1);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i29);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pd_util.m", 9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("get_sub_branch_vars_goal: shorthand", 35);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i4);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_sv(7) = MR_ctfield(0, MR_r8, 1);
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r7;
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	MR_r4 = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__examine_case_list_10_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i23);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(4) = MR_r2;
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i29);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i30);
MR_def_label(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0_i42);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__instmap__init_reachable_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module18)
	MR_init_entry1(transform_hlds__pd_util__get_branch_vars_proc_6_0);
	MR_init_label8(transform_hlds__pd_util__get_branch_vars_proc_6_0,2,3,4,7,8,9,11,13)
	MR_init_label8(transform_hlds__pd_util__get_branch_vars_proc_6_0,14,15,16,17,20,21,22,23)
	MR_init_label3(transform_hlds__pd_util__get_branch_vars_proc_6_0,24,26,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_branch_vars_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__get_branch_vars_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i2);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i3);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_reachable_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i4);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i7);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i8);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i9);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i11);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_proc_6_0_i10);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i13);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i14);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i15);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_extra_info_headvars_8_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i16);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i17);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(11) = MR_tempr3;
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i20);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i21);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_extra_info_headvars_8_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i22);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i23);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_opaque_args_6_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i24);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__pd_util__get_branch_vars_proc_6_0_i26);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__pd_util__get_branch_vars_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module19)
	MR_init_entry1(transform_hlds__pd_util__get_branch_vars_goal_4_0);
	MR_init_label8(transform_hlds__pd_util__get_branch_vars_goal_4_0,2,3,4,5,6,8,10,13)
	MR_init_label4(transform_hlds__pd_util__get_branch_vars_goal_4_0,15,16,17,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_branch_vars_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__get_branch_vars_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i2);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i3);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i4);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i5);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i6);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i8);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i10);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i13);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__get_branch_vars_goal_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_sub_branch_vars_goal_8_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i15);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i16);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__get_branch_vars_goal_4_0_i17);
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__pd_util__get_branch_vars_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module20)
	MR_init_entry1(transform_hlds__pd_util__inst_MSG_2_5_0);
	MR_init_label8(transform_hlds__pd_util__inst_MSG_2_5_0,25,24,98,5,7,12,14,20)
	MR_init_label3(transform_hlds__pd_util__inst_MSG_2_5_0,40,95,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_MSG_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__inst_MSG_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i24);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i25);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i95);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i95);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i40);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i95);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i20) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i95) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i95) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i95) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_MSG_2_5_0_i98));
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__pd_util__inst_MSG_2_5_0_i5);
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_util__inst_list_MSG_5_0,
		transform_hlds__pd_util__inst_MSG_2_5_0_i7);
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i14);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	MR_r6 = MR_r2;
	MR_np_tailcall_ent(transform_hlds__pd_util__bound_inst_list_MSG_7_0);
	}
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i95);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_2_5_0_i95);
	}
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__inst_MSG_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module21)
	MR_init_entry1(transform_hlds__pd_util__inst_list_MSG_5_0);
	MR_init_label8(transform_hlds__pd_util__inst_list_MSG_5_0,58,8,6,13,15,16,19,20)
	MR_init_label4(transform_hlds__pd_util__inst_list_MSG_5_0,22,26,59,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_list_MSG'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__inst_list_MSG_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i58);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i59);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i8);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__pd_util__inst_list_MSG_5_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i26);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i13);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i15);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i16);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i19);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i20);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_sv(7);
	MR_np_localcall_lab(transform_hlds__pd_util__inst_list_MSG_5_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i26);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__inst_MSG_2_5_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i22);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__pd_util__inst_list_MSG_5_0,
		transform_hlds__pd_util__inst_list_MSG_5_0_i26);
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_MSG_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__inst_list_MSG_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_unique_2_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module22)
	MR_init_entry1(transform_hlds__pd_util__bound_inst_list_MSG_7_0);
	MR_init_label8(transform_hlds__pd_util__bound_inst_list_MSG_7_0,106,10,12,15,6,7,25,27)
	MR_init_label6(transform_hlds__pd_util__bound_inst_list_MSG_7_0,23,31,22,35,39,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_list_MSG'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__bound_inst_list_MSG_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i106);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i106);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r5;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i10);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_util__inst_list_MSG_5_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i12);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__pd_util__bound_inst_list_MSG_7_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i15);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_sv(3) != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i39);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_r6;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i25);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i27);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i22);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr2 = MR_r6;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i31);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	MR_r1 = MR_sv(2);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,
		transform_hlds__pd_util__bound_inst_list_MSG_7_0_i35);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_list_MSG_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__pd_util__bound_inst_list_MSG_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module23)
	MR_init_entry1(transform_hlds__pd_util__inst_MSG_4_0);
	MR_init_label8(transform_hlds__pd_util__inst_MSG_4_0,3,6,4,10,12,13,15,16)
	MR_init_label1(transform_hlds__pd_util__inst_MSG_4_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_MSG'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__inst_MSG_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__inst_MSG_4_0_i3);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		transform_hlds__pd_util__inst_MSG_4_0_i6);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__pd_util__inst_MSG_4_0_i10);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		transform_hlds__pd_util__inst_MSG_4_0_i12);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		transform_hlds__pd_util__inst_MSG_4_0_i13);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__inst_MSG_4_0_i15);
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_MSG_4_0_i16);
	}
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__pd_util__inst_MSG_2_5_0);
	}
MR_def_label(transform_hlds__pd_util__inst_MSG_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module24)
	MR_init_entry1(transform_hlds__pd_util__inst_size_2_4_0);
	MR_init_label8(transform_hlds__pd_util__inst_size_2_4_0,36,27,26,5,7,9,11,10)
	MR_init_label2(transform_hlds__pd_util__inst_size_2_4_0,13,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_size_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__inst_size_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_size_2_4_0_i26);
	}
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__inst_size_2_4_0_i27));
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__pd_util__bound_inst_size_5_0);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__pd_util__inst_size_2_4_0_i36);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__pd_util__inst_size_2_4_0_i11);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_size_2_4_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__inst_size_2_4_0_i13);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		transform_hlds__pd_util__inst_size_2_4_0_i14);
MR_def_label(transform_hlds__pd_util__inst_size_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__pd_util__inst_size_2_4_0_i36);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module25)
	MR_init_entry1(transform_hlds__pd_util__bound_inst_size_5_0);
	MR_init_label3(transform_hlds__pd_util__bound_inst_size_5_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_size'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__bound_inst_size_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__bound_inst_size_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_size_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__pd_util__bound_inst_size_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(transform_hlds__pd_util__inst_list_size_5_0,
		transform_hlds__pd_util__bound_inst_size_5_0_i4);
MR_def_label(transform_hlds__pd_util__bound_inst_size_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__pd_util__bound_inst_size_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module26)
	MR_init_entry1(transform_hlds__pd_util__inst_list_size_5_0);
	MR_init_label3(transform_hlds__pd_util__inst_list_size_5_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_list_size'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__inst_list_size_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__inst_list_size_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__inst_list_size_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__pd_util__inst_list_size_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__pd_util__inst_size_2_4_0,
		transform_hlds__pd_util__inst_list_size_5_0_i4);
MR_def_label(transform_hlds__pd_util__inst_list_size_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__pd_util__inst_list_size_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module27)
	MR_init_entry1(transform_hlds__pd_util__inst_size_3_0);
	MR_init_label1(transform_hlds__pd_util__inst_size_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_size'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__inst_size_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__inst_size_3_0_i2);
MR_def_label(transform_hlds__pd_util__inst_size_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__pd_util__inst_size_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module28)
	MR_init_entry1(transform_hlds__pd_util__inst_list_size_3_0);
	MR_init_label1(transform_hlds__pd_util__inst_list_size_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'inst_list_size'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__inst_list_size_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__pd_util__inst_list_size_3_0_i2);
MR_def_label(transform_hlds__pd_util__inst_list_size_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__pd_util__inst_list_size_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module29)
	MR_init_entry1(transform_hlds__pd_util__collect_matching_arg_types_5_0);
	MR_init_label5(transform_hlds__pd_util__collect_matching_arg_types_5_0,39,3,12,10,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'collect_matching_arg_types'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__collect_matching_arg_types_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__collect_matching_arg_types_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__reverse_2_0);
MR_def_label(transform_hlds__pd_util__collect_matching_arg_types_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		transform_hlds__pd_util__collect_matching_arg_types_5_0_i12);
MR_def_label(transform_hlds__pd_util__collect_matching_arg_types_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i39);
	}
MR_def_label(transform_hlds__pd_util__collect_matching_arg_types_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__pd_util__collect_matching_arg_types_5_0_i39);
MR_def_label(transform_hlds__pd_util__collect_matching_arg_types_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pd_util.m", 9);
	MR_r2 = (MR_Word) MR_string_const("collect_matching_arg_types", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__class_id_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__simple_call_id_0_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module30)
	MR_init_entry1(transform_hlds__pd_util__match_generic_call_2_0);
	MR_init_label4(transform_hlds__pd_util__match_generic_call_2_0,5,3,51,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'match_generic_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__match_generic_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 2);
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_id_0_0,
		transform_hlds__pd_util__match_generic_call_2_0_i5);
MR_def_label(transform_hlds__pd_util__match_generic_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__simple_call_id_0_0);
MR_def_label(transform_hlds__pd_util__match_generic_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i51);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i51);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__match_generic_call_2_0_i51);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(transform_hlds__pd_util__match_generic_call_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__match_generic_call_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__generic_call_vars_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(transform_hlds__pd_util_module31)
	MR_init_entry1(transform_hlds__pd_util__goals_match_2_4_0);
	MR_init_label8(transform_hlds__pd_util__goals_match_2_4_0,182,3,29,31,35,37,23,51)
	MR_init_label8(transform_hlds__pd_util__goals_match_2_4_0,18,9,11,13,14,16,17,8)
	MR_init_label8(transform_hlds__pd_util__goals_match_2_4_0,58,62,6,7,65,69,70,71)
	MR_init_label1(transform_hlds__pd_util__goals_match_2_4_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goals_match_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__goals_match_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r5 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i9);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i18);
	}
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_r5 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__pd_util__goals_match_2_4_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__goals_match_2_4_0_i35) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__goals_match_2_4_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__pd_util__goals_match_2_4_0_i51));
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r5, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__pd_util__goals_match_2_4_0_i31);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i8);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r5, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__pd_util__goals_match_2_4_0_i37);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i8);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(0, MR_r5, 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(2, MR_tempr6, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(2, MR_tempr6, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(2, MR_tempr1, 1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(2, MR_tempr1, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr5;
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i8);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(0, MR_r5, 3);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr6, 2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_tempr6, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr5;
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i8);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_tempr2 = MR_r4;
	MR_r6 = MR_ctfield(1, MR_tempr2, 0);
	MR_r7 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_ctfield(1, MR_tempr1, 1);
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_r3 = MR_ctfield(1, MR_tempr2, 2);
	MR_r4 = MR_ctfield(1, MR_tempr1, 2);
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i8);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 3);
	MR_tempr3 = MR_ctfield(2, MR_tempr1, 3);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_ctfield(2, MR_tempr4, 0);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__match_generic_call_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i11);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__generic_call_vars_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i13);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__goal_util__generic_call_vars_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i14);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__pd_util__goals_match_2_4_0_i16);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__pd_util__goals_match_2_4_0_i17);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		transform_hlds__pd_util__goals_match_2_4_0_i58);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		transform_hlds__pd_util__goals_match_2_4_0_i62);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i182);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i65);
	}
	MR_tempr2 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i69);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i69);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__pd_util__goals_match_2_4_0_i70);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__pd_util__goals_match_2_4_0,
		transform_hlds__pd_util__goals_match_2_4_0_i71);
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__pd_util__goals_match_2_4_0_i182);
	}
MR_def_label(transform_hlds__pd_util__goals_match_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module32)
	MR_init_entry1(transform_hlds__pd_util__goals_match_8_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goals_match'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__goals_match_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_purity_3_0);
MR_decl_entry(hlds__goal_util__reordering_maintains_termination_old_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module33)
	MR_init_entry1(transform_hlds__pd_util__pd_can_reorder_goals_4_0);
	MR_init_label8(transform_hlds__pd_util__pd_can_reorder_goals_4_0,2,3,5,6,4,7,8,15)
	MR_init_label8(transform_hlds__pd_util__pd_can_reorder_goals_4_0,18,19,20,22,25,51,17,28)
	MR_init_label3(transform_hlds__pd_util__pd_can_reorder_goals_4_0,29,30,32)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pd_can_reorder_goals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_util__pd_can_reorder_goals_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i2);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i3);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i5);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i6);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i7);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i8);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
	if (MR_INT_EQ(MR_sv(5),2)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_old_4_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i15);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i51);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(4), 1);
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i18);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i19);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i20);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i22);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i25);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__pd_can_reorder_goals_4_0_i17);
	}
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i28);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i29);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i30);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__pd_can_reorder_goals_4_0_i32);
MR_def_label(transform_hlds__pd_util__pd_can_reorder_goals_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(set__empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module34)
	MR_init_entry1(__Unify___transform_hlds__pd_util__expansions_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__pd_util__expansions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module35)
	MR_init_entry1(__Compare___transform_hlds__pd_util__expansions_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__pd_util__expansions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module36)
	MR_init_entry1(__Unify___transform_hlds__pd_util__pd_var_info_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__pd_util__pd_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
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

MR_BEGIN_MODULE(transform_hlds__pd_util_module37)
	MR_init_entry1(__Compare___transform_hlds__pd_util__pd_var_info_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__pd_util__pd_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
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

MR_BEGIN_MODULE(transform_hlds__pd_util_module38)
	MR_init_entry1(__Unify___transform_hlds__pd_util__list__list_1_1);
	MR_init_label1(__Unify___transform_hlds__pd_util__list__list_1_1,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__pd_util__list__list_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__pd_util__list__list_1_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___transform_hlds__pd_util__list__list_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module39)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0);
	MR_init_label1(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_get_calls__187__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module40)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__403__1_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_branch_info__403__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__403__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__index1_det_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module41)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__407__1_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_branch_info__407__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__407__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__index1_det_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module42)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__goals_match__985__1_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goals_match__985__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__goals_match__985__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module43)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__391__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__rerun_det_analysis__391__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__391__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module44)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__586__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_branch_instmap_deltas__586__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__586__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module45)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__579__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_branch_instmap_deltas__579__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__579__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module46)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0);
	MR_init_label8(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,3,4,7,9,13,15,11,20)
	MR_init_label4(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,22,17,23,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_branch_vars__629__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i3);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i4);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i2);
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(6), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i7);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__pd_util__list__list_1_1,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i9);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i13);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__pd_util__list__list_1_1,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i15);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i2);
	}
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i20);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i22);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0_i23);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__629__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module47)
	MR_init_entry1(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0);
	MR_init_label5(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,4,6,2,9,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goals_match_2__1077__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0_i4);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0_i2);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0_i6);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0_i9);
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1077__1_3_0,1)
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

MR_decl_entry(list__map_3_2);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module48)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,2,3,5,6,9,11,12,13)
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,15,16,17,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__goals_match__[1]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__goals_match_2_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_util__IntroducedFrom__pred__goals_match__985__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_2,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__delete_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_util__collect_matching_arg_types_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module49)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,54,3,5,6,9,12,17,14)
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,7,19,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_branch_vars_goal_2__[4]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i3);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__pd_util__get_branch_instmap_deltas_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i7);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_branch_vars_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i14);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i54);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i54);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0_i54);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_util_module50)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,11,3,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__examine_branch_list__[5]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_util_module51)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,49,3,9,11,14,4,19,21)
	MR_init_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,23,25,26,17,29,30)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__examine_branch__[5]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_util__convert_branch_info_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__combine_vars_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i26);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(set__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i21);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i23);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i17);
	}
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__keys_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__combine_vars_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i26);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i30);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_100_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_0_i49);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__pd_util_maybe_bunch_0(void)
{
	transform_hlds__pd_util_module0();
	transform_hlds__pd_util_module1();
	transform_hlds__pd_util_module2();
	transform_hlds__pd_util_module3();
	transform_hlds__pd_util_module4();
	transform_hlds__pd_util_module5();
	transform_hlds__pd_util_module6();
	transform_hlds__pd_util_module7();
	transform_hlds__pd_util_module8();
	transform_hlds__pd_util_module9();
	transform_hlds__pd_util_module10();
	transform_hlds__pd_util_module11();
	transform_hlds__pd_util_module12();
	transform_hlds__pd_util_module13();
	transform_hlds__pd_util_module14();
	transform_hlds__pd_util_module15();
	transform_hlds__pd_util_module16();
	transform_hlds__pd_util_module17();
	transform_hlds__pd_util_module18();
	transform_hlds__pd_util_module19();
	transform_hlds__pd_util_module20();
	transform_hlds__pd_util_module21();
	transform_hlds__pd_util_module22();
	transform_hlds__pd_util_module23();
	transform_hlds__pd_util_module24();
	transform_hlds__pd_util_module25();
	transform_hlds__pd_util_module26();
	transform_hlds__pd_util_module27();
	transform_hlds__pd_util_module28();
	transform_hlds__pd_util_module29();
	transform_hlds__pd_util_module30();
	transform_hlds__pd_util_module31();
	transform_hlds__pd_util_module32();
	transform_hlds__pd_util_module33();
	transform_hlds__pd_util_module34();
	transform_hlds__pd_util_module35();
	transform_hlds__pd_util_module36();
	transform_hlds__pd_util_module37();
	transform_hlds__pd_util_module38();
	transform_hlds__pd_util_module39();
}

static void mercury__transform_hlds__pd_util_maybe_bunch_1(void)
{
	transform_hlds__pd_util_module40();
	transform_hlds__pd_util_module41();
	transform_hlds__pd_util_module42();
	transform_hlds__pd_util_module43();
	transform_hlds__pd_util_module44();
	transform_hlds__pd_util_module45();
	transform_hlds__pd_util_module46();
	transform_hlds__pd_util_module47();
	transform_hlds__pd_util_module48();
	transform_hlds__pd_util_module49();
	transform_hlds__pd_util_module50();
	transform_hlds__pd_util_module51();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__pd_util__init(void);
void mercury__transform_hlds__pd_util__init_type_tables(void);
void mercury__transform_hlds__pd_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__pd_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__pd_util__init_complexity_procs(void);
#endif

void mercury__transform_hlds__pd_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__pd_util_maybe_bunch_0();
	mercury__transform_hlds__pd_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__pd_util__type_ctor_info_expansions_0,
		transform_hlds__pd_util__expansions_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__pd_util__type_ctor_info_pd_var_info_0,
		transform_hlds__pd_util__pd_var_info_0_0);
	mercury__transform_hlds__pd_util__init_debugger();
}

void mercury__transform_hlds__pd_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__pd_util__type_ctor_info_expansions_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__pd_util__type_ctor_info_pd_var_info_0);
	}
}


void mercury__transform_hlds__pd_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__pd_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__pd_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__pd_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
