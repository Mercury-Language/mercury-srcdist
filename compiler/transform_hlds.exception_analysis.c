/*
** Automatically generated from `exception_analysis.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__exception_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.exception_analysis.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.exception_analysis.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.exception_analysis.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.exception_analysis.c"
#line 40 "transform_hlds.exception_analysis.c"
#include "transform_hlds.exception_analysis.mh"

#line 43 "transform_hlds.exception_analysis.c"
#line 44 "transform_hlds.exception_analysis.c"
#ifndef TRANSFORM_HLDS__EXCEPTION_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__EXCEPTION_ANALYSIS_DECL_GUARD

#line 48 "transform_hlds.exception_analysis.c"
#line 49 "transform_hlds.exception_analysis.c"

#endif
#line 52 "transform_hlds.exception_analysis.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[4];
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[5];
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
static const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
static const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1;
};
static const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Unsigned f1[2];
};
static const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
	MR_Integer f4;
	MR_Word * f5[4];
};
static const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Integer f1[32];
};
static const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Integer f1;
	MR_String f2[3];
	MR_Integer f3[3];
	MR_String f4;
	MR_Integer f5[7];
	MR_String f6;
	MR_Integer f7;
	MR_String f8;
	MR_Integer f9[2];
	MR_String f10;
	MR_Integer f11[4];
	MR_String f12;
	MR_Integer f13[3];
	MR_String f14;
	MR_Integer f15[2];
};
static const struct mercury_type_19 mercury_common_19[];

struct mercury_type_20 {
	MR_Integer f1[64];
};
static const struct mercury_type_20 mercury_common_20[];

struct mercury_type_21 {
	MR_Integer f1;
	MR_String f2[15];
	MR_Integer f3;
	MR_String f4;
	MR_Integer f5[5];
	MR_String f6;
	MR_Integer f7[7];
	MR_String f8;
	MR_Integer f9;
	MR_String f10;
	MR_Integer f11;
	MR_String f12[2];
	MR_Integer f13;
	MR_String f14;
	MR_Integer f15[6];
	MR_String f16[2];
	MR_Integer f17;
	MR_String f18;
	MR_Integer f19;
	MR_String f20[3];
	MR_Integer f21[5];
	MR_String f22;
	MR_Integer f23[3];
	MR_String f24;
	MR_Integer f25;
};
static const struct mercury_type_21 mercury_common_21[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_analysis__to_string__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[],
	mercury_data_base_typeclass_info_analysis__partial_order__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[],
	mercury_data_base_typeclass_info_analysis__answer_pattern__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[],
	mercury_data_base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0,
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_scc_0,
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_results_0,
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0,
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0,
	mercury_data_transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0;
MR_decl_label4(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0, 23,4,20,1)
MR_decl_label1(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0, 2)
MR_decl_label3(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0, 2,4,7)
MR_decl_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0, 2,3,4,5,6,30,8,9)
MR_decl_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0, 10,11,12,13,14,15,16,19)
MR_decl_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0, 20,21,22,23,24,18,26,27)
MR_decl_label1(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0, 28)
MR_decl_label2(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0, 3,2)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 4,98,181,12,179,15,17,19)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 20,21,16,24,23,33,34,36)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 37,39,40,32,42,28,47,48)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 49,27,50,180,56,59,60,62)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 64,66,68,69,74,183,76,79)
MR_decl_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 110,81,82,84,184,87,89,91)
MR_decl_label3(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0, 93,185,96)
MR_decl_label8(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0, 32,17,3,5,4,6,7,10)
MR_decl_label8(transform_hlds__exception_analysis__check_nonrecursive_call_11_0, 2,6,7,8,9,3,10,12)
MR_decl_label5(transform_hlds__exception_analysis__check_nonrecursive_call_11_0, 17,16,11,22,23)
MR_decl_label8(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0, 2,3,4,5,7,6,9,8)
MR_decl_label2(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0, 10,12)
MR_decl_label8(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0, 2,3,4,5,6,7,9,11)
MR_decl_label2(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0, 13,14)
MR_decl_label6(transform_hlds__exception_analysis__check_type_4_0, 2,6,4,8,16,10)
MR_decl_label4(transform_hlds__exception_analysis__check_vars_6_0, 2,3,5,6)
MR_decl_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0, 100,11,9,5,21,19,26,24)
MR_decl_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0, 28,35,34,30,15,16,45,43)
MR_decl_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0, 51,49,54,39,40,57,58,59)
MR_decl_label2(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0, 5,2)
MR_decl_label5(transform_hlds__exception_analysis__combine_type_status_3_0, 5,3,7,15,9)
MR_decl_label8(transform_hlds__exception_analysis__get_closure_exception_status_12_0, 2,6,8,9,10,4,12,11)
MR_decl_label8(transform_hlds__exception_analysis__get_closure_exception_status_12_0, 15,17,19,23,22,18,27,24)
MR_decl_label2(transform_hlds__exception_analysis__get_closures_exception_status_9_0, 2,4)
MR_decl_label8(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0, 2,3,4,5,8,10,9,7)
MR_decl_label8(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0, 13,14,15,17,18,16,22,23)
MR_decl_label2(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0, 24,25)
MR_decl_label8(transform_hlds__exception_analysis__record_exception_analysis_result_6_0, 2,3,7,6,11,13,15,17)
MR_decl_label4(transform_hlds__exception_analysis__record_exception_analysis_result_6_0, 19,22,24,5)
MR_decl_label8(transform_hlds__exception_analysis__search_analysis_status_2_9_0, 2,3,4,7,8,10,12,13)
MR_decl_label6(transform_hlds__exception_analysis__search_analysis_status_2_9_0, 14,15,16,6,18,19)
MR_decl_label8(transform_hlds__exception_analysis__update_proc_result_4_0, 5,4,11,14,2,19,16,20)
MR_decl_label8(transform_hlds__exception_analysis__write_pragma_exceptions_5_0, 2,3,7,6,11,13,15,17)
MR_decl_label8(transform_hlds__exception_analysis__write_pragma_exceptions_5_0, 19,22,24,25,26,27,28,30)
MR_decl_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0, 2)
MR_decl_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0, 2)
MR_decl_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0, 2)
MR_decl_label4(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0, 3,4,5,1)
MR_decl_label3(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0, 5,4,7)
MR_decl_label5(fn__transform_hlds__exception_analysis__check_type_2_0, 7,9,4,2,11)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_type_2_3_0, 46,10,9,47,17,21,45,26)
MR_decl_label1(fn__transform_hlds__exception_analysis__check_type_2_3_0, 48)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 3,7,233,5,13,15,16,19)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 22,25,28,31,34,37,40,43)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 45,47,49,51,55,58,61,64)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 67,70,73,76,79,82,85,87)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 89,90,92,94,96,98,100,102)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 104,106,108,110,112,115,118,121)
MR_decl_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0, 124,127,130,132,135,138,12,2)
MR_decl_label1(fn__transform_hlds__exception_analysis__maybe_optimal_1_0, 3)
MR_decl_label2(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0, 3,1)
MR_decl_label3(__Unify___transform_hlds__exception_analysis__proc_result_0_0, 2,4,1)
MR_decl_label3(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0, 5,3,7)
MR_decl_label4(__Compare___transform_hlds__exception_analysis__proc_result_0_0, 3,7,11,17)
MR_def_extern_entry(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0)
MR_def_extern_entry(transform_hlds__exception_analysis__write_pragma_exceptions_5_0)
MR_decl_static(fn__transform_hlds__exception_analysis__analysis_name_0_0)
MR_decl_static(fn__transform_hlds__exception_analysis__this_file_0_0)
MR_def_extern_entry(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0)
MR_decl_static(transform_hlds__exception_analysis__combine_individual_proc_results_3_0)
MR_decl_static(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0)
MR_decl_static(transform_hlds__exception_analysis__maybe_analysis_status_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__maybe_optimal_1_0)
MR_decl_static(transform_hlds__exception_analysis__get_closures_exception_status_9_0)
MR_decl_static(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0)
MR_decl_static(transform_hlds__exception_analysis__update_proc_result_4_0)
MR_decl_static(fn__transform_hlds__exception_analysis__check_types_2_0)
MR_decl_static(transform_hlds__exception_analysis__check_vars_6_0)
MR_decl_static(transform_hlds__exception_analysis__record_dependencies_7_0)
MR_decl_static(transform_hlds__exception_analysis__search_analysis_status_2_9_0)
MR_decl_static(transform_hlds__exception_analysis__check_nonrecursive_call_11_0)
MR_decl_static(transform_hlds__exception_analysis__combine_type_status_3_0)
MR_decl_static(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0)
MR_decl_static(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0)
MR_decl_static(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0)
MR_decl_static(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0)
MR_decl_static(transform_hlds__exception_analysis__get_closure_exception_status_12_0)
MR_decl_static(fn__transform_hlds__exception_analysis__check_user_type_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__check_type_2_3_0)
MR_decl_static(fn__transform_hlds__exception_analysis__check_type_2_0)
MR_decl_static(transform_hlds__exception_analysis__check_type_4_0)
MR_decl_static(transform_hlds__exception_analysis__record_exception_analysis_result_6_0)
MR_decl_static(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0)
MR_decl_static(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0)
MR_def_extern_entry(__Unify___transform_hlds__exception_analysis__exception_analysis_answer_0_0)
MR_def_extern_entry(__Compare___transform_hlds__exception_analysis__exception_analysis_answer_0_0)
MR_decl_static(__Unify___transform_hlds__exception_analysis__proc_result_0_0)
MR_decl_static(__Compare___transform_hlds__exception_analysis__proc_result_0_0)
MR_decl_static(__Unify___transform_hlds__exception_analysis__proc_results_0_0)
MR_decl_static(__Compare___transform_hlds__exception_analysis__proc_results_0_0)
MR_decl_static(__Unify___transform_hlds__exception_analysis__scc_0_0)
MR_decl_static(__Compare___transform_hlds__exception_analysis__scc_0_0)
MR_decl_static(__Unify___transform_hlds__exception_analysis__type_status_0_0)
MR_decl_static(__Compare___transform_hlds__exception_analysis__type_status_0_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__bottom_1_1_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__top_1_1_0)
MR_decl_static(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0)
MR_decl_static(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__equivalent_2_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0)
MR_decl_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0)
MR_decl_static(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0)
MR_decl_static(transform_hlds__exception_analysis__IntroducedFrom__pred__check_scc_for_exceptions__215__1_5_0)
MR_decl_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__382__1_2_0)
MR_decl_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__522__1_1_0)
MR_decl_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_vars__734__1_2_0)
MR_decl_static(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0)
MR_decl_static(transform_hlds__exception_analysis__analysis__module_is_local__ho2_5_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_112_95_95_104_111_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__to_string__arity1__analysis__any_call__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_any_call_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__partial_order__arity1__analysis__any_call__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__mmc_analysis__type_ctor_info_mmc_0;
static const struct mercury_type_0 mercury_common_0[14] =
{
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
(MR_Word *) &mercury_data_base_typeclass_info_analysis__to_string__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, exception_analysis_answer)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__partial_order__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, exception_analysis_answer)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__to_string__arity1__analysis__any_call__arity0__,
MR_CTOR0_ADDR(analysis, any_call)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__partial_order__arity1__analysis__any_call__arity0__,
MR_CTOR0_ADDR(analysis, any_call)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(analysis, analysis_status)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(analysis, analysis_status)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__,
MR_CTOR0_ADDR(transform_hlds__mmc_analysis, mmc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(parse_tree__prog_data, exception_status),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
};

static const struct mercury_type_2 mercury_common_2[8] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__exception_analysis__maybe_analysis_status_2_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(transform_hlds__exception_analysis__maybe_analysis_status_2_0),
0
},
{
MR_COMMON(9,2),
MR_ENTRY_AP(transform_hlds__exception_analysis__maybe_analysis_status_2_0),
0
},
{
MR_COMMON(9,3),
MR_ENTRY_AP(transform_hlds__exception_analysis__maybe_analysis_status_2_0),
0
},
{
MR_COMMON(9,4),
MR_ENTRY_AP(transform_hlds__exception_analysis__maybe_analysis_status_2_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0),
0
},
{
MR_COMMON(9,5),
MR_ENTRY_AP(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__522__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_exception_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_exception_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,11),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__write_pragma_exceptions_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__write_pragma_exceptions_5_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
},
};

static const struct mercury_type_6 mercury_common_6[3] =
{
{
0
},
{
1
},
{
2
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__call_pattern__arity1__analysis__any_call__arity0__[];
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__answer_pattern__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__,
MR_TAG_COMMON(0,0,3),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, exception_analysis_answer)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__call_pattern__arity1__analysis__any_call__arity0__,
MR_TAG_COMMON(0,0,5),
MR_TAG_COMMON(0,0,4),
MR_CTOR0_ADDR(analysis, any_call)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__,
MR_TAG_COMMON(0,7,1),
MR_TAG_COMMON(0,7,0),
MR_CTOR0_ADDR(analysis, any_call),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, exception_analysis_answer)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_9 mercury_common_9[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_1;
static const struct mercury_type_10 mercury_common_10[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,2),
MR_COMMON(0,12),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,2),
MR_COMMON(0,12),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_info_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, exception_status),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_2;
static const struct mercury_type_13 mercury_common_13[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status),
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_2,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status),
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_14 mercury_common_14[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_types_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_user_type_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_type_2_3_0_1;
static const struct mercury_type_15 mercury_common_15[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_types_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_user_type_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_type_2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status),
MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status)
}
},
};

static const struct mercury_type_16 mercury_common_16[1] =
{
{
{
1,
17469
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__record_dependencies_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
static const struct mercury_type_17 mercury_common_17[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__exception_analysis__record_dependencies_7_0_1,
MR_COMMON(16,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
1,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info)
}
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
{
-2,
-1,
-1,
-1,
-2,
-2,
-2,
2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
3,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2
}
},
};

static const struct mercury_type_19 mercury_common_19[1] =
{
{
0,
{
MR_string_const("binary_stream", 13),
MR_string_const("res", 3),
MR_string_const("read_result", 11)
},
{
0,
0,
0
},
MR_string_const("stream_id", 9),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("result", 6),
0,
MR_string_const("output_stream", 13),
{
0,
0
},
MR_string_const("maybe_partial_res", 17),
{
0,
0,
0,
0
},
MR_string_const("input_stream", 12),
{
0,
0,
0
},
MR_string_const("error", 5),
{
0,
0
}
},
};

static const struct mercury_type_20 mercury_common_20[1] =
{
{
{
-2,
-1,
-1,
-1,
-1,
-1,
8,
2,
-1,
-1,
3,
-1,
-1,
-1,
15,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
6,
-2,
-1,
-1,
-2,
9,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
12,
-2,
13,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
14,
-2
}
},
};

static const struct mercury_type_21 mercury_common_21[1] =
{
{
0,
{
MR_string_const("set", 3),
MR_string_const("bag", 3),
MR_string_const("rational", 8),
MR_string_const("eqvclass", 8),
MR_string_const("set_tree234", 11),
MR_string_const("set_ctree234", 12),
MR_string_const("pqueue", 6),
MR_string_const("integer", 7),
MR_string_const("builtin", 7),
MR_string_const("term", 4),
MR_string_const("stack", 5),
MR_string_const("rbtree", 6),
MR_string_const("bimap", 5),
MR_string_const("injection", 9),
MR_string_const("cord", 4)
},
0,
MR_string_const("rtree", 5),
{
0,
0,
0,
0,
0
},
MR_string_const("maybe", 5),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("map", 3),
0,
MR_string_const("varset", 6),
0,
{
MR_string_const("multi_map", 9),
MR_string_const("io", 2)
},
0,
MR_string_const("list", 4),
{
0,
0,
0,
0,
0,
0
},
{
MR_string_const("set_ordlist", 11),
MR_string_const("pair", 4)
},
0,
MR_string_const("set_unordlist", 13),
0,
{
MR_string_const("set_bbbtree", 11),
MR_string_const("string", 6),
MR_string_const("queue", 5)
},
{
0,
0,
0,
0,
0
},
MR_string_const("assoc_list", 10),
{
0,
0,
0
},
MR_string_const("maybe_error", 11),
0
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_0 = {
	"type_will_not_throw",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_1 = {
	"type_may_throw",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_2 = {
	"type_conditional",
	2
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__exception_analysis__enum_value_ordered_type_status_0[] = {
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_0,
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_1,
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_2
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__exception_analysis__enum_name_ordered_type_status_0[] = {
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_2,
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_1,
	&mercury_data_transform_hlds__exception_analysis__enum_functor_desc_type_status_0_0
};

const MR_Integer mercury_data_transform_hlds__exception_analysis__functor_number_map_type_status_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__type_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__type_status_0_0)),
	"transform_hlds.exception_analysis",
	"type_status",
	{ (void *)mercury_data_transform_hlds__exception_analysis__enum_name_ordered_type_status_0 },
	{ (void *)mercury_data_transform_hlds__exception_analysis__enum_value_ordered_type_status_0 },
	3,
	4,
	mercury_data_transform_hlds__exception_analysis__functor_number_map_type_status_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_scc_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__scc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__scc_0_0)),
	"transform_hlds.exception_analysis",
	"scc",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__exception_analysis__type_ctor_info_proc_result_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_results_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__proc_results_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__proc_results_0_0)),
	"transform_hlds.exception_analysis",
	"proc_results",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__exception_analysis__type_ctor_info_proc_result_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_analysis_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__exception_analysis__field_types_proc_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0
};

const MR_ConstString mercury_data_transform_hlds__exception_analysis__field_names_proc_result_0_0[] = {
	"ppid",
	"status",
	"rec_calls",
	"maybe_analysis_status"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__exception_analysis__du_functor_desc_proc_result_0_0 = {
	"proc_result",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__exception_analysis__field_types_proc_result_0_0,
	mercury_data_transform_hlds__exception_analysis__field_names_proc_result_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__exception_analysis__du_stag_ordered_proc_result_0_0[] = {
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_proc_result_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__exception_analysis__du_ptag_ordered_proc_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__exception_analysis__du_stag_ordered_proc_result_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__exception_analysis__du_name_ordered_proc_result_0[] = {
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_proc_result_0_0
};

const MR_Integer mercury_data_transform_hlds__exception_analysis__functor_number_map_proc_result_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__proc_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__proc_result_0_0)),
	"transform_hlds.exception_analysis",
	"proc_result",
	{ (void *)mercury_data_transform_hlds__exception_analysis__du_name_ordered_proc_result_0 },
	{ (void *)mercury_data_transform_hlds__exception_analysis__du_ptag_ordered_proc_result_0 },
	1,
	4,
	mercury_data_transform_hlds__exception_analysis__functor_number_map_proc_result_0
};

static const MR_NotagFunctorDesc mercury_data_transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 = {
	"exception_analysis_answer",
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0,
	NULL
};

const MR_Integer mercury_data_transform_hlds__exception_analysis__functor_number_map_exception_analysis_answer_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__exception_analysis_answer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__exception_analysis_answer_0_0)),
	"transform_hlds.exception_analysis",
	"exception_analysis_answer",
	{ (void *)&mercury_data_transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 },
	{ (void *)&mercury_data_transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 },
	1,
	4,
	mercury_data_transform_hlds__exception_analysis__functor_number_map_exception_analysis_answer_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0 = {
	"may_throw",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__exception_analysis__field_types_closures_exception_status_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1 = {
	"maybe_will_not_throw",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__exception_analysis__field_types_closures_exception_status_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_0[] = {
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_1[] = {
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__exception_analysis__du_ptag_ordered_closures_exception_status_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__exception_analysis__du_name_ordered_closures_exception_status_0[] = {
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0,
	&mercury_data_transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1
};

const MR_Integer mercury_data_transform_hlds__exception_analysis__functor_number_map_closures_exception_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0)),
	"transform_hlds.exception_analysis",
	"closures_exception_status",
	{ (void *)mercury_data_transform_hlds__exception_analysis__du_name_ordered_closures_exception_status_0 },
	{ (void *)mercury_data_transform_hlds__exception_analysis__du_ptag_ordered_closures_exception_status_0 },
	2,
	4,
	mercury_data_transform_hlds__exception_analysis__functor_number_map_closures_exception_status_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__to_string__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__partial_order__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__equivalent_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__answer_pattern__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 1,
	(MR_Code *) 0,
	
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 2,
	(MR_Code *) 5,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__bottom_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__top_1_1_0))
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_scc_for_exceptions",
5,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
162,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"write_pragma_exceptions",
5,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
1216,
"d1;c17;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__write_pragma_exceptions_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_1240",
9,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
1240,
"d1;c8;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_pred",
"hlds.hlds_pred",
"pred_info_is_imported",
1,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
1264,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"maybe_analysis_status",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
313,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"maybe_analysis_status",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
313,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"maybe_analysis_status",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
313,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_4 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"maybe_analysis_status",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
313,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_5 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"maybe_analysis_status",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
313,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__combine_individual_proc_results_3_0_6 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"combine_maybe_analysis_status",
3,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
314,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_proc_for_exceptions",
8,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
247,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_215",
5,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
215,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"record_exception_analysis_result",
6,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
1133,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"get_closure_exception_status",
12,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
595,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__get_closures_exception_status_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"get_closure_exception_status",
12,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
595,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_types_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_type",
4,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
827,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_734",
3,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
734,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_vars_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_type",
4,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
827,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__record_dependencies_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_1121",
8,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
1121,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_1 = {
{
MR_FUNCTION,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_382",
3,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
382,
"d2;c14;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_pred",
"hlds.hlds_pred",
"pred_info_is_imported",
1,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
420,
"d2;c14;e;e;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_3 = {
{
MR_FUNCTION,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"lambda_exception_analysis_m_522",
2,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
522,
"d8;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_user_type_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_type",
4,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
827,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__exception_analysis__check_type_2_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"check_type",
4,
0
},
"transform_hlds.exception_analysis",
"exception_analysis.m",
827,
"d1;c4;"
};

MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_5);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(io__open_append_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_exception_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module0)
	MR_init_entry1(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0);
	MR_init_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,2,3,4,5,6,30,8,9)
	MR_init_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,10,11,12,13,14,15,16,19)
	MR_init_label8(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,20,21,22,23,24,18,26,27)
	MR_init_label1(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i2);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i3);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i4);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl2_6_5,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i5);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i6);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i8);
	}
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i9);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".opt.tmp", 8);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i10);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i11);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Appending exceptions pragmas to \140", 35);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i12);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i13);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i14);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i15);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_append_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i16);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i18);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i19);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i20);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i21);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__write_pragma_exceptions_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i22);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i23);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__close_output_3_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i24);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i30);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const(" failed!\n", 9);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i26);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__error_message_2_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i27);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Error opening file \140", 20);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i28);
MR_def_label(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0_i30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module1)
	MR_init_entry1(transform_hlds__exception_analysis__write_pragma_exceptions_5_0);
	MR_init_label8(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,2,3,7,6,11,13,15,17)
	MR_init_label8(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,19,22,24,25,26,27,28,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__exception_analysis__write_pragma_exceptions_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i2);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i3);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i6);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i30);
	}
	MR_r1 = MR_sv(4);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i11);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i30);
	}
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i13);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i15);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i30);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i17);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i19);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i22);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i30);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i24);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i25);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i26);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i27);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__exception_analysis__write_pragma_exceptions_5_0_i28);
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__exception_analysis__write_pragma_exceptions_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module2)
	MR_init_entry1(fn__transform_hlds__exception_analysis__analysis_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__analysis_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module3)
	MR_init_entry1(fn__transform_hlds__exception_analysis__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(fn__bool__pred_to_bool_1_0);
MR_decl_entry(fn__bool__and_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_analysis_info_2_0);
MR_decl_entry(transform_hlds__mmc_analysis__module_id_func_id_4_0);
MR_decl_entry(analysis__lookup_best_result_8_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__transform_hlds__mmc_analysis__module_name_to_module_id_1_0);
MR_decl_entry(analysis__record_dependency_7_0);
MR_decl_entry(hlds__hlds_module__module_info_set_analysis_info_3_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module4)
	MR_init_entry1(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0);
	MR_init_label8(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,2,3,4,5,8,10,9,7)
	MR_init_label8(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,13,14,15,17,18,16,22,23)
	MR_init_label2(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i2);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_pred__pred_info_is_imported_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__pred_to_bool_1_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i3);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i4);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i5);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i8);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i10);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i9);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_analysis_info_2_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i13);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__mmc_analysis__module_id_func_id_4_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i14);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(analysis__lookup_best_result_8_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i15);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i17);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i16);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("invalid exception_analysis answer", 33);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i16);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i22);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__mmc_analysis__module_name_to_module_id_1_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i23);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_np_call_localret_ent(analysis__record_dependency_7_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i24);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_analysis_info_3_0,
		transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0_i25);
MR_def_label(transform_hlds__exception_analysis__lookup_exception_analysis_result_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module5)
	MR_init_entry1(transform_hlds__exception_analysis__combine_individual_proc_results_3_0);
	MR_init_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,100,11,9,5,21,19,26,24)
	MR_init_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,28,35,34,30,15,16,45,43)
	MR_init_label8(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,51,49,54,39,40,57,58,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__combine_individual_proc_results_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i100);
	}
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_r2 = (MR_Word) MR_string_const("Empty SCC during exception analysis.", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i9);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i11);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i5);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i57);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i21);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i15);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i26);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i28);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i16);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i34);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i35);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i30);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i57);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i57);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i43);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i45);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i39);
	}
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i49);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i51);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i54);
	}
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i40);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_GOTO_LAB(transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i57);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i58);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__exception_analysis__combine_individual_proc_results_3_0_i59);
MR_def_label(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_4);
MR_decl_entry(hlds__hlds_module__module_info_set_exception_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_info_0;

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module6)
	MR_init_entry1(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0);
	MR_init_label8(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,2,3,4,5,6,7,9,11)
	MR_init_label2(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r8 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl3_8_4,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i2);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__exception_analysis__combine_individual_proc_results_3_0,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i3);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i4);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__IntroducedFrom__pred__check_scc_for_exceptions__215__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i5);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_exception_info_3_0,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i6);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i7);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_r2 = (MR_Word) MR_string_const("check_scc_for_exceptions: no analysis status.", 45);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_analysis_info_2_0,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i13);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__record_exception_analysis_result_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__exception_analysis__check_scc_for_exceptions_5_0_i14);
MR_def_label(transform_hlds__exception_analysis__check_scc_for_exceptions_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_analysis_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module7)
	MR_init_entry1(transform_hlds__exception_analysis__maybe_analysis_status_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__maybe_analysis_status_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module8)
	MR_init_entry1(fn__transform_hlds__exception_analysis__maybe_optimal_1_0);
	MR_init_label1(fn__transform_hlds__exception_analysis__maybe_optimal_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__maybe_optimal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__maybe_optimal_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__maybe_optimal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold4_10_1);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module9)
	MR_init_entry1(transform_hlds__exception_analysis__get_closures_exception_status_9_0);
	MR_init_label2(transform_hlds__exception_analysis__get_closures_exception_status_9_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__get_closures_exception_status_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__exception_analysis__get_closures_exception_status_9_0_i2);
MR_def_label(transform_hlds__exception_analysis__get_closures_exception_status_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closures_exception_status_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__get_closure_exception_status_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r7 = MR_sv(3);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(4);
	MR_r8 = (MR_Word) MR_TAG_COMMON(1,14,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__fold4_10_1);
	}
MR_def_label(transform_hlds__exception_analysis__get_closures_exception_status_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__get_closure_exception_status_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r7 = MR_sv(3);
	MR_r9 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_r10 = MR_sv(4);
	MR_r8 = (MR_Word) MR_TAG_COMMON(1,14,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, closures_exception_status);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__fold4_10_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__analysis__lub_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module10)
	MR_init_entry1(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0);
	MR_init_label2(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0_i5);
MR_def_label(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__exception_analysis__combine_maybe_analysis_status_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module11)
	MR_init_entry1(transform_hlds__exception_analysis__update_proc_result_4_0);
	MR_init_label8(transform_hlds__exception_analysis__update_proc_result_4_0,5,4,11,14,2,19,16,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__update_proc_result_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i5);
	}
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i2);
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i2);
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i2);
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i2);
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i16);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i16);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__exception_analysis__update_proc_result_4_0_i19);
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__update_proc_result_4_0_i20);
	}
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__exception_analysis__update_proc_result_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module12)
	MR_init_entry1(fn__transform_hlds__exception_analysis__check_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__check_types_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__check_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status);
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module13)
	MR_init_entry1(transform_hlds__exception_analysis__check_vars_6_0);
	MR_init_label4(transform_hlds__exception_analysis__check_vars_6_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_vars__734__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__exception_analysis__check_vars_6_0_i2);
MR_def_label(transform_hlds__exception_analysis__check_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__check_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__exception_analysis__check_vars_6_0_i3);
MR_def_label(transform_hlds__exception_analysis__check_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_vars_6_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__exception_analysis__check_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_vars_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__exception_analysis__update_proc_result_4_0);
MR_def_label(transform_hlds__exception_analysis__check_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__exception_analysis__update_proc_result_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module14)
	MR_init_entry1(transform_hlds__exception_analysis__record_dependencies_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__record_dependencies_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(17,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__record_result_7_0);
MR_decl_entry(analysis__record_request_6_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module15)
	MR_init_entry1(transform_hlds__exception_analysis__search_analysis_status_2_9_0);
	MR_init_label8(transform_hlds__exception_analysis__search_analysis_status_2_9_0,2,3,4,7,8,10,12,13)
	MR_init_label6(transform_hlds__exception_analysis__search_analysis_status_2_9_0,14,15,16,6,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__search_analysis_status_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(transform_hlds__mmc_analysis__module_id_func_id_4_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i2);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(analysis__lookup_best_result_8_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i3);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i4);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__search_analysis_status_2_9_0_i6);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_112_95_95_104_111_49_95_95_91_49_93_95_48_1_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i7);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__analysis__module_is_local__ho2_5_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i8);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__search_analysis_status_2_9_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__search_analysis_status_2_9_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(analysis__record_result_7_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i13);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__analysis_name_0_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i14);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(analysis__record_request_6_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i15);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__record_dependencies_7_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i16);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__search_analysis_status_2_9_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__exception_analysis__record_dependencies_7_0,
		transform_hlds__exception_analysis__search_analysis_status_2_9_0_i19);
MR_def_label(transform_hlds__exception_analysis__search_analysis_status_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module16)
	MR_init_entry1(transform_hlds__exception_analysis__check_nonrecursive_call_11_0);
	MR_init_label8(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,2,6,7,8,9,3,10,12)
	MR_init_label5(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,17,16,11,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_nonrecursive_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i2);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i3);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i3);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_analysis_info_2_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i6);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__search_analysis_status_2_9_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i7);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_analysis_info_3_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i8);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__exception_analysis__update_proc_result_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i9);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i10);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i12);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i11);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__update_proc_result_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i23);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__exception_analysis__check_vars_6_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i23);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__update_proc_result_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i23);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i22);
	}
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__update_proc_result_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i23);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__update_proc_result_4_0,
		transform_hlds__exception_analysis__check_nonrecursive_call_11_0_i23);
MR_def_label(transform_hlds__exception_analysis__check_nonrecursive_call_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module17)
	MR_init_entry1(transform_hlds__exception_analysis__combine_type_status_3_0);
	MR_init_label5(transform_hlds__exception_analysis__combine_type_status_3_0,5,3,7,15,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__combine_type_status_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__combine_type_status_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__combine_type_status_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__combine_type_status_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i9);
	}
MR_def_label(transform_hlds__exception_analysis__combine_type_status_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__combine_type_status_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__combine_type_status_3_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module18)
	MR_init_entry1(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0);
	MR_init_label2(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_9_0_i3);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 6 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_throw_exception_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module19)
	MR_init_entry1(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0);
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,4,98,181,12,179,15,17,19)
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,20,21,16,24,23,33,34,36)
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,37,39,40,32,42,28,47,48)
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,49,27,50,180,56,59,60,62)
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,64,66,68,69,74,183,76,79)
	MR_init_label8(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,110,81,82,84,184,87,89,91)
	MR_init_label3(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,93,185,96)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i179) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i180) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i74));
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 3);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i98);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i181);
	}
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__this_file_0_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i12);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("complicated unify during exception analysis.", 44);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i15);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i17);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__382__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i19);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__check_types_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i20);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(4), 2);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__combine_type_status_3_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i21);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i24);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i32);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i33);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__any_mercury_builtin_module_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i34);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i32);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i36);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i37);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i39);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i40);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i40);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)MR_r1) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(9) != MR_r3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i28);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i42);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i28);
	}
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i27);
	}
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i47);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__maybe_optimal_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i48);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__check_vars_6_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i49);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_pred__pred_info_is_imported_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_sv(7);
	MR_np_call_localret_ent(fn__bool__pred_to_bool_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i50);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_nonrecursive_call_11_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 253;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i56);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i59) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i81) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i110) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i110));
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_r7, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i60);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i62);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i81);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__get_closures_exception_status_9_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i64);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i66);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i68);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__exception_analysis__check_vars_6_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i69);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i183) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i82) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i84) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i184) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i89) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i91) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i93) MR_AND
		MR_LABEL_AP(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i185));
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i76);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i110);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_throw_exception_1_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i79);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i81);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i87);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goal_for_exceptions_9_0);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0);
	}
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__this_file_0_0,
		transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0_i96);
MR_def_label(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during exception analysis.", 53);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module20)
	MR_init_entry1(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0);
	MR_init_label8(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,32,17,3,5,4,6,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i3);
	}
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i5);
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 6 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i7);
	}
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,
		transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i6);
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r7 = MR_ctfield(0, MR_r4, 1);
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i10);
	}
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i32);
MR_def_label(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r7, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i17);
	}
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__exception_analysis__check_goals_for_exceptions_9_0_i32);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module21)
	MR_init_entry1(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0);
	MR_init_label8(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,2,3,4,5,7,6,9,8)
	MR_init_label2(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i2);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i3);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i4);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i5);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i6);
	}
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i9);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 6 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i12);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__check_goal_for_exceptions_2_10_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i10);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__exception_analysis__check_proc_for_exceptions_8_0_i12);
MR_def_label(transform_hlds__exception_analysis__check_proc_for_exceptions_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module22)
	MR_init_entry1(transform_hlds__exception_analysis__get_closure_exception_status_12_0);
	MR_init_label8(transform_hlds__exception_analysis__get_closure_exception_status_12_0,2,6,8,9,10,4,12,11)
	MR_init_label8(transform_hlds__exception_analysis__get_closure_exception_status_12_0,15,17,19,23,22,18,27,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__get_closure_exception_status_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i2);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i6);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_analysis_info_2_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i8);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__search_analysis_status_2_9_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i9);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_analysis_info_3_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i10);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i17);
	}
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i12);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i17);
	}
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i15);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i17);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_sv(2) = MR_sv(7);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i19);
	}
	MR_sv(1) = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i18);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i23);
	}
	MR_sv(1) = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i18);
	}
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_sv(5), 0);
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i18);
	}
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i24);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__get_closure_exception_status_12_0_i24);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__exception_analysis__get_closure_exception_status_12_0_i27);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__exception_analysis__get_closure_exception_status_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(check_hlds__type_util__type_has_user_defined_equality_pred_3_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module23)
	MR_init_entry1(fn__transform_hlds__exception_analysis__check_user_type_2_0);
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,3,7,233,5,13,15,16,19)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,22,25,28,31,34,37,40,43)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,45,47,49,51,55,58,61,64)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,67,70,73,76,79,82,85,87)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,89,90,92,94,96,98,100,102)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,104,106,108,110,112,115,118,121)
	MR_init_label8(fn__transform_hlds__exception_analysis__check_user_type_2_0,124,127,130,132,135,138,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__check_user_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__transform_hlds__exception_analysis__check_user_type_2_0_i3);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,
		fn__transform_hlds__exception_analysis__check_user_type_2_0_i7);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i5);
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r7 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r8 = MR_ctfield(0, MR_tempr2, 0);
	MR_r7 = (MR_hash_string((MR_String) MR_r8) & (MR_Integer) 63);
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(21,0))[(MR_Integer) MR_r7];
	MR_r9 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r8) == 0))) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i15);
	}
	MR_r7 = (MR_COMMON(20,0))[(MR_Integer) MR_r7];
	if (MR_INT_GE(MR_r7,0))
		continue;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	break; } /* end while */
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r7,
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i16) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i19) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i22) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i25) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i28) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i31) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i34) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i37) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i40) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i43) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i55) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i58) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i61) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i64) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i67) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i70) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i73) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i76) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i79) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i82) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i85) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i112) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i115) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i118) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i121) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i124) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i127) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i132) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i135) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i138) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233));
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set", 3)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("bag", 3)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("rational", 8)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("eqvclass", 8)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set_tree234", 11)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set_ctree234", 12)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("pqueue", 6)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("integer", 7)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("c_pointer", 9)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("const", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i45);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("context", 7)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i47);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("term", 4)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i49);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("var", 3)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i51);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("var_supply", 10)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("stack", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("rbtree", 6)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("bimap", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("injection", 9)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("cord", 4)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("rtree", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("maybe", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("map", 3)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("varset", 6)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("multi_map", 9)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	MR_r6 = (MR_hash_string((MR_String) MR_r7) & (MR_Integer) 31);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(19,0))[(MR_Integer) MR_r6];
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r7) == 0))) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i89);
	}
	MR_r6 = (MR_COMMON(18,0))[(MR_Integer) MR_r6];
	if (MR_INT_GE(MR_r6,0))
		continue;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	break; } /* end while */
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i90) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i92) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i96) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i98) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i100) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i104) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i106) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i108) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i110) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233));
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i94);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i102);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("list", 4)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set_ordlist", 11)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("pair", 4)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set_unordlist", 13)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("set_bbbtree", 11)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("justified_column", 16)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i130);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("poly_type", 9)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("queue", 5)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("assoc_list", 10)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r6 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i12);
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("maybe_error", 11)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_tempr2 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_user_type_2_0_i233);
	}
	MR_r4 = MR_r3;
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__check_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status);
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_user_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_r2 = (MR_Word) MR_string_const("Unable to get ctor and args.", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module24)
	MR_init_entry1(fn__transform_hlds__exception_analysis__check_type_2_3_0);
	MR_init_label8(fn__transform_hlds__exception_analysis__check_type_2_3_0,46,10,9,47,17,21,45,26)
	MR_init_label1(fn__transform_hlds__exception_analysis__check_type_2_3_0,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__check_type_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i46) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i47) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i21) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i45) MR_AND
		MR_LABEL_AP(fn__transform_hlds__exception_analysis__check_type_2_3_0_i48));
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__transform_hlds__exception_analysis__check_type_2_3_0_i10);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_type_2_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__check_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, type_status);
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exception_analysis.m", 20);
	MR_r2 = (MR_Word) MR_string_const("check_type_2/3: expected tuple type", 35);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,
		fn__transform_hlds__exception_analysis__check_type_2_3_0_i17);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_type_2_3_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__transform_hlds__exception_analysis__check_user_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__is_solver_type_2_0);
MR_decl_entry(check_hlds__type_util__is_existq_type_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module25)
	MR_init_entry1(fn__transform_hlds__exception_analysis__check_type_2_0);
	MR_init_label5(fn__transform_hlds__exception_analysis__check_type_2_0,7,9,4,2,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__check_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__type_util__is_solver_type_2_0,
		fn__transform_hlds__exception_analysis__check_type_2_0_i7);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_type_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__is_existq_type_2_0,
		fn__transform_hlds__exception_analysis__check_type_2_0_i9);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__check_type_2_0_i2);
	}
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		fn__transform_hlds__exception_analysis__check_type_2_0_i11);
MR_def_label(fn__transform_hlds__exception_analysis__check_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__transform_hlds__exception_analysis__check_type_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module26)
	MR_init_entry1(transform_hlds__exception_analysis__check_type_4_0);
	MR_init_label6(transform_hlds__exception_analysis__check_type_4_0,2,6,4,8,16,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__check_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__transform_hlds__exception_analysis__check_type_2_0,
		transform_hlds__exception_analysis__check_type_4_0_i2);
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i10);
	}
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__exception_analysis__check_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__check_type_4_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module27)
	MR_init_entry1(transform_hlds__exception_analysis__record_exception_analysis_result_6_0);
	MR_init_label8(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,2,3,7,6,11,13,15,17)
	MR_init_label4(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,19,22,24,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__record_exception_analysis_result_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r5;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i2);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i3);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i6);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i5);
	}
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i11);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i13);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i15);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i17);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i19);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i22);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__mmc_analysis__module_id_func_id_4_0,
		transform_hlds__exception_analysis__record_exception_analysis_result_6_0_i24);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(analysis__record_result_7_0);
MR_def_label(transform_hlds__exception_analysis__record_exception_analysis_result_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module28)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0);
	MR_init_label2(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0_i3);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___transform_hlds__exception_analysis__closures_exception_status_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module29)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0);
	MR_init_label3(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0,5,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__exception_analysis__closures_exception_status_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__exception_status_0_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module30)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__exception_analysis_answer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__exception_analysis__exception_analysis_answer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__exception_status_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__exception_status_0_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module31)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__exception_analysis_answer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__exception_analysis__exception_analysis_answer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__exception_status_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module32)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__proc_result_0_0);
	MR_init_label3(__Unify___transform_hlds__exception_analysis__proc_result_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__exception_analysis__proc_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__exception_analysis__proc_result_0_0_i2);
MR_def_label(__Unify___transform_hlds__exception_analysis__proc_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__exception_analysis__proc_result_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__exception_status_0_0,
		__Unify___transform_hlds__exception_analysis__proc_result_0_0_i4);
MR_def_label(__Unify___transform_hlds__exception_analysis__proc_result_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__exception_analysis__proc_result_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___transform_hlds__exception_analysis__proc_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___transform_hlds__exception_analysis__proc_result_0_0,1)
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

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module33)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__proc_result_0_0);
	MR_init_label4(__Compare___transform_hlds__exception_analysis__proc_result_0_0,3,7,11,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__exception_analysis__proc_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__exception_analysis__proc_result_0_0_i3);
MR_def_label(__Compare___transform_hlds__exception_analysis__proc_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__proc_result_0_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__exception_status_0_0,
		__Compare___transform_hlds__exception_analysis__proc_result_0_0_i7);
MR_def_label(__Compare___transform_hlds__exception_analysis__proc_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__proc_result_0_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__exception_analysis__proc_result_0_0_i11);
MR_def_label(__Compare___transform_hlds__exception_analysis__proc_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__exception_analysis__proc_result_0_0_i17);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___transform_hlds__exception_analysis__proc_result_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module34)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__proc_results_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__exception_analysis__proc_results_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
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


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module35)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__proc_results_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__exception_analysis__proc_results_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__exception_analysis, proc_result);
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


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module36)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__scc_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__exception_analysis__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module37)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__scc_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__exception_analysis__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module38)
	MR_init_entry1(__Unify___transform_hlds__exception_analysis__type_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__exception_analysis__type_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module39)
	MR_init_entry1(__Compare___transform_hlds__exception_analysis__type_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__exception_analysis__type_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module40)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0);
	MR_init_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0,
		fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0_i2);
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module41)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0);
	MR_init_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0,
		fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0_i2);
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module42)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0);
	MR_init_label1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0,
		fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0_i2);
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module43)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__bottom_1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__bottom_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module44)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__top_1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__top_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module45)
	MR_init_entry1(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0);
	MR_init_label4(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0,23,4,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r2,0,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i20);
	}
MR_def_label(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0_i1);
	}
	}
MR_def_label(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module46)
	MR_init_entry1(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__equivalent_2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__equivalent_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__exception_status_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module47)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0);
	MR_init_label3(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0,5,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("will_not_throw", 14);
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conditional", 11);
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("may_throw(user_exception)", 25);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("may_throw(type_exception)", 25);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module48)
	MR_init_entry1(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0);
	MR_init_label4(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("conditional", 11)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("may_throw(type_exception)", 25)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0_i4);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("may_throw(user_exception)", 25)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("will_not_throw", 14)) != 0)) {
		MR_GOTO_LAB(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pragma_exceptions_7_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module49)
	MR_init_entry1(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0);
	MR_init_label3(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0,2,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0_i2);
MR_def_label(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0_i4);
MR_def_label(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_pragma_exceptions_7_0);
	}
MR_def_label(transform_hlds__exception_analysis__IntroducedFrom__pred__write_pragma_exceptions__1240__1_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module50)
	MR_init_entry1(transform_hlds__exception_analysis__IntroducedFrom__pred__check_scc_for_exceptions__215__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__IntroducedFrom__pred__check_scc_for_exceptions__215__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module51)
	MR_init_entry1(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__382__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__382__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module52)
	MR_init_entry1(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__522__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__522__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module53)
	MR_init_entry1(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_vars__734__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__exception_analysis__IntroducedFrom__func__check_vars__734__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module54)
	MR_init_entry1(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0);
	MR_init_label1(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(transform_hlds__mmc_analysis__module_id_func_id_4_0,
		transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0_i2);
MR_def_label(transform_hlds__exception_analysis__IntroducedFrom__pred__record_dependencies__1121__1_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(analysis__record_dependency_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(transform_hlds__exception_analysis_module55)
	MR_init_entry1(transform_hlds__exception_analysis__analysis__module_is_local__ho2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__exception_analysis__analysis__module_is_local__ho2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__exception_analysis__analysis__module_is_local__ho2_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module56)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module57)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module58)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module59)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module60)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__exception_analysis_module61)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_112_95_95_104_111_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_101_120_99_101_112_116_105_111_110_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_112_95_95_104_111_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__exception_analysis_maybe_bunch_0(void)
{
	transform_hlds__exception_analysis_module0();
	transform_hlds__exception_analysis_module1();
	transform_hlds__exception_analysis_module2();
	transform_hlds__exception_analysis_module3();
	transform_hlds__exception_analysis_module4();
	transform_hlds__exception_analysis_module5();
	transform_hlds__exception_analysis_module6();
	transform_hlds__exception_analysis_module7();
	transform_hlds__exception_analysis_module8();
	transform_hlds__exception_analysis_module9();
	transform_hlds__exception_analysis_module10();
	transform_hlds__exception_analysis_module11();
	transform_hlds__exception_analysis_module12();
	transform_hlds__exception_analysis_module13();
	transform_hlds__exception_analysis_module14();
	transform_hlds__exception_analysis_module15();
	transform_hlds__exception_analysis_module16();
	transform_hlds__exception_analysis_module17();
	transform_hlds__exception_analysis_module18();
	transform_hlds__exception_analysis_module19();
	transform_hlds__exception_analysis_module20();
	transform_hlds__exception_analysis_module21();
	transform_hlds__exception_analysis_module22();
	transform_hlds__exception_analysis_module23();
	transform_hlds__exception_analysis_module24();
	transform_hlds__exception_analysis_module25();
	transform_hlds__exception_analysis_module26();
	transform_hlds__exception_analysis_module27();
	transform_hlds__exception_analysis_module28();
	transform_hlds__exception_analysis_module29();
	transform_hlds__exception_analysis_module30();
	transform_hlds__exception_analysis_module31();
	transform_hlds__exception_analysis_module32();
	transform_hlds__exception_analysis_module33();
	transform_hlds__exception_analysis_module34();
	transform_hlds__exception_analysis_module35();
	transform_hlds__exception_analysis_module36();
	transform_hlds__exception_analysis_module37();
	transform_hlds__exception_analysis_module38();
	transform_hlds__exception_analysis_module39();
}

static void mercury__transform_hlds__exception_analysis_maybe_bunch_1(void)
{
	transform_hlds__exception_analysis_module40();
	transform_hlds__exception_analysis_module41();
	transform_hlds__exception_analysis_module42();
	transform_hlds__exception_analysis_module43();
	transform_hlds__exception_analysis_module44();
	transform_hlds__exception_analysis_module45();
	transform_hlds__exception_analysis_module46();
	transform_hlds__exception_analysis_module47();
	transform_hlds__exception_analysis_module48();
	transform_hlds__exception_analysis_module49();
	transform_hlds__exception_analysis_module50();
	transform_hlds__exception_analysis_module51();
	transform_hlds__exception_analysis_module52();
	transform_hlds__exception_analysis_module53();
	transform_hlds__exception_analysis_module54();
	transform_hlds__exception_analysis_module55();
	transform_hlds__exception_analysis_module56();
	transform_hlds__exception_analysis_module57();
	transform_hlds__exception_analysis_module58();
	transform_hlds__exception_analysis_module59();
	transform_hlds__exception_analysis_module60();
	transform_hlds__exception_analysis_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__exception_analysis__init(void);
void mercury__transform_hlds__exception_analysis__init_type_tables(void);
void mercury__transform_hlds__exception_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__exception_analysis__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__exception_analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__exception_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__exception_analysis_maybe_bunch_0();
	mercury__transform_hlds__exception_analysis_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0,
		transform_hlds__exception_analysis__type_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_scc_0,
		transform_hlds__exception_analysis__scc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_results_0,
		transform_hlds__exception_analysis__proc_results_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0,
		transform_hlds__exception_analysis__proc_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0,
		transform_hlds__exception_analysis__exception_analysis_answer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0,
		transform_hlds__exception_analysis__closures_exception_status_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__to_string__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 5) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__to_string_1_1_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__to_string__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 6) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__to_string____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__from_string_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__partial_order__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 5) =
			MR_ENTRY_AP(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__more_precise_than_2_2_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__partial_order__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 6) =
			MR_ENTRY_AP(transform_hlds__exception_analysis__ClassMethod_for_analysis__partial_order____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__equivalent_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 5) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_name_2_2_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 6) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__analysis_version_number_2_2_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 7) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 8) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__bottom_1_1_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_analysis__analysis__arity2__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__, 9) =
			MR_ENTRY_AP(fn__transform_hlds__exception_analysis__ClassMethod_for_analysis__analysis____analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__top_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__transform_hlds__exception_analysis__init_debugger();
}

void mercury__transform_hlds__exception_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_type_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_scc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_results_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_proc_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0);
	}
}


void mercury__transform_hlds__exception_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__exception_analysis__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__exception_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
