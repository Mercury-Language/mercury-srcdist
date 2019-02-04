/*
** Automatically generated from `var_use_analysis.m'
** by the Mercury compiler,
** version rotd-2011-08-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__var_use_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 284 "profile.int"
#include "profile.mh"

#line 28 "var_use_analysis.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "var_use_analysis.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "var_use_analysis.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "var_use_analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "var_use_analysis.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "var_use_analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "var_use_analysis.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 56 "var_use_analysis.c"
#line 57 "var_use_analysis.c"
#include "var_use_analysis.mh"

#line 60 "var_use_analysis.c"
#line 61 "var_use_analysis.c"
#ifndef VAR_USE_ANALYSIS_DECL_GUARD
#define VAR_USE_ANALYSIS_DECL_GUARD

#line 65 "var_use_analysis.c"
#line 66 "var_use_analysis.c"

#endif
#line 69 "var_use_analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0,
	mercury_data_var_use_analysis__type_ctor_info_found_first_use_0,
	mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0,
	mercury_data_var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0,
	mercury_data_var_use_analysis__type_ctor_info_recursive_calls_list_0,
	mercury_data_var_use_analysis__type_ctor_info_recursive_case_0,
	mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0,
	mercury_data_var_use_analysis__type_ctor_info_var_use_info_0,
	mercury_data_var_use_analysis__type_ctor_info_var_use_options_0,
	mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
MR_decl_label2(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0, 2,3)
MR_decl_label3(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0, 5,2,3)
MR_decl_label2(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0, 3,1)
MR_decl_label10(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0, 2,4,7,8,9,10,13,16,20,18)
MR_decl_label7(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0, 17,24,22,25,26,27,28)
MR_decl_label3(var_use_analysis__adjust_weight_for_recursion_4_0, 3,2,5)
MR_decl_label5(var_use_analysis__atomic_trivial_var_first_use_5_0, 2,4,9,6,3)
MR_decl_label1(var_use_analysis__build_recursive_call_sites_list_2_0, 2)
MR_decl_label10(var_use_analysis__call_args_first_use_5_0, 1,5,4,10,13,17,15,9,3,22)
MR_decl_label1(var_use_analysis__call_args_first_use_5_0, 2)
MR_decl_label4(var_use_analysis__call_site_dynamic_var_use_info_6_0, 2,3,4,5)
MR_decl_label4(var_use_analysis__call_site_dynamic_var_use_info_6_1, 2,3,4,5)
MR_decl_label10(var_use_analysis__call_site_dynamic_var_use_info_9_0, 2,5,10,13,6,19,18,23,24,25)
MR_decl_label2(var_use_analysis__call_site_dynamic_var_use_info_9_0, 4,3)
MR_decl_label10(var_use_analysis__call_site_dynamic_var_use_info_9_1, 2,5,10,13,6,19,18,24,26,29)
MR_decl_label4(var_use_analysis__call_site_dynamic_var_use_info_9_1, 30,28,4,3)
MR_decl_label10(var_use_analysis__call_var_first_use_7_0, 3,6,4,9,11,10,13,14,16,18)
MR_decl_label10(var_use_analysis__call_var_first_use_7_0, 15,21,24,30,29,26,25,43,37,46)
MR_decl_label8(var_use_analysis__call_var_first_use_7_0, 52,50,47,55,61,57,20,65)
MR_decl_label10(var_use_analysis__clique_var_use_info_4_0, 2,3,4,5,6,11,13,15,20,21)
MR_decl_label10(var_use_analysis__clique_var_use_info_4_0, 22,19,28,30,31,27,36,10,38,8)
MR_decl_label1(var_use_analysis__clique_var_use_info_4_0, 7)
MR_decl_label10(var_use_analysis__conj_rec_prob_7_0, 3,5,6,9,7,10,11,12,13,14)
MR_decl_label4(var_use_analysis__conj_rec_prob_7_0, 15,17,18,19)
MR_decl_label4(var_use_analysis__conj_var_first_use_7_0, 23,3,6,26)
MR_decl_label10(var_use_analysis__disj_rec_prob_7_0, 3,5,6,9,7,10,11,12,13,14)
MR_decl_label4(var_use_analysis__disj_rec_prob_7_0, 15,17,18,19)
MR_decl_label4(var_use_analysis__disj_var_first_use_7_0, 2,4,8,3)
MR_decl_label10(var_use_analysis__disj_var_first_use_2_7_0, 99,6,7,9,13,15,16,19,21,18)
MR_decl_label9(var_use_analysis__disj_var_first_use_2_7_0, 23,25,30,33,35,32,24,42,98)
MR_decl_label1(var_use_analysis__ffu_to_float_3_0, 2)
MR_decl_label10(var_use_analysis__goal_rec_prob_6_0, 2,3,6,4,8,10,12,16,18,14)
MR_decl_label6(var_use_analysis__goal_rec_prob_6_0, 19,21,25,26,7,27)
MR_decl_label10(var_use_analysis__goal_var_first_use_6_0, 123,2,7,6,13,11,15,5,4,18)
MR_decl_label8(var_use_analysis__goal_var_first_use_6_0, 20,22,27,26,28,24,29,31)
MR_decl_label4(var_use_analysis__goal_var_first_use_wrapper_13_0, 3,7,9,5)
MR_decl_label4(var_use_analysis__intermodule_var_use_should_follow_csd_2_0, 4,5,6,11)
MR_decl_label10(var_use_analysis__ite_rec_prob_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(var_use_analysis__ite_rec_prob_8_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(var_use_analysis__ite_var_first_use_8_0, 2,3,4,5,6,7,13,14,15,18)
MR_decl_label7(var_use_analysis__ite_var_first_use_8_0, 21,25,24,26,27,30,20)
MR_decl_label1(var_use_analysis__pessimistic_var_use_info_3_0, 3)
MR_decl_label1(var_use_analysis__pessimistic_var_use_time_3_0, 3)
MR_decl_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0, 2,3,5,8,10,11,12,13,14,15)
MR_decl_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0, 16,17,18,19,20,21,22,24,25,28)
MR_decl_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0, 31,33,34,35,37,36,39,40,41,44)
MR_decl_label8(var_use_analysis__prepare_for_proc_var_first_use_7_0, 45,46,7,48,49,50,51,52)
MR_decl_label3(var_use_analysis__proc_dynamic_var_use_info_9_0, 2,4,6)
MR_decl_label5(var_use_analysis__rec_conj_var_first_use_7_0, 26,5,6,7,25)
MR_decl_label3(var_use_analysis__rec_disj_var_first_use_6_0, 2,6,3)
MR_decl_label10(var_use_analysis__rec_disj_var_first_use_2_7_0, 44,5,6,7,8,9,11,12,13,14)
MR_decl_label3(var_use_analysis__rec_disj_var_first_use_2_7_0, 15,16,18)
MR_decl_label10(var_use_analysis__rec_goal_var_first_use_6_0, 111,2,3,7,12,10,9,6,5,17)
MR_decl_label9(var_use_analysis__rec_goal_var_first_use_6_0, 19,21,26,25,28,23,29,31,35)
MR_decl_label10(var_use_analysis__rec_ite_var_first_use_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(var_use_analysis__rec_ite_var_first_use_8_0, 12,13,17,21,24,27,31,38,39,26)
MR_decl_label9(var_use_analysis__rec_switch_var_first_use_7_0, 2,4,5,6,10,8,13,16,17)
MR_decl_label8(var_use_analysis__rec_switch_var_first_use_2_9_0, 26,4,6,7,8,9,10,11)
MR_decl_label4(var_use_analysis__switch_rec_prob_7_0, 2,4,5,6)
MR_decl_label9(var_use_analysis__switch_rec_prob_2_9_0, 25,4,6,7,8,9,10,11,12)
MR_decl_label8(var_use_analysis__switch_var_first_use_7_0, 2,3,4,8,6,11,14,15)
MR_decl_label6(var_use_analysis__switch_var_first_use_2_8_0, 24,4,7,10,11,12)
MR_decl_label5(var_use_analysis__var_first_use_13_0, 2,4,8,10,6)
MR_decl_label2(var_use_analysis__var_mode_to_var_use_type_2_0, 2,5)
MR_decl_label8(fn__var_use_analysis__average_var_use_1_0, 5,6,7,8,9,12,11,3)
MR_decl_label4(__Unify___var_use_analysis__first_use_rec_info_0_0, 12,5,7,1)
MR_decl_label3(__Unify___var_use_analysis__found_first_use_0_0, 10,5,1)
MR_decl_label3(__Unify___var_use_analysis__intermodule_var_use_0_0, 10,5,1)
MR_decl_label8(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0, 23,5,8,10,12,15,17,1)
MR_decl_label10(__Unify___var_use_analysis__var_first_use_static_info_0_0, 5,7,9,11,13,15,17,19,23,1)
MR_decl_label2(__Unify___var_use_analysis__var_use_info_0_0, 4,1)
MR_decl_label4(__Unify___var_use_analysis__var_use_options_0_0, 4,6,8,1)
MR_decl_label6(__Compare___var_use_analysis__first_use_rec_info_0_0, 24,7,5,9,11,16)
MR_decl_label4(__Compare___var_use_analysis__found_first_use_0_0, 18,7,5,9)
MR_decl_label4(__Compare___var_use_analysis__intermodule_var_use_0_0, 18,7,5,9)
MR_decl_label10(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0, 3,2,7,5,10,12,16,20,24,29)
MR_decl_label2(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0, 33,111)
MR_decl_label10(__Compare___var_use_analysis__var_first_use_static_info_0_0, 3,2,5,10,14,18,22,26,30,34)
MR_decl_label3(__Compare___var_use_analysis__var_first_use_static_info_0_0, 38,42,127)
MR_decl_label5(__Compare___var_use_analysis__var_use_info_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___var_use_analysis__var_use_options_0_0, 3,2,5,9,29)
MR_def_extern_entry(fn__var_use_analysis__average_var_use_1_0)
MR_def_extern_entry(var_use_analysis__var_mode_to_var_use_type_2_0)
MR_def_extern_entry(var_use_analysis__pessimistic_var_use_time_3_0)
MR_def_extern_entry(var_use_analysis__pessimistic_var_use_info_3_0)
MR_decl_static(var_use_analysis__prepare_for_proc_var_first_use_7_0)
MR_decl_static(var_use_analysis__call_var_first_use_7_0)
MR_decl_static(var_use_analysis__atomic_trivial_var_first_use_5_0)
MR_decl_static(var_use_analysis__ffu_to_float_3_0)
MR_decl_static(var_use_analysis__goal_var_first_use_6_0)
MR_decl_static(var_use_analysis__conj_var_first_use_7_0)
MR_decl_static(var_use_analysis__disj_var_first_use_7_0)
MR_decl_static(var_use_analysis__disj_var_first_use_2_7_0)
MR_decl_static(var_use_analysis__switch_var_first_use_7_0)
MR_decl_static(var_use_analysis__switch_var_first_use_2_8_0)
MR_decl_static(var_use_analysis__ite_var_first_use_8_0)
MR_decl_static(var_use_analysis__goal_var_first_use_wrapper_13_0)
MR_def_extern_entry(var_use_analysis__proc_dynamic_var_use_info_9_0)
MR_decl_static(var_use_analysis__build_recursive_call_sites_list_2_0)
MR_decl_static(var_use_analysis__filter_recursive_call_sites_3_0)
MR_decl_static(var_use_analysis__rec_goal_var_first_use_6_0)
MR_decl_static(var_use_analysis__rec_conj_var_first_use_7_0)
MR_decl_static(var_use_analysis__rec_disj_var_first_use_6_0)
MR_decl_static(var_use_analysis__rec_disj_var_first_use_2_7_0)
MR_decl_static(var_use_analysis__rec_switch_var_first_use_7_0)
MR_decl_static(var_use_analysis__rec_switch_var_first_use_2_9_0)
MR_decl_static(var_use_analysis__rec_ite_var_first_use_8_0)
MR_decl_static(var_use_analysis__goal_rec_prob_6_0)
MR_decl_static(var_use_analysis__conj_rec_prob_7_0)
MR_decl_static(var_use_analysis__disj_rec_prob_7_0)
MR_decl_static(var_use_analysis__switch_rec_prob_7_0)
MR_decl_static(var_use_analysis__switch_rec_prob_2_9_0)
MR_decl_static(var_use_analysis__ite_rec_prob_8_0)
MR_decl_static(var_use_analysis__intermodule_var_use_should_follow_csd_2_0)
MR_def_extern_entry(var_use_analysis__clique_var_use_info_4_0)
MR_def_extern_entry(var_use_analysis__call_site_dynamic_var_use_info_9_0)
MR_def_extern_entry(var_use_analysis__call_site_dynamic_var_use_info_9_1)
MR_def_extern_entry(var_use_analysis__call_site_dynamic_var_use_info_6_0)
MR_def_extern_entry(var_use_analysis__call_site_dynamic_var_use_info_6_1)
MR_def_extern_entry(var_use_analysis__var_first_use_13_0)
MR_decl_static(var_use_analysis__sum_use_info_costs_5_0)
MR_decl_static(var_use_analysis__call_args_first_use_5_0)
MR_decl_static(var_use_analysis__adjust_weight_for_recursion_4_0)
MR_decl_static(__Unify___var_use_analysis__first_use_rec_info_0_0)
MR_decl_static(__Compare___var_use_analysis__first_use_rec_info_0_0)
MR_decl_static(__Unify___var_use_analysis__found_first_use_0_0)
MR_decl_static(__Compare___var_use_analysis__found_first_use_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__intermodule_var_use_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__intermodule_var_use_0_0)
MR_decl_static(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0)
MR_decl_static(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0)
MR_decl_static(__Unify___var_use_analysis__recursive_calls_list_0_0)
MR_decl_static(__Compare___var_use_analysis__recursive_calls_list_0_0)
MR_decl_static(__Unify___var_use_analysis__recursive_case_0_0)
MR_decl_static(__Compare___var_use_analysis__recursive_case_0_0)
MR_decl_static(__Unify___var_use_analysis__var_first_use_static_info_0_0)
MR_decl_static(__Compare___var_use_analysis__var_first_use_static_info_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__var_use_info_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__var_use_info_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__var_use_options_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__var_use_options_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__var_use_type_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__var_use_type_0_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1097__1_2_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1457__1_2_0)
MR_decl_static(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(coverage, coverage_point),
MR_COMMON(3,4),
MR_COMMON(3,4),
MR_COMMON(3,4),
MR_COMMON(3,4)
}
},
};

MR_decl_entry(coverage__add_coverage_point_to_map_5_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__measurement_units__probability_to_float_1_0);
static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(var_use_analysis__sum_use_info_costs_5_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(coverage__add_coverage_point_to_map_5_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(fn__float__float_1_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(fn__measurement_units__probability_to_float_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_found_first_use_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__build_recursive_call_sites_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_rec_prob_7_0_1;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
},
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_CTOR0_ADDR(var_use_analysis, found_first_use)
},
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__build_recursive_call_sites_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,7),
MR_COMMON(3,8)
},
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_CTOR0_ADDR(var_use_analysis, found_first_use)
},
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_rec_prob_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_COMMON(4,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_TAG_COMMON(0,4,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(coverage, coverage_point)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,4,5),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,6),
MR_FLOAT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
static const struct mercury_type_4 mercury_common_4[7] =
{
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000,
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_recursive_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_2;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(3,0),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(var_use_analysis, recursive_case),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(var_use_analysis, recursive_case),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__call_var_first_use_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__call_var_first_use_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, atomic_goal_rep),
MR_CTOR0_ADDR(var_use_analysis, var_first_use_static_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,2),
MR_FLOAT_CTOR_ADDR,
MR_COMMON(4,3),
MR_FLOAT_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1097__1_2_0),
1,
MR_tbmkword(0, 0)
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1457__1_2_0),
1,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__filter_recursive_call_sites_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_4;
static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__filter_recursive_call_sites_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_string_const("Cannot compute var use on a recursive call site for an unknown recursion depth", 78)
},
{
MR_string_const("Cannot compute var use on a recursive call site for an unknown recursion type", 77)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0 = {
	&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_recursive_case_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_first_use_rec_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_recursive_case_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_first_use_rec_info_0_0[] = {
	"furi_rec_prob_array",
	"furi_rec_case"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_0 = {
	"first_use_rec_info",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_first_use_rec_info_0_0,
	mercury_data_var_use_analysis__field_names_first_use_rec_info_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_1 = {
	"no_recursion_info",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_first_use_rec_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_var_use_analysis__du_stag_ordered_first_use_rec_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_first_use_rec_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_first_use_rec_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_0,
	&mercury_data_var_use_analysis__du_functor_desc_first_use_rec_info_0_1
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_first_use_rec_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__first_use_rec_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__first_use_rec_info_0_0)),
	"var_use_analysis",
	"first_use_rec_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_first_use_rec_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_first_use_rec_info_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_first_use_rec_info_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0 = {
	"have_not_found_first_use",
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

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_found_first_use_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_found_first_use_0_1[] = {
	"cost_before_use"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1 = {
	"found_first_use",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_found_first_use_0_1,
	mercury_data_var_use_analysis__field_names_found_first_use_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_found_first_use_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_found_first_use_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1,
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_found_first_use_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_found_first_use_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__found_first_use_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__found_first_use_0_0)),
	"var_use_analysis",
	"found_first_use",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_found_first_use_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_found_first_use_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_found_first_use_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_intermodule_var_use_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_0 = {
	"follow_calls_into_module",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_intermodule_var_use_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_1 = {
	"follow_any_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_1

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_intermodule_var_use_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_var_use_analysis__du_stag_ordered_intermodule_var_use_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_intermodule_var_use_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_intermodule_var_use_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_1,
	&mercury_data_var_use_analysis__du_functor_desc_intermodule_var_use_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_intermodule_var_use_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__intermodule_var_use_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__intermodule_var_use_0_0)),
	"var_use_analysis",
	"intermodule_var_use",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_intermodule_var_use_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_intermodule_var_use_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_intermodule_var_use_0
};

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
	&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
	&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
{	(MR_TypeInfo) &mercury_data_coverage__type_ctor_info_coverage_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
	&mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1,
{	(MR_TypeInfo) &mercury_data_analysis_utils__type_ctor_info_callee_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
	(MR_TypeInfo) &mercury_data_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
	(MR_TypeInfo) &mercury_data_measurements__type_ctor_info_cs_cost_csq_0
}};

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1 = {
	"proc_var_first_use_prepared_info",
	7,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0,
	&mercury_data_var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0)),
	"var_use_analysis",
	"proc_var_first_use_prepared_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0builtin__type_ctor_info_float_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0builtin__type_ctor_info_float_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0builtin__type_ctor_info_float_0
}};

const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_recursive_calls_list_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__recursive_calls_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__recursive_calls_list_0_0)),
	"var_use_analysis",
	"recursive_calls_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_path_step_0builtin__type_ctor_info_float_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_0 = {
	"recursive_case",
	0
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_1 = {
	"base_case",
	1
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_value_ordered_recursive_case_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_0,
	&mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_1
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_name_ordered_recursive_case_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_1,
	&mercury_data_var_use_analysis__enum_functor_desc_recursive_case_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_recursive_case_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_recursive_case_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__recursive_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__recursive_case_0_0)),
	"var_use_analysis",
	"recursive_case",
	{ (void *)mercury_data_var_use_analysis__enum_name_ordered_recursive_case_0 },
	{ (void *)mercury_data_var_use_analysis__enum_value_ordered_recursive_case_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_recursive_case_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_recursion_depth_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_recursion_depth_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_var_first_use_static_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_options_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_recursion_type_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_recursion_depth_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_var_first_use_static_info_0_0[] = {
	"fui_clique",
	"fui_call_site_map",
	"fui_rec_call_site_map",
	"fui_containing_goal_map",
	"fui_coverage_array",
	"fui_var",
	"fui_var_use_opts",
	"fui_call_stack",
	"fui_recursion_type",
	"fui_cur_depth",
	"fui_rec_info"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 = {
	"var_first_use_static_info",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_var_first_use_static_info_0_0,
	mercury_data_var_use_analysis__field_names_var_first_use_static_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_var_first_use_static_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_first_use_static_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_first_use_static_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_first_use_static_info_0_0)),
	"var_use_analysis",
	"var_first_use_static_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_var_first_use_static_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_var_first_use_static_info_0 },
	1,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_first_use_static_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_var_use_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_type_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_var_use_info_0_0[] = {
	"vui_cost_until_use",
	"vui_proc_cost",
	"vui_use_type"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0 = {
	"var_use_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_var_use_info_0_0,
	mercury_data_var_use_analysis__field_names_var_use_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_var_use_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_var_use_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_var_use_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_var_use_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_use_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_use_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_use_info_0_0)),
	"var_use_analysis",
	"var_use_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_var_use_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_var_use_info_0 },
	1,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_use_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_var_use_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_deep_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_type_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_var_use_options_0_0[] = {
	"vuo_deep",
	"vuo_intermodule_var_use",
	"vuo_var_use_type"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_var_use_options_0_0 = {
	"var_use_options",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_var_use_options_0_0,
	mercury_data_var_use_analysis__field_names_var_use_options_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_var_use_options_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_options_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_var_use_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_var_use_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_var_use_options_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_options_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_use_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_options_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_use_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_use_options_0_0)),
	"var_use_analysis",
	"var_use_options",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_var_use_options_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_var_use_options_0 },
	1,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_use_options_0
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0 = {
	"var_use_production",
	0
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1 = {
	"var_use_consumption",
	1
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2 = {
	"var_use_other",
	2
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_value_ordered_var_use_type_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_name_ordered_var_use_type_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_use_type_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_use_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_use_type_0_0)),
	"var_use_analysis",
	"var_use_type",
	{ (void *)mercury_data_var_use_analysis__enum_name_ordered_var_use_type_0 },
	{ (void *)mercury_data_var_use_analysis__enum_value_ordered_var_use_type_0 },
	3,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_use_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_rec_prob_7_0_1 = {
{
MR_FUNCTION,
"measurement_units",
"measurement_units",
"probability_to_float",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
1707,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_4 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1572,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_3 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1572,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"adjust_weight_for_recursion",
4,
0
},
"var_use_analysis",
"var_use_analysis.m",
1542,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_ite_var_first_use_8_0_1 = {
{
MR_FUNCTION,
"float",
"float",
"float",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
1541,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_4 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1476,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_3 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1476,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_1457",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
1457,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__rec_switch_var_first_use_7_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"adjust_weight_for_recursion",
4,
0
},
"var_use_analysis",
"var_use_analysis.m",
1449,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__filter_recursive_call_sites_3_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_1233",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1233,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__build_recursive_call_sites_list_2_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_1222",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
1222,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1111,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
1111,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_1097",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
1097,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__call_var_first_use_7_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_804",
7,
0
},
"var_use_analysis",
"var_use_analysis.m",
801,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_2 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"add_coverage_point_to_map",
5,
0
},
"var_use_analysis",
"var_use_analysis.m",
560,
"82"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__prepare_for_proc_var_first_use_7_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"build_dynamic_call_site_cost_and_callee_map",
4,
0
},
"var_use_analysis",
"var_use_analysis.m",
537,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_169",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
169,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__var_use_analysis__average_var_use_1_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"sum_use_info_costs",
5,
0
},
"var_use_analysis",
"var_use_analysis.m",
165,
"14"
};


MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(list__all_true_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(var_use_analysis_module0)
	MR_init_entry1(fn__var_use_analysis__average_var_use_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__var_use_analysis__average_var_use_1_0);
	MR_init_label8(fn__var_use_analysis__average_var_use_1_0,5,6,7,8,9,12,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'average_var_use'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__var_use_analysis__average_var_use_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__var_use_analysis__average_var_use_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r7 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__var_use_analysis__average_var_use_1_0_i5);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__var_use_analysis__average_var_use_1_0_i6);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__var_use_analysis__average_var_use_1_0_i7);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__var_use_analysis__average_var_use_1_0_i8);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__var_use_analysis__average_var_use_1_0_i9);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		fn__var_use_analysis__average_var_use_1_0_i12);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__var_use_analysis__average_var_use_1_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("function \140var_use_analysis.average_var_use\'/1", 45);
	MR_r3 = (MR_Word) MR_string_const("use types do not match", 22);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__var_use_analysis__average_var_use_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("function \140var_use_analysis.average_var_use\'/1", 45);
	MR_r3 = (MR_Word) MR_string_const("cannot average zero items", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module1)
	MR_init_entry1(var_use_analysis__var_mode_to_var_use_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__var_mode_to_var_use_type_2_0);
	MR_init_label2(var_use_analysis__var_mode_to_var_use_type_2_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_mode_to_var_use_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__var_mode_to_var_use_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_type_2_0_i2);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_type_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(var_use_analysis__var_mode_to_var_use_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_type_2_0_i5);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_type_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(var_use_analysis__var_mode_to_var_use_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module2)
	MR_init_entry1(var_use_analysis__pessimistic_var_use_time_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__pessimistic_var_use_time_3_0);
	MR_init_label1(var_use_analysis__pessimistic_var_use_time_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pessimistic_var_use_time'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__pessimistic_var_use_time_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__pessimistic_var_use_time_3_0_i3);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(var_use_analysis__pessimistic_var_use_time_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module3)
	MR_init_entry1(var_use_analysis__pessimistic_var_use_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__pessimistic_var_use_info_3_0);
	MR_init_label1(var_use_analysis__pessimistic_var_use_info_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pessimistic_var_use_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__pessimistic_var_use_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__pessimistic_var_use_info_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(var_use_analysis__pessimistic_var_use_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(analysis_utils__deep_get_maybe_procrep_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_head_var_rep_0;
MR_decl_entry(list__index0_3_0);
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(analysis_utils__proc_dynamic_paired_call_site_slots_3_0);
MR_decl_entry(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(analysis_utils__build_recursive_call_site_cost_map_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(program_representation_utils__label_goals_4_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(coverage__coverage_point_arrays_to_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(coverage__goal_annotate_with_coverage_9_0);

MR_BEGIN_MODULE(var_use_analysis_module4)
	MR_init_entry1(var_use_analysis__prepare_for_proc_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__prepare_for_proc_var_first_use_7_0);
	MR_init_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0,2,3,5,8,10,11,12,13,14,15)
	MR_init_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0,16,17,18,19,20,21,22,24,25,28)
	MR_init_label10(var_use_analysis__prepare_for_proc_var_first_use_7_0,31,33,34,35,37,36,39,40,41,44)
	MR_init_label8(var_use_analysis__prepare_for_proc_var_first_use_7_0,45,46,7,48,49,50,51,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_proc_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__prepare_for_proc_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(analysis_utils__deep_get_maybe_procrep_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i3);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__prepare_for_proc_var_first_use_7_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(15);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, head_var_rep);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__index0_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i8);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__prepare_for_proc_var_first_use_7_0_i7);
	}
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_type_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i10);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	if ((MR_r3 != MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__prepare_for_proc_var_first_use_7_0_i11);
	}
	MR_r2 = MR_sv(10);
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(var_use_analysis__prepare_for_proc_var_first_use_7_0_i24);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_sv(10);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__string__string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i12);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i13);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i14);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" in proc dynamic ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i15);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i16);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i17);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", Arg ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i18);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i19);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" calculated from procrep: ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i20);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i21);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Var uses do not match, passed: ", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i22);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", 61);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i24);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i25);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_sv(5) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i28);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i31);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(analysis_utils__build_recursive_call_site_cost_map_6_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i33);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(program_representation_utils__label_goals_4_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i34);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i35);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(8), 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__prepare_for_proc_var_first_use_7_0_i37);
	}
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 9);
	}
	MR_np_call_localret_ent(coverage__coverage_point_arrays_to_list_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i39);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", 61);
	MR_r3 = (MR_Word) MR_string_const("Couldn\'t get coverage info", 26);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i36);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__coverage_point_arrays_to_list_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i39);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_point);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__map__init_0_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i40);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__map__init_0_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i41);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(13);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(14);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i44);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i45);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(6);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_with_coverage_9_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i46);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 7);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_tfield(1, MR_r2, 2) = MR_sv(7);
	MR_tfield(1, MR_r2, 3) = MR_r1;
	MR_tfield(1, MR_r2, 4) = MR_sv(4);
	MR_tfield(1, MR_r2, 5) = MR_sv(5);
	MR_tfield(1, MR_r2, 6) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(15);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i48);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" out of range for PD ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i49);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i50);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i51);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_dynamic_var_use_info: ArgNum ", 34);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		var_use_analysis__prepare_for_proc_var_first_use_7_0_i52);
MR_def_label(var_use_analysis__prepare_for_proc_var_first_use_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(analysis_utils__cost_and_callees_is_recursive_2_0);
MR_decl_entry(fn__measurements__cs_cost_get_calls_1_0);
MR_decl_entry(fn__measurements__cs_cost_get_percall_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(var_use_analysis_module5)
	MR_init_entry1(var_use_analysis__call_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_var_first_use_7_0);
	MR_init_label10(var_use_analysis__call_var_first_use_7_0,3,6,4,9,11,10,13,14,16,18)
	MR_init_label10(var_use_analysis__call_var_first_use_7_0,15,21,24,30,29,26,25,43,37,46)
	MR_init_label8(var_use_analysis__call_var_first_use_7_0,52,50,47,55,61,57,20,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__call_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tempr1, 6), 2);
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		var_use_analysis__call_var_first_use_7_0_i3);
MR_def_label(var_use_analysis__call_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(analysis_utils__cost_and_callees_is_recursive_2_0,
		var_use_analysis__call_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__call_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		var_use_analysis__call_var_first_use_7_0_i9);
MR_def_label(var_use_analysis__call_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_tfield(0, MR_r1, 0);
MR_def_label(var_use_analysis__call_var_first_use_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_calls_1_0,
		var_use_analysis__call_var_first_use_7_0_i11);
MR_def_label(var_use_analysis__call_var_first_use_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i10);
	}
	MR_r2 = MR_sv(4);
	MR_sv(7) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_sv(10) = MR_float_to_word((MR_word_to_float(MR_sv(9)) + MR_word_to_float(MR_sv(7))));
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i14);
MR_def_label(var_use_analysis__call_var_first_use_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		var_use_analysis__call_var_first_use_7_0_i13);
MR_def_label(var_use_analysis__call_var_first_use_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_float_to_word((MR_word_to_float(MR_sv(9)) + MR_word_to_float(MR_r1)));
MR_def_label(var_use_analysis__call_var_first_use_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i15);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i15);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(3, MR_sv(1), 3);
	MR_r3 = MR_sv(8);
MR_def_label(var_use_analysis__call_var_first_use_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i21);
MR_def_label(var_use_analysis__call_var_first_use_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_sv(6);
	MR_tfield(0, MR_r2, 7) = MR_sv(7);
	MR_tfield(0, MR_r2, 8) = MR_sv(8);
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		var_use_analysis__call_var_first_use_7_0_i24);
MR_def_label(var_use_analysis__call_var_first_use_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i26);
	}
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_float_to_word((MR_word_to_float(MR_tfield(1, MR_r1, 0)) + MR_word_to_float(MR_sv(9))));
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i29);
	}
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i25);
MR_def_label(var_use_analysis__call_var_first_use_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_var_first_use\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("multiple solutions for variable production time", 47);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__call_var_first_use_7_0_i25);
MR_def_label(var_use_analysis__call_var_first_use_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_var_first_use\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("no solutions for variable first use time", 40);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__call_var_first_use_7_0_i25);
MR_def_label(var_use_analysis__call_var_first_use_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i46);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i43);
MR_def_label(var_use_analysis__call_var_first_use_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i37);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i46);
MR_def_label(var_use_analysis__call_var_first_use_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_var_first_use\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("a bound var must be produced by a call if it is an argument.", 60);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__call_var_first_use_7_0_i46);
MR_def_label(var_use_analysis__call_var_first_use_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i50);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i52);
MR_def_label(var_use_analysis__call_var_first_use_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i47);
	}
	MR_r2 = MR_sv(4);
MR_def_label(var_use_analysis__call_var_first_use_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i55);
MR_def_label(var_use_analysis__call_var_first_use_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_var_first_use\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("a consumed var must not be mentioned in BoundVars", 49);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__call_var_first_use_7_0_i55);
MR_def_label(var_use_analysis__call_var_first_use_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i65);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i61);
	}
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_sv(4) != MR_r3)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i65);
	}
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i57);
MR_def_label(var_use_analysis__call_var_first_use_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_sv(4) != MR_tempr1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i65);
	}
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_sv(10) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_var_first_use\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("a HO call site cannot produce its own HO value", 46);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(var_use_analysis__call_var_first_use_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__atomic_goal_get_vars_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(var_use_analysis_module6)
	MR_init_entry1(var_use_analysis__atomic_trivial_var_first_use_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__atomic_trivial_var_first_use_5_0);
	MR_init_label5(var_use_analysis__atomic_trivial_var_first_use_5_0,2,4,9,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_trivial_var_first_use'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__atomic_trivial_var_first_use_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tfield(0, MR_tempr1, 6), 2);
	}
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_get_vars_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i2);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i4);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i3);
	}
	if (MR_INT_EQ(MR_sv(4),1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i6);
	}
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i9);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i3);
	}
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module7)
	MR_init_entry1(var_use_analysis__ffu_to_float_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__ffu_to_float_3_0);
	MR_init_label1(var_use_analysis__ffu_to_float_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ffu_to_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__ffu_to_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__ffu_to_float_3_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
MR_def_label(var_use_analysis__ffu_to_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0);
MR_decl_entry(coverage__get_coverage_before_2_0);
MR_decl_entry(coverage__get_coverage_after_2_0);

MR_BEGIN_MODULE(var_use_analysis_module8)
	MR_init_entry1(var_use_analysis__goal_var_first_use_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__goal_var_first_use_6_0);
	MR_init_label10(var_use_analysis__goal_var_first_use_6_0,123,2,7,6,13,11,15,5,4,18)
	MR_init_label8(var_use_analysis__goal_var_first_use_6_0,20,22,27,26,28,24,29,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_var_first_use'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__goal_var_first_use_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(var_use_analysis__goal_var_first_use_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__goal_var_first_use_6_0_i2);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__goal_var_first_use_6_0_i7);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i6);
	}
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i5);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_sv(2), 6), 2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i4);
	}
	if (MR_INT_NE(MR_sv(4),6)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i5);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),7)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i5);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(coverage__get_coverage_after_2_0,
		var_use_analysis__goal_var_first_use_6_0_i15);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i4);
	}
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i4);
	}
	MR_r1 = MR_sv(6);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__conj_var_first_use_7_0);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__disj_var_first_use_7_0);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i22);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__switch_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(3, MR_tempr1, 4);
	if (!(((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))))) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i26);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__call_var_first_use_7_0,
		var_use_analysis__goal_var_first_use_6_0_i27);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_sv(3), 3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(var_use_analysis__atomic_trivial_var_first_use_5_0,
		var_use_analysis__goal_var_first_use_6_0_i28);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i29);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__ite_var_first_use_8_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i31);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(3), 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i123);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i123);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module9)
	MR_init_entry1(var_use_analysis__conj_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__conj_var_first_use_7_0);
	MR_init_label4(var_use_analysis__conj_var_first_use_7_0,23,3,6,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__conj_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(var_use_analysis__conj_var_first_use_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__conj_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i23);
	}
MR_def_label(var_use_analysis__conj_var_first_use_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__detism_get_solutions_1_0);

MR_BEGIN_MODULE(var_use_analysis_module10)
	MR_init_entry1(var_use_analysis__disj_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__disj_var_first_use_7_0);
	MR_init_label4(var_use_analysis__disj_var_first_use_7_0,2,4,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__disj_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__disj_var_first_use_2_7_0,
		var_use_analysis__disj_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__disj_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__detism_get_solutions_1_0,
		var_use_analysis__disj_var_first_use_7_0_i4);
MR_def_label(var_use_analysis__disj_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_7_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_7_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(var_use_analysis__disj_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(var_use_analysis__disj_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(measurements__weighted_average_3_0);

MR_BEGIN_MODULE(var_use_analysis_module11)
	MR_init_entry1(var_use_analysis__disj_var_first_use_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__disj_var_first_use_2_7_0);
	MR_init_label10(var_use_analysis__disj_var_first_use_2_7_0,99,6,7,9,13,15,16,19,21,18)
	MR_init_label9(var_use_analysis__disj_var_first_use_2_7_0,23,25,30,33,35,32,24,42,98)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_var_first_use_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__disj_var_first_use_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i99);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(7) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_tempr3, 6), 2);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 4);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__disj_var_first_use_2_7_0_i6);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(var_use_analysis__disj_var_first_use_2_7_0,
		var_use_analysis__disj_var_first_use_2_7_0_i7);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i98);
	}
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i13);
	}
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i15);
	}
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i16);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i19);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i18);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i21);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i23);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.disj_var_first_use_2\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("unknown coverage before disjunct", 32);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i23);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,4,4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i42);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i30);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i33);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i32);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i35);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i42);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.disj_var_first_use_2\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("unknown coverage before disjunct", 32);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i24);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i42);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(var_use_analysis_module12)
	MR_init_entry1(var_use_analysis__switch_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__switch_var_first_use_7_0);
	MR_init_label8(var_use_analysis__switch_var_first_use_7_0,2,3,4,8,6,11,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__switch_var_first_use_2_8_0,
		var_use_analysis__switch_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__switch_var_first_use_7_0_i3);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 5);
	if ((MR_tempr1 != MR_sv(3))) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(var_use_analysis__switch_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__all_true_2_0,
		var_use_analysis__switch_var_first_use_7_0_i8);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__switch_var_first_use_7_0_i14);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__switch_var_first_use_7_0_i14);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__switch_var_first_use_7_0_i15);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_det_2_0);

MR_BEGIN_MODULE(var_use_analysis_module13)
	MR_init_entry1(var_use_analysis__switch_var_first_use_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__switch_var_first_use_2_8_0);
	MR_init_label6(var_use_analysis__switch_var_first_use_2_8_0,24,4,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_var_first_use_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_var_first_use_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_2_8_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r4, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(var_use_analysis__switch_var_first_use_2_8_0,
		var_use_analysis__switch_var_first_use_2_8_0_i4);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_sv(5), 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__switch_var_first_use_2_8_0_i7);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_sv(1), 4);
	MR_r3 = MR_tfield(0, MR_sv(5), 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__switch_var_first_use_2_8_0_i10);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__switch_var_first_use_2_8_0_i11);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__switch_var_first_use_2_8_0_i12);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module14)
	MR_init_entry1(var_use_analysis__ite_var_first_use_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__ite_var_first_use_8_0);
	MR_init_label10(var_use_analysis__ite_var_first_use_8_0,2,3,4,5,6,7,13,14,15,18)
	MR_init_label7(var_use_analysis__ite_var_first_use_8_0,21,25,24,26,27,30,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_var_first_use'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__ite_var_first_use_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_r3, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__ite_var_first_use_8_0_i2);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__ite_var_first_use_8_0_i3);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__ite_var_first_use_8_0_i4);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__ite_var_first_use_8_0_i5);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_var_first_use_8_0_i6);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_var_first_use_8_0_i7);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr6 = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_tempr5 = MR_sv(5);
	MR_tempr7 = MR_sv(2);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tempr7, 6), 2);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr7;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i13);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i14);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i15);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__ite_var_first_use_8_0_i18);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i20);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i21);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i25);
	}
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i24);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
MR_def_label(var_use_analysis__ite_var_first_use_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(var_use_analysis__ffu_to_float_3_0,
		var_use_analysis__ite_var_first_use_8_0_i26);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(var_use_analysis__ffu_to_float_3_0,
		var_use_analysis__ite_var_first_use_8_0_i27);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__ite_var_first_use_8_0_i30);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module15)
	MR_init_entry1(var_use_analysis__goal_var_first_use_wrapper_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__goal_var_first_use_wrapper_13_0);
	MR_init_label4(var_use_analysis__goal_var_first_use_wrapper_13_0,3,7,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_var_first_use_wrapper'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__goal_var_first_use_wrapper_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tfield(0, MR_tempr1, 5) = MR_r11;
	MR_tempr2 = MR_r12;
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_r7;
	MR_tfield(0, MR_tempr1, 9) = MR_r8;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r10;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r9;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__goal_var_first_use_wrapper_13_0_i3);
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_13_0_i5);
	}
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_13_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_13_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.found_first_use_to_use_info\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("goal did not produce a variable that it should have", 51);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_sv(2), 2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module16)
	MR_init_entry1(var_use_analysis__proc_dynamic_var_use_info_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__proc_dynamic_var_use_info_9_0);
	MR_init_label3(var_use_analysis__proc_dynamic_var_use_info_9_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_dynamic_var_use_info'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__proc_dynamic_var_use_info_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__prepare_for_proc_var_first_use_7_0,
		var_use_analysis__proc_dynamic_var_use_info_9_0_i2);
MR_def_label(var_use_analysis__proc_dynamic_var_use_info_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__proc_dynamic_var_use_info_9_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__proc_dynamic_var_use_info_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = MR_tfield(1, MR_tempr1, 4);
	MR_r6 = MR_tfield(1, MR_tempr1, 5);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tfield(1, MR_tempr1, 0);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tfield(1, MR_tempr1, 6);
	MR_r12 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_wrapper_13_0,
		var_use_analysis__proc_dynamic_var_use_info_9_0_i6);
MR_def_label(var_use_analysis__proc_dynamic_var_use_info_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(var_use_analysis_module17)
	MR_init_entry1(var_use_analysis__build_recursive_call_sites_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__build_recursive_call_sites_list_2_0);
	MR_init_label1(var_use_analysis__build_recursive_call_sites_list_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_sites_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__build_recursive_call_sites_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		var_use_analysis__build_recursive_call_sites_list_2_0_i2);
MR_def_label(var_use_analysis__build_recursive_call_sites_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(var_use_analysis_module18)
	MR_init_entry1(var_use_analysis__filter_recursive_call_sites_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__filter_recursive_call_sites_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_recursive_call_sites'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__filter_recursive_call_sites_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_and_after_det_3_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0);

MR_BEGIN_MODULE(var_use_analysis_module19)
	MR_init_entry1(var_use_analysis__rec_goal_var_first_use_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_goal_var_first_use_6_0);
	MR_init_label10(var_use_analysis__rec_goal_var_first_use_6_0,111,2,3,7,12,10,9,6,5,17)
	MR_init_label9(var_use_analysis__rec_goal_var_first_use_6_0,19,21,26,25,28,23,29,31,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_goal_var_first_use'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_goal_var_first_use_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i2);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i3);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i7);
	}
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i6);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i9);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),7)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i9);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i5);
	}
	MR_r2 = MR_sv(6);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i6);
	}
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i5);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i17);
	}
	MR_r1 = MR_tfield(0, MR_sv(5), 0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__rec_conj_var_first_use_7_0);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__rec_disj_var_first_use_6_0);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__rec_switch_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,3)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tfield(3, MR_tempr1, 4);
	if (!(((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))))) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i25);
	}
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i26);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__call_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_sv(5), 3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(var_use_analysis__atomic_trivial_var_first_use_5_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i28);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(var_use_analysis__rec_ite_var_first_use_8_0);
	}
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,1)) {
		MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(3, MR_sv(5), 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i35);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_goal_var_first_use_6_0_i35);
MR_def_label(var_use_analysis__rec_goal_var_first_use_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(var_use_analysis__rec_goal_var_first_use_6_0_i111);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module20)
	MR_init_entry1(var_use_analysis__rec_conj_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_conj_var_first_use_7_0);
	MR_init_label5(var_use_analysis__rec_conj_var_first_use_7_0,26,5,6,7,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_conj_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_conj_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_conj_var_first_use_7_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(var_use_analysis__rec_conj_var_first_use_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_conj_var_first_use_7_0_i5);
MR_def_label(var_use_analysis__rec_conj_var_first_use_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_conj_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__rec_conj_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(var_use_analysis__rec_conj_var_first_use_7_0,
		var_use_analysis__rec_conj_var_first_use_7_0_i7);
MR_def_label(var_use_analysis__rec_conj_var_first_use_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_conj_var_first_use_7_0_i25);
	}
	MR_r1 = MR_sv(6);
MR_def_label(var_use_analysis__rec_conj_var_first_use_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module21)
	MR_init_entry1(var_use_analysis__rec_disj_var_first_use_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_disj_var_first_use_6_0);
	MR_init_label3(var_use_analysis__rec_disj_var_first_use_6_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_disj_var_first_use'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_disj_var_first_use_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_disj_var_first_use_2_7_0,
		var_use_analysis__rec_disj_var_first_use_6_0_i2);
MR_def_label(var_use_analysis__rec_disj_var_first_use_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_disj_var_first_use_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__rec_disj_var_first_use_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(var_use_analysis__rec_disj_var_first_use_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
MR_def_label(var_use_analysis__rec_disj_var_first_use_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__probable_1_0);

MR_BEGIN_MODULE(var_use_analysis_module22)
	MR_init_entry1(var_use_analysis__rec_disj_var_first_use_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_disj_var_first_use_2_7_0);
	MR_init_label10(var_use_analysis__rec_disj_var_first_use_2_7_0,44,5,6,7,8,9,11,12,13,14)
	MR_init_label3(var_use_analysis__rec_disj_var_first_use_2_7_0,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_disj_var_first_use_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_disj_var_first_use_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_disj_var_first_use_2_7_0_i44);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i5);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i6);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_sv(4), 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i7);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i8);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_disj_var_first_use_2_7_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(5)) + (MR_Float) 0.0000000000000000));
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_localcall_lab(var_use_analysis__rec_disj_var_first_use_2_7_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i11);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = ((MR_Integer) MR_sv(6) - (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i12);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i13);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i14);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i15);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		var_use_analysis__rec_disj_var_first_use_2_7_0_i16);
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_disj_var_first_use_2_7_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(5)) + (MR_word_to_float(MR_sv(4)) * MR_word_to_float(MR_tempr1))));
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__rec_disj_var_first_use_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_sv(5)) + (MR_word_to_float(MR_sv(4)) * MR_word_to_float(MR_tempr1))));
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_probability_0;
MR_decl_entry(list__map_corresponding_4_0);

MR_BEGIN_MODULE(var_use_analysis_module23)
	MR_init_entry1(var_use_analysis__rec_switch_var_first_use_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_switch_var_first_use_7_0);
	MR_init_label9(var_use_analysis__rec_switch_var_first_use_7_0,2,4,5,6,10,8,13,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_switch_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_switch_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(var_use_analysis__rec_switch_var_first_use_2_9_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__adjust_weight_for_recursion_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_tfield(0, MR_sv(1), 10), 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i4);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i5);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 5);
	if ((MR_tempr1 != MR_sv(3))) {
		MR_GOTO_LAB(var_use_analysis__rec_switch_var_first_use_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__all_true_2_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i10);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__rec_switch_var_first_use_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__rec_switch_var_first_use_7_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i16);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i16);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__rec_switch_var_first_use_7_0_i17);
MR_def_label(var_use_analysis__rec_switch_var_first_use_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module24)
	MR_init_entry1(var_use_analysis__rec_switch_var_first_use_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_switch_var_first_use_2_9_0);
	MR_init_label8(var_use_analysis__rec_switch_var_first_use_2_9_0,26,4,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_switch_var_first_use_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_switch_var_first_use_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_switch_var_first_use_2_9_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localcall_lab(var_use_analysis__rec_switch_var_first_use_2_9_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i4);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(0, MR_sv(7), 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i6);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i7);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_sv(8), 4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i8);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i9);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = MR_tfield(1, MR_tfield(0, MR_tempr1, 10), 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i10);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__rec_switch_var_first_use_2_9_0_i11);
MR_def_label(var_use_analysis__rec_switch_var_first_use_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(var_use_analysis_module25)
	MR_init_entry1(var_use_analysis__rec_ite_var_first_use_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__rec_ite_var_first_use_8_0);
	MR_init_label10(var_use_analysis__rec_ite_var_first_use_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(var_use_analysis__rec_ite_var_first_use_8_0,12,13,17,21,24,27,31,38,39,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rec_ite_var_first_use'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__rec_ite_var_first_use_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i2);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i3);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i4);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i5);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i6);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i7);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(8) = MR_tfield(0, MR_sv(1), 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i8);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i9);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i10);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i11);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tfield(0, MR_sv(1), 10), 0);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i12);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i13);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i17);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__adjust_weight_for_recursion_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_tfield(0, MR_sv(1), 10), 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i21);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(9) = MR_r1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i24);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_ite_var_first_use_8_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_ite_var_first_use_8_0_i27);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(var_use_analysis__rec_ite_var_first_use_8_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 6), 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__rec_ite_var_first_use_8_0_i31);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i38);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i38);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__rec_ite_var_first_use_8_0_i39);
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(13);
	}
MR_def_label(var_use_analysis__rec_ite_var_first_use_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__impossible_0_0);
MR_decl_entry(fn__measurement_units__certain_0_0);
MR_decl_entry(mdbcomp__goal_path__update_goal_attribute_4_0);

MR_BEGIN_MODULE(var_use_analysis_module26)
	MR_init_entry1(var_use_analysis__goal_rec_prob_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__goal_rec_prob_6_0);
	MR_init_label10(var_use_analysis__goal_rec_prob_6_0,2,3,6,4,8,10,12,16,18,14)
	MR_init_label6(var_use_analysis__goal_rec_prob_6_0,19,21,25,26,7,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_rec_prob'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__goal_rec_prob_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__goal_rec_prob_6_0_i2);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__goal_rec_prob_6_0_i3);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i4);
	}
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__goal_rec_prob_6_0_i6);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i8);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(var_use_analysis__conj_rec_prob_7_0,
		var_use_analysis__goal_rec_prob_6_0_i26);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(var_use_analysis__disj_rec_prob_7_0,
		var_use_analysis__goal_rec_prob_6_0_i26);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__switch_rec_prob_7_0,
		var_use_analysis__goal_rec_prob_6_0_i26);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i16);
	}
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__goal_rec_prob_6_0_i18);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__certain_0_0,
		var_use_analysis__goal_rec_prob_6_0_i18);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i7);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__ite_rec_prob_8_0,
		var_use_analysis__goal_rec_prob_6_0_i26);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(var_use_analysis__goal_rec_prob_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__goal_rec_prob_6_0_i25);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__goal_rec_prob_6_0_i25);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__goal_rec_prob_6_0_i26);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	}
MR_def_label(var_use_analysis__goal_rec_prob_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		var_use_analysis__goal_rec_prob_6_0_i27);
MR_def_label(var_use_analysis__goal_rec_prob_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__and_2_0);
MR_decl_entry(fn__measurement_units__or_2_0);

MR_BEGIN_MODULE(var_use_analysis_module27)
	MR_init_entry1(var_use_analysis__conj_rec_prob_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__conj_rec_prob_7_0);
	MR_init_label10(var_use_analysis__conj_rec_prob_7_0,3,5,6,9,7,10,11,12,13,14)
	MR_init_label4(var_use_analysis__conj_rec_prob_7_0,15,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_rec_prob'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__conj_rec_prob_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_rec_prob_7_0_i3);
	}
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__conj_rec_prob_7_0_i9);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tfield(0, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__conj_rec_prob_7_0_i5);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		var_use_analysis__conj_rec_prob_7_0_i6);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_rec_prob_7_0_i7);
	}
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__conj_rec_prob_7_0_i9);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(var_use_analysis__conj_rec_prob_7_0,
		var_use_analysis__conj_rec_prob_7_0_i10);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__conj_rec_prob_7_0_i11);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__conj_rec_prob_7_0_i12);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__conj_rec_prob_7_0_i13);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__conj_rec_prob_7_0_i14);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurement_units__and_2_0,
		var_use_analysis__conj_rec_prob_7_0_i15);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__conj_rec_prob_7_0_i17);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__conj_rec_prob_7_0_i18);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurement_units__or_2_0,
		var_use_analysis__conj_rec_prob_7_0_i19);
MR_def_label(var_use_analysis__conj_rec_prob_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module28)
	MR_init_entry1(var_use_analysis__disj_rec_prob_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__disj_rec_prob_7_0);
	MR_init_label10(var_use_analysis__disj_rec_prob_7_0,3,5,6,9,7,10,11,12,13,14)
	MR_init_label4(var_use_analysis__disj_rec_prob_7_0,15,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_rec_prob'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__disj_rec_prob_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_rec_prob_7_0_i3);
	}
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__disj_rec_prob_7_0_i9);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tfield(0, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__disj_rec_prob_7_0_i5);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		var_use_analysis__disj_rec_prob_7_0_i6);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_rec_prob_7_0_i7);
	}
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		var_use_analysis__disj_rec_prob_7_0_i9);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(var_use_analysis__disj_rec_prob_7_0,
		var_use_analysis__disj_rec_prob_7_0_i10);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = ((MR_Integer) MR_sv(7) - (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_rec_prob_7_0_i11);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_rec_prob_7_0_i12);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__disj_rec_prob_7_0_i13);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__disj_rec_prob_7_0_i14);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurement_units__and_2_0,
		var_use_analysis__disj_rec_prob_7_0_i15);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__disj_rec_prob_7_0_i17);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__disj_rec_prob_7_0_i18);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurement_units__or_2_0,
		var_use_analysis__disj_rec_prob_7_0_i19);
MR_def_label(var_use_analysis__disj_rec_prob_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module29)
	MR_init_entry1(var_use_analysis__switch_rec_prob_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__switch_rec_prob_7_0);
	MR_init_label4(var_use_analysis__switch_rec_prob_7_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_rec_prob'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_rec_prob_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_call_localret_ent(var_use_analysis__switch_rec_prob_2_9_0,
		var_use_analysis__switch_rec_prob_7_0_i2);
MR_def_label(var_use_analysis__switch_rec_prob_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		var_use_analysis__switch_rec_prob_7_0_i4);
MR_def_label(var_use_analysis__switch_rec_prob_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__weighted_average_3_0,
		var_use_analysis__switch_rec_prob_7_0_i5);
MR_def_label(var_use_analysis__switch_rec_prob_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__switch_rec_prob_7_0_i6);
MR_def_label(var_use_analysis__switch_rec_prob_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module30)
	MR_init_entry1(var_use_analysis__switch_rec_prob_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__switch_rec_prob_2_9_0);
	MR_init_label9(var_use_analysis__switch_rec_prob_2_9_0,25,4,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_rec_prob_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_rec_prob_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__switch_rec_prob_2_9_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localcall_lab(var_use_analysis__switch_rec_prob_2_9_0,
		var_use_analysis__switch_rec_prob_2_9_0_i4);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__switch_rec_prob_2_9_0_i6);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__switch_rec_prob_2_9_0_i7);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__switch_rec_prob_2_9_0_i8);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		var_use_analysis__switch_rec_prob_2_9_0_i9);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__switch_rec_prob_2_9_0_i10);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__switch_rec_prob_2_9_0_i11);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__switch_rec_prob_2_9_0_i12);
MR_def_label(var_use_analysis__switch_rec_prob_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module31)
	MR_init_entry1(var_use_analysis__ite_rec_prob_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__ite_rec_prob_8_0);
	MR_init_label10(var_use_analysis__ite_rec_prob_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(var_use_analysis__ite_rec_prob_8_0,12,13,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_rec_prob'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__ite_rec_prob_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__ite_rec_prob_8_0_i2);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__ite_rec_prob_8_0_i3);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__filter_recursive_call_sites_3_0,
		var_use_analysis__ite_rec_prob_8_0_i4);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__ite_rec_prob_8_0_i5);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__ite_rec_prob_8_0_i6);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		var_use_analysis__ite_rec_prob_8_0_i7);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_sv(2), 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		var_use_analysis__ite_rec_prob_8_0_i8);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		var_use_analysis__ite_rec_prob_8_0_i9);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_rec_prob_8_0_i10);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_rec_prob_8_0_i11);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__ite_rec_prob_8_0_i12);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__ite_rec_prob_8_0_i13);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(7) - (MR_Integer) MR_r2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_rec_prob_8_0_i14);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_rec_prob_8_0_i15);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__ite_rec_prob_8_0_i16);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		var_use_analysis__ite_rec_prob_8_0_i17);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__measurement_units__and_2_0,
		var_use_analysis__ite_rec_prob_8_0_i18);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__measurement_units__and_2_0,
		var_use_analysis__ite_rec_prob_8_0_i19);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurement_units__or_2_0,
		var_use_analysis__ite_rec_prob_8_0_i20);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurement_units__or_2_0,
		var_use_analysis__ite_rec_prob_8_0_i21);
MR_def_label(var_use_analysis__ite_rec_prob_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);

MR_BEGIN_MODULE(var_use_analysis_module32)
	MR_init_entry1(var_use_analysis__intermodule_var_use_should_follow_csd_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__intermodule_var_use_should_follow_csd_2_0);
	MR_init_label4(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,4,5,6,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intermodule_var_use_should_follow_csd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__intermodule_var_use_should_follow_csd_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__intermodule_var_use_should_follow_csd_2_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		var_use_analysis__intermodule_var_use_should_follow_csd_2_0_i4);
MR_def_label(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		var_use_analysis__intermodule_var_use_should_follow_csd_2_0_i5);
MR_def_label(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		var_use_analysis__intermodule_var_use_should_follow_csd_2_0_i6);
MR_def_label(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_mask_field(MR_r2, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_parents_3_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(analysis_utils__find_clique_first_and_other_procs_4_0);
MR_decl_entry(recursion_patterns__create_clique_recursion_costs_report_3_0);
MR_decl_entry(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_0);
MR_decl_entry(fn__set__init_0_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(fn__set__set_1_0);

MR_BEGIN_MODULE(var_use_analysis_module33)
	MR_init_entry1(var_use_analysis__clique_var_use_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__clique_var_use_info_4_0);
	MR_init_label10(var_use_analysis__clique_var_use_info_4_0,2,3,4,5,6,11,13,15,20,21)
	MR_init_label10(var_use_analysis__clique_var_use_info_4_0,22,19,28,30,31,27,36,10,38,8)
	MR_init_label1(var_use_analysis__clique_var_use_info_4_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clique_var_use_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__clique_var_use_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		var_use_analysis__clique_var_use_info_4_0_i2);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		var_use_analysis__clique_var_use_info_4_0_i3);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		var_use_analysis__clique_var_use_info_4_0_i4);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__clique_var_use_info_4_0_i5);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(analysis_utils__find_clique_first_and_other_procs_4_0,
		var_use_analysis__clique_var_use_info_4_0_i6);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,
		var_use_analysis__clique_var_use_info_4_0_i11);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(recursion_patterns__create_clique_recursion_costs_report_3_0,
		var_use_analysis__clique_var_use_info_4_0_i13);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i15);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		var_use_analysis__clique_var_use_info_4_0_i38);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i19);
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_0,
		var_use_analysis__clique_var_use_info_4_0_i20);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		var_use_analysis__clique_var_use_info_4_0_i21);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(var_use_analysis__proc_dynamic_var_use_info_9_0,
		var_use_analysis__clique_var_use_info_4_0_i22);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr2, 0)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr2, 1)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(var_use_analysis__clique_var_use_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_0,
		var_use_analysis__clique_var_use_info_4_0_i28);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__set_1_0,
		var_use_analysis__clique_var_use_info_4_0_i30);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,
		var_use_analysis__clique_var_use_info_4_0_i31);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__clique_var_use_info_4_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 0)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 1)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(var_use_analysis__clique_var_use_info_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		var_use_analysis__clique_var_use_info_4_0_i36);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(var_use_analysis__clique_var_use_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		var_use_analysis__clique_var_use_info_4_0_i38);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(var_use_analysis__clique_var_use_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.clique_var_use_info\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("clique has no first procedure", 29);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(var_use_analysis__clique_var_use_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_maybe_child_3_0);
MR_decl_entry(measurements__recursion_depth_descend_2_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(var_use_analysis_module34)
	MR_init_entry1(var_use_analysis__call_site_dynamic_var_use_info_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_site_dynamic_var_use_info_9_0);
	MR_init_label10(var_use_analysis__call_site_dynamic_var_use_info_9_0,2,5,10,13,6,19,18,23,24,25)
	MR_init_label2(var_use_analysis__call_site_dynamic_var_use_info_9_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_var_use_info'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__call_site_dynamic_var_use_info_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_maybe_child_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i2);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i5);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_sv(6), 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__member_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i19);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_sv(6), 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(9), 0);
	MR_np_call_localret_ent(measurements__recursion_depth_descend_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i23);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__insert_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i24);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_0_i25);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 0)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 1)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(var_use_analysis__clique_var_use_info_4_0);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module35)
	MR_init_entry1(var_use_analysis__call_site_dynamic_var_use_info_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_site_dynamic_var_use_info_9_1);
	MR_init_label10(var_use_analysis__call_site_dynamic_var_use_info_9_1,2,5,10,13,6,19,18,24,26,29)
	MR_init_label4(var_use_analysis__call_site_dynamic_var_use_info_9_1,30,28,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_var_use_info'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__call_site_dynamic_var_use_info_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_maybe_child_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i2);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i4);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i5);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__intermodule_var_use_should_follow_csd_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_sv(6), 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__member_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i19);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i18);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_sv(6), 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i24);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(9), 0);
	MR_np_call_localret_ent(measurements__recursion_depth_descend_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i26);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(3) == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_sv(3)) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i28);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__insert_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i29);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,
		var_use_analysis__call_site_dynamic_var_use_info_9_1_i30);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__call_site_dynamic_var_use_info_9_1_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 0)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_tempr1, 1)) + (MR_Float) 1.0000000000000000));
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(var_use_analysis__clique_var_use_info_4_0);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_9_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_index_3_0);

MR_BEGIN_MODULE(var_use_analysis_module36)
	MR_init_entry1(var_use_analysis__call_site_dynamic_var_use_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_site_dynamic_var_use_info_6_0);
	MR_init_label4(var_use_analysis__call_site_dynamic_var_use_info_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_var_use_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__call_site_dynamic_var_use_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_0_i2);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_0_i3);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_0_i4);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_0_i5);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(var_use_analysis__call_site_dynamic_var_use_info_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_1);

MR_BEGIN_MODULE(var_use_analysis_module37)
	MR_init_entry1(var_use_analysis__call_site_dynamic_var_use_info_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_site_dynamic_var_use_info_6_1);
	MR_init_label4(var_use_analysis__call_site_dynamic_var_use_info_6_1,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_var_use_info'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__call_site_dynamic_var_use_info_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_1_i2);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_1_i3);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_1,
		var_use_analysis__call_site_dynamic_var_use_info_6_1_i4);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		var_use_analysis__call_site_dynamic_var_use_info_6_1_i5);
MR_def_label(var_use_analysis__call_site_dynamic_var_use_info_6_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(var_use_analysis__call_site_dynamic_var_use_info_9_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module38)
	MR_init_entry1(var_use_analysis__var_first_use_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__var_first_use_13_0);
	MR_init_label5(var_use_analysis__var_first_use_13_0,2,4,8,10,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_first_use'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__var_first_use_13_0);
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
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		var_use_analysis__var_first_use_13_0_i2);
MR_def_label(var_use_analysis__var_first_use_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r4 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__var_first_use_13_0_i4);
MR_def_label(var_use_analysis__var_first_use_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__var_first_use_13_0_i6);
	}
	MR_r2 = MR_tfield(0, MR_sv(11), 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__var_first_use_13_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(var_use_analysis__var_first_use_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(var_use_analysis__var_first_use_13_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(var_use_analysis__var_first_use_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.found_first_use_to_use_info\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("goal did not produce a variable that it should have", 51);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(var_use_analysis__var_first_use_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(9);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_sv(11), 2);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module39)
	MR_init_entry1(var_use_analysis__sum_use_info_costs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__sum_use_info_costs_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_use_info_costs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__sum_use_info_costs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r2) + MR_word_to_float(MR_tfield(0, MR_r1, 0))));
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_r3) + MR_word_to_float(MR_tfield(0, MR_tempr1, 1))));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_index0_3_1);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__singleton_set_2_0);

MR_BEGIN_MODULE(var_use_analysis_module40)
	MR_init_entry1(var_use_analysis__call_args_first_use_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__call_args_first_use_5_0);
	MR_init_label10(var_use_analysis__call_args_first_use_5_0,1,5,4,10,13,17,15,9,3,22)
	MR_init_label1(var_use_analysis__call_args_first_use_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_args_first_use'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__call_args_first_use_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred var_use_analysis.call_args_first_use/5-0", 10,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_fv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_fv(3) = MR_tfield(0, MR_tempr2, 6);
	MR_fv(4) = MR_tfield(0, MR_tempr2, 7);
	MR_fv(5) = MR_tfield(0, MR_tempr2, 8);
	MR_fv(6) = MR_tfield(0, MR_tempr2, 9);
	MR_fv(7) = MR_tfield(0, MR_fv(3), 2);
	MR_tempr3 = MR_r4;
	MR_fv(8) = MR_tfield(0, MR_tempr3, 3);
	MR_fv(9) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_index0_3_1,
		var_use_analysis__call_args_first_use_5_0_i1);
MR_def_label(var_use_analysis__call_args_first_use_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_fv(8),0)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i3);
	}
	MR_fv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r2 = MR_fv(9);
	MR_np_call_localret_ent(set__empty_1_0,
		var_use_analysis__call_args_first_use_5_0_i5);
MR_def_label(var_use_analysis__call_args_first_use_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i4);
	}
	if (MR_INT_NE(MR_fv(7),1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i17);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succeed();
MR_def_label(var_use_analysis__call_args_first_use_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r2 = MR_fv(9);
	MR_np_call_localret_ent(set__singleton_set_2_0,
		var_use_analysis__call_args_first_use_5_0_i10);
MR_def_label(var_use_analysis__call_args_first_use_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i9);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_fv(6);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_fv(10);
	MR_r4 = MR_fv(5);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(4);
	MR_r8 = MR_fv(3);
	MR_np_call_localret_ent(var_use_analysis__call_site_dynamic_var_use_info_9_0,
		var_use_analysis__call_args_first_use_5_0_i13);
MR_def_label(var_use_analysis__call_args_first_use_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i15);
	}
	if (MR_INT_NE(MR_fv(7),1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i17);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succeed();
MR_def_label(var_use_analysis__call_args_first_use_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(var_use_analysis__call_args_first_use_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	MR_succeed();
MR_def_label(var_use_analysis__call_args_first_use_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140var_use_analysis.call_args_first_use\'/5", 50);
	MR_r3 = (MR_Word) MR_string_const("wrong number of callees for normal call site", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		var_use_analysis__call_args_first_use_5_0_i2);
MR_def_label(var_use_analysis__call_args_first_use_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_fv(7),1)) {
		MR_GOTO_LAB(var_use_analysis__call_args_first_use_5_0_i22);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succeed();
MR_def_label(var_use_analysis__call_args_first_use_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
MR_def_label(var_use_analysis__call_args_first_use_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__not_probability_1_0);

MR_BEGIN_MODULE(var_use_analysis_module41)
	MR_init_entry1(var_use_analysis__adjust_weight_for_recursion_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__adjust_weight_for_recursion_4_0);
	MR_init_label3(var_use_analysis__adjust_weight_for_recursion_4_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_weight_for_recursion'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__adjust_weight_for_recursion_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__adjust_weight_for_recursion_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__not_probability_1_0,
		var_use_analysis__adjust_weight_for_recursion_4_0_i2);
MR_def_label(var_use_analysis__adjust_weight_for_recursion_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r3;
MR_def_label(var_use_analysis__adjust_weight_for_recursion_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		var_use_analysis__adjust_weight_for_recursion_4_0_i5);
MR_def_label(var_use_analysis__adjust_weight_for_recursion_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(1)) * MR_word_to_float(MR_r1)));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__goal_path__goal_attr_array_1_0);

MR_BEGIN_MODULE(var_use_analysis_module42)
	MR_init_entry1(__Unify___var_use_analysis__first_use_rec_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__first_use_rec_info_0_0);
	MR_init_label4(__Unify___var_use_analysis__first_use_rec_info_0_0,12,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__first_use_rec_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__first_use_rec_info_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__first_use_rec_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__first_use_rec_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__first_use_rec_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__first_use_rec_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_attr_array_1_0,
		__Unify___var_use_analysis__first_use_rec_info_0_0_i7);
MR_def_label(__Unify___var_use_analysis__first_use_rec_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__first_use_rec_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___var_use_analysis__first_use_rec_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__goal_path__goal_attr_array_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(var_use_analysis_module43)
	MR_init_entry1(__Compare___var_use_analysis__first_use_rec_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__first_use_rec_info_0_0);
	MR_init_label6(__Compare___var_use_analysis__first_use_rec_info_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__first_use_rec_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__first_use_rec_info_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__first_use_rec_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__first_use_rec_info_0_0_i7);
	}
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__first_use_rec_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,
		__Compare___var_use_analysis__first_use_rec_info_0_0_i11);
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__first_use_rec_info_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___var_use_analysis__first_use_rec_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module44)
	MR_init_entry1(__Unify___var_use_analysis__found_first_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__found_first_use_0_0);
	MR_init_label3(__Unify___var_use_analysis__found_first_use_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__found_first_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,1)
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

MR_BEGIN_MODULE(var_use_analysis_module45)
	MR_init_entry1(__Compare___var_use_analysis__found_first_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__found_first_use_0_0);
	MR_init_label4(__Compare___var_use_analysis__found_first_use_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__found_first_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i7);
	}
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module46)
	MR_init_entry1(__Unify___var_use_analysis__intermodule_var_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__intermodule_var_use_0_0);
	MR_init_label3(__Unify___var_use_analysis__intermodule_var_use_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__intermodule_var_use_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__intermodule_var_use_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__intermodule_var_use_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__intermodule_var_use_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__intermodule_var_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__intermodule_var_use_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__intermodule_var_use_0_0,1)
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

MR_BEGIN_MODULE(var_use_analysis_module47)
	MR_init_entry1(__Compare___var_use_analysis__intermodule_var_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__intermodule_var_use_0_0);
	MR_init_label4(__Compare___var_use_analysis__intermodule_var_use_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__intermodule_var_use_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__intermodule_var_use_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__intermodule_var_use_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__intermodule_var_use_0_0_i7);
	}
MR_def_label(__Compare___var_use_analysis__intermodule_var_use_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__intermodule_var_use_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__intermodule_var_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__intermodule_var_use_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__intermodule_var_use_0_0,9)
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

MR_decl_entry(__Unify___mdbcomp__program_representation__goal_rep_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(var_use_analysis_module48)
	MR_init_entry1(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0);
	MR_init_label8(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,23,5,8,10,12,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i23);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(13);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__goal_rep_1_0,
		__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i8);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i10);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_attr_array_1_0,
		__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i12);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i15);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i17);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___var_use_analysis__proc_var_first_use_prepared_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__goal_rep_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(var_use_analysis_module49)
	MR_init_entry1(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0);
	MR_init_label10(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,3,2,7,5,10,12,16,20,24,29)
	MR_init_label2(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,33,111)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i2);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(13);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(11) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 6);
	MR_tempr6 = MR_sv(2);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__goal_rep_1_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i12);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i16);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i20);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i24);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i29);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i33);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0_i111);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___var_use_analysis__proc_var_first_use_prepared_info_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(var_use_analysis_module50)
	MR_init_entry1(__Unify___var_use_analysis__recursive_calls_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__recursive_calls_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__recursive_calls_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
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

MR_BEGIN_MODULE(var_use_analysis_module51)
	MR_init_entry1(__Compare___var_use_analysis__recursive_calls_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__recursive_calls_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__recursive_calls_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
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


MR_BEGIN_MODULE(var_use_analysis_module52)
	MR_init_entry1(__Unify___var_use_analysis__recursive_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__recursive_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__recursive_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module53)
	MR_init_entry1(__Compare___var_use_analysis__recursive_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__recursive_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__recursive_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___report__recursion_type_0_0);
MR_decl_entry(__Unify___measurements__recursion_depth_0_0);

MR_BEGIN_MODULE(var_use_analysis_module54)
	MR_init_entry1(__Unify___var_use_analysis__var_first_use_static_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__var_first_use_static_info_0_0);
	MR_init_label10(__Unify___var_use_analysis__var_first_use_static_info_0_0,5,7,9,11,13,15,17,19,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__var_first_use_static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i23);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i5);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i7);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i9);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_attr_array_1_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i11);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___var_use_analysis__var_use_options_0_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i13);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i15);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___report__recursion_type_0_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i17);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___measurements__recursion_depth_0_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i19);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Unify___var_use_analysis__first_use_rec_info_0_0);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___report__recursion_type_0_0);
MR_decl_entry(__Compare___measurements__recursion_depth_0_0);

MR_BEGIN_MODULE(var_use_analysis_module55)
	MR_init_entry1(__Compare___var_use_analysis__var_first_use_static_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__var_first_use_static_info_0_0);
	MR_init_label10(__Compare___var_use_analysis__var_first_use_static_info_0_0,3,2,5,10,14,18,22,26,30,34)
	MR_init_label3(__Compare___var_use_analysis__var_first_use_static_info_0_0,38,42,127)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__var_first_use_static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i2);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i5);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i10);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i14);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i18);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i22);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i26);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___var_use_analysis__var_use_options_0_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i30);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i34);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___report__recursion_type_0_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i38);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___measurements__recursion_depth_0_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i42);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i127);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Compare___var_use_analysis__first_use_rec_info_0_0);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module56)
	MR_init_entry1(__Unify___var_use_analysis__var_use_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__var_use_info_0_0);
	MR_init_label2(__Unify___var_use_analysis__var_use_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__var_use_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__var_use_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__var_use_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module57)
	MR_init_entry1(__Compare___var_use_analysis__var_use_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__var_use_info_0_0);
	MR_init_label5(__Compare___var_use_analysis__var_use_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__var_use_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i2);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___var_use_analysis__var_use_info_0_0_i5);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___var_use_analysis__var_use_info_0_0_i9);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__deep_0_0);

MR_BEGIN_MODULE(var_use_analysis_module58)
	MR_init_entry1(__Unify___var_use_analysis__var_use_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__var_use_options_0_0);
	MR_init_label4(__Unify___var_use_analysis__var_use_options_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__var_use_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_options_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__deep_0_0,
		__Unify___var_use_analysis__var_use_options_0_0_i4);
MR_def_label(__Unify___var_use_analysis__var_use_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_options_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___var_use_analysis__intermodule_var_use_0_0,
		__Unify___var_use_analysis__var_use_options_0_0_i6);
MR_def_label(__Unify___var_use_analysis__var_use_options_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_options_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___var_use_analysis__var_use_options_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__var_use_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__deep_0_0);

MR_BEGIN_MODULE(var_use_analysis_module59)
	MR_init_entry1(__Compare___var_use_analysis__var_use_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__var_use_options_0_0);
	MR_init_label5(__Compare___var_use_analysis__var_use_options_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__var_use_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_options_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__var_use_options_0_0_i2);
MR_def_label(__Compare___var_use_analysis__var_use_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__var_use_options_0_0,2)
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
	MR_np_call_localret_ent(__Compare___profile__deep_0_0,
		__Compare___var_use_analysis__var_use_options_0_0_i5);
MR_def_label(__Compare___var_use_analysis__var_use_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_options_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___var_use_analysis__intermodule_var_use_0_0,
		__Compare___var_use_analysis__var_use_options_0_0_i9);
MR_def_label(__Compare___var_use_analysis__var_use_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_options_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___var_use_analysis__var_use_options_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module60)
	MR_init_entry1(__Unify___var_use_analysis__var_use_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___var_use_analysis__var_use_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__var_use_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module61)
	MR_init_entry1(__Compare___var_use_analysis__var_use_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___var_use_analysis__var_use_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__var_use_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module62)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__average_var_use__169__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module63)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0);
	MR_init_label3(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0,5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__call_var_first_use__804__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred var_use_analysis.IntroducedFrom__pred__call_var_first_use__804__1/7-0", 4,
		MR_LABEL_AP(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0_i2));
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if ((MR_r3 != MR_tempr1)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0_i3);
	}
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r4;
	MR_fv(3) = MR_r5;
	MR_fv(4) = MR_r6;
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succeed();
	}
MR_def_label(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if ((MR_r3 != MR_tempr1)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0_i3);
	}
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r4;
	MR_fv(3) = MR_r5;
	MR_fv(4) = MR_r6;
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succeed();
	}
MR_def_label(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_r5 = MR_fv(3);
	MR_r6 = MR_fv(4);
MR_def_label(var_use_analysis__IntroducedFrom__pred__call_var_first_use__804__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(var_use_analysis__call_args_first_use_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module64)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1097__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1097__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__switch_var_first_use__1097__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1097__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___var_use_analysis__found_first_use_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_1);

MR_BEGIN_MODULE(var_use_analysis_module65)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0);
	MR_init_label2(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__build_recursive_call_sites_list__1222__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_calls_1_0,
		var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0_i2);
MR_def_label(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_1,
		var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0_i3);
MR_def_label(var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1222__1_2_0,3)
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

MR_decl_entry(__Unify___mdbcomp__goal_path__goal_path_step_0_0);

MR_BEGIN_MODULE(var_use_analysis_module66)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0);
	MR_init_label2(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__filter_recursive_call_sites__1233__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0,
		var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0_i3);
MR_def_label(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1233__1_3_0,1)
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


MR_BEGIN_MODULE(var_use_analysis_module67)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1457__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1457__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__rec_switch_var_first_use__1457__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1457__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___var_use_analysis__found_first_use_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__goal_path__create_goal_id_array_2_0);
MR_decl_entry(fn__measurements__recursion_depth_to_float_1_0);

MR_BEGIN_MODULE(var_use_analysis_module68)
	MR_init_entry1(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0);
	MR_init_label10(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,2,4,7,8,9,10,13,16,20,18)
	MR_init_label7(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,17,24,22,25,26,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__proc_dynamic_recursive_var_use_info__[6]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__prepare_for_proc_var_first_use_7_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i2);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(1, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(1, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__measurement_units__impossible_0_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i7);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurement_units, probability);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__create_goal_id_array_2_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i8);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(var_use_analysis__build_recursive_call_sites_list_2_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i9);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_rec_prob_6_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i10);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr2, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr2, 10) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r4 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i13);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr2, 9) = MR_tfield(0, MR_tempr4, 9);
	MR_tfield(0, MR_tempr2, 10) = MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r4 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(var_use_analysis__rec_goal_var_first_use_6_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i16);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i18);
	}
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i20);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(6) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i17);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(6) = MR_sv(7);
	MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i17);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 0);
	}
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i22);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i24);
	}
	MR_sv(5) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__measurements__recursion_depth_to_float_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i25);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__recursion_depth_to_float_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i25);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__measurements__recursion_depth_to_float_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i25);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_float_to_word((MR_word_to_float(MR_sv(5)) + (MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(6)))));
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i26);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_float_to_word((MR_word_to_float(MR_sv(7)) * MR_word_to_float(MR_r1)));
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurement_units__not_probability_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i27);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0_i28);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_word_to_float(MR_sv(7)) + (MR_word_to_float(MR_sv(4)) * MR_word_to_float(MR_r1))));
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_sv(1), 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__var_use_analysis_maybe_bunch_0(void)
{
	var_use_analysis_module0();
	var_use_analysis_module1();
	var_use_analysis_module2();
	var_use_analysis_module3();
	var_use_analysis_module4();
	var_use_analysis_module5();
	var_use_analysis_module6();
	var_use_analysis_module7();
	var_use_analysis_module8();
	var_use_analysis_module9();
	var_use_analysis_module10();
	var_use_analysis_module11();
	var_use_analysis_module12();
	var_use_analysis_module13();
	var_use_analysis_module14();
	var_use_analysis_module15();
	var_use_analysis_module16();
	var_use_analysis_module17();
	var_use_analysis_module18();
	var_use_analysis_module19();
	var_use_analysis_module20();
	var_use_analysis_module21();
	var_use_analysis_module22();
	var_use_analysis_module23();
	var_use_analysis_module24();
	var_use_analysis_module25();
	var_use_analysis_module26();
	var_use_analysis_module27();
	var_use_analysis_module28();
	var_use_analysis_module29();
	var_use_analysis_module30();
	var_use_analysis_module31();
	var_use_analysis_module32();
	var_use_analysis_module33();
	var_use_analysis_module34();
	var_use_analysis_module35();
	var_use_analysis_module36();
	var_use_analysis_module37();
	var_use_analysis_module38();
	var_use_analysis_module39();
}

static void mercury__var_use_analysis_maybe_bunch_1(void)
{
	var_use_analysis_module40();
	var_use_analysis_module41();
	var_use_analysis_module42();
	var_use_analysis_module43();
	var_use_analysis_module44();
	var_use_analysis_module45();
	var_use_analysis_module46();
	var_use_analysis_module47();
	var_use_analysis_module48();
	var_use_analysis_module49();
	var_use_analysis_module50();
	var_use_analysis_module51();
	var_use_analysis_module52();
	var_use_analysis_module53();
	var_use_analysis_module54();
	var_use_analysis_module55();
	var_use_analysis_module56();
	var_use_analysis_module57();
	var_use_analysis_module58();
	var_use_analysis_module59();
	var_use_analysis_module60();
	var_use_analysis_module61();
	var_use_analysis_module62();
	var_use_analysis_module63();
	var_use_analysis_module64();
	var_use_analysis_module65();
	var_use_analysis_module66();
	var_use_analysis_module67();
	var_use_analysis_module68();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__var_use_analysis__init(void);
void mercury__var_use_analysis__init_type_tables(void);
void mercury__var_use_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__var_use_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__var_use_analysis__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__var_use_analysis__init_threadscope_string_table(void);
#endif

void mercury__var_use_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__var_use_analysis_maybe_bunch_0();
	mercury__var_use_analysis_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0,
		var_use_analysis__first_use_rec_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_found_first_use_0,
		var_use_analysis__found_first_use_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0,
		var_use_analysis__intermodule_var_use_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0,
		var_use_analysis__proc_var_first_use_prepared_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_recursive_calls_list_0,
		var_use_analysis__recursive_calls_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_recursive_case_0,
		var_use_analysis__recursive_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0,
		var_use_analysis__var_first_use_static_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_use_info_0,
		var_use_analysis__var_use_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_use_options_0,
		var_use_analysis__var_use_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_use_type_0,
		var_use_analysis__var_use_type_0_0);
	mercury__var_use_analysis__init_debugger();
}

void mercury__var_use_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_first_use_rec_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_found_first_use_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_intermodule_var_use_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_recursive_calls_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_recursive_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_use_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_use_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_use_type_0);
	}
}


void mercury__var_use_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__var_use_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__var_use_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__var_use_analysis__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__var_use_analysis__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
